#ifndef ISERIALIZABLE_H
#define ISERIALIZABLE_H

#include <iostream>
#include <fstream>
#include <stdexcept>

class ISerializable {
public:
    virtual ~ISerializable() = default;
    
    virtual std::ostream& Serialize(std::ostream& output) const = 0;
    virtual std::istream& Deserialize(std::istream& input) = 0;
    
    virtual std::ostream& Serialize(const std::string& path) const {
        std::ofstream file(path, std::ios::binary);
        if (!file) throw std::runtime_error("Cannot open file for writing");
        return Serialize(file);
    }
    
    virtual std::istream& Deserialize(const std::string& path) {
        std::ifstream file(path, std::ios::binary);
        if (!file) throw std::runtime_error("Cannot open file for reading");
        return Deserialize(file);
    }
    
    virtual std::ostream& Serialize() const {
        return Serialize(std::cout);
    }
    
    virtual std::istream& Deserialize() {
        return Deserialize(std::cin);
    }
};

#endif
