#ifndef STUDENT_H
#define STUDENT_H

#include "ISerializable.h"
#include "Contact.h"
#include "Collage.h"
#include <string>

class Student : public ISerializable {
private:
    std::string fullName;
    std::string birthDate;
    Contact contact;
    Collage collage;
public:
    Student(const std::string& fullName = "", const std::string& birthDate = "", const Contact& contact = Contact(), const Collage& collage = Collage());
    
    std::ostream& Serialize(std::ostream& output) const override;
    std::istream& Deserialize(std::istream& input) override;
};

#endif
