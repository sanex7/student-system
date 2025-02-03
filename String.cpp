#include "String.h"

String::String(const std::string& str) : data(str) {}

std::ostream& String::Serialize(std::ostream& output) const {
    output << data << std::endl;
    return output;
}

std::istream& String::Deserialize(std::istream& input) {
    std::getline(input, data);
    return input;
}
