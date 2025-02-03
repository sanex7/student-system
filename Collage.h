#ifndef COLLAGE_H
#define COLLAGE_H

#include "ISerializable.h"
#include "Contact.h"
#include <string>

class Collage : public ISerializable {
private:
    Contact contact;
    std::string name;
public:
    Collage(const Contact& contact = Contact(), const std::string& name = "");
    
    std::ostream& Serialize(std::ostream& output) const override;
    std::istream& Deserialize(std::istream& input) override;
};

#endif // COLLAGE_H
