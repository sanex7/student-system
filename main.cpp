#include "String.h"
#include "Contact.h"
#include <iostream>

int main() {
    String str("Hello, world!");
    str.Serialize();
    
    String newStr;
    std::cout << "Enter a string: ";
    newStr.Deserialize();
    newStr.Serialize();
    
    Contact contact("123-456-7890", "Kyiv", "Ukraine");
    contact.Serialize();
    
    Contact newContact;
    std::cout << "Enter contact details (phone city country): ";
    newContact.Deserialize();
    newContact.Serialize();
    
    return 0;
}
