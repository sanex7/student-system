#include "Student.h"

Student::Student(const std::string& fullName, const std::string& birthDate, const Contact& contact, const Collage& collage)
    : fullName(fullName), birthDate(birthDate), contact(contact), collage(collage) {}

std::ostream& Student::Serialize(std::ostream& output) const {
    output << fullName << "\n" << birthDate << "\n";
    contact.Serialize(output);
    collage.Serialize(output);
    return output;
}

std::istream& Student::Deserialize(std::istream& input) {
    std::getline(input, fullName);
    std::getline(input, birthDate);
    contact.Deserialize(input);
    collage.Deserialize(input);
    return input;
}
