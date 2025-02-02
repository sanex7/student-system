#include <iostream>
#include <fstream>

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

class TestSerializable : public ISerializable {
private:
    int data;
public:
    TestSerializable(int val = 0) : data(val) {}
    
    std::ostream& Serialize(std::ostream& output) const override {
        output << data << std::endl;
        return output;
    }
    
    std::istream& Deserialize(std::istream& input) override {
        input >> data;
        return input;
    }
};

int main() {
    TestSerializable obj(42);
    obj.Serialize();
    return 0;
}
