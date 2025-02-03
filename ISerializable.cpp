#include <iostream>
#include <fstream>
#include <cstring>

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

class String : public ISerializable {
private:
    char* str;
    size_t size;
public:
    String(const char* input = "") {
        size = std::strlen(input);
        str = new char[size + 1];
        std::strcpy(str, input);
    }
    
    ~String() {
        delete[] str;
    }
    
    std::ostream& Serialize(std::ostream& output) const override {
        output << size << " " << str << std::endl;
        return output;
    }
    
    std::istream& Deserialize(std::istream& input) override {
        delete[] str;
        input >> size;
        input.ignore();
        str = new char[size + 1];
        input.getline(str, size + 1);
        return input;
    }
};

int main() {
    String obj("Hello, World!");
    obj.Serialize();
    return 0;
}
