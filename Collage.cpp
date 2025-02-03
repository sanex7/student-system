#include "Collage.h"
#include <iostream>

Collage::Collage(const Contact& contact, const std::string& name)
    : contact(contact), name(name) {}

std::ostream& Collage::Serialize(std::ostream& output) const {
    output << name << std::endl;
    contact.Serialize(output);
    return output;
}

std::istream& Collage::Deserialize(std::istream& input) {
    std::getline(input, name);
    contact.Deserialize(input);
    return input;
}
