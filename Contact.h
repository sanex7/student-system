#ifndef CONTACT_H
#define CONTACT_H

#include "ISerializable.h"
#include <string>

class Contact : public ISerializable {
private:
    std::string phone;
    std::string city;
    std::string country;
public:
    Contact(const std::string& phone = "", const std::string& city = "", const std::string& country = "");
    
    std::ostream& Serialize(std::ostream& output) const override;
    std::istream& Deserialize(std::istream& input) override;
};

#endif
