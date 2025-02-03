#include "String.h"
#include <iostream>

int main() {
    String str("Hello, world!");
    str.Serialize();
    
    String newStr;
    std::cout << "Enter a string: ";
    newStr.Deserialize();
    newStr.Serialize();
    
    return 0;
}
