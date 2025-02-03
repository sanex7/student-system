#include "Contact.h"
#include <iostream>

Contact::Contact(const std::string& phone, const std::string& city, const std::string& country)
    : phone(phone), city(city), country(country) {}

std::ostream& Contact::Serialize(std::ostream& output) const {
    output << phone << " " << city << " " << country << std::endl;
    return output;
}

std::istream& Contact::Deserialize(std::istream& input) {
    input >> phone >> city >> country;
    return input;
}
