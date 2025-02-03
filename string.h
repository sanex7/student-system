#ifndef STRING_H
#define STRING_H

#include "ISerializable.h"
#include <string>

class String : public ISerializable {
private:
    std::string data;
public:
    String(const std::string& str = "");
    
    std::ostream& Serialize(std::ostream& output) const override;
    std::istream& Deserialize(std::istream& input) override;
};

#endif
