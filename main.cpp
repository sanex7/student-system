#include "String.h"
#include "Contact.h"
#include "Collage.h"
#include <iostream>

int main() {
    Contact contact("123-456-7890", "Kyiv", "Ukraine");
    Collage collage(contact, "Kyiv Polytechnic Institute");
    
    collage.Serialize(std::cout);
    
    Collage newCollage;
    std::cout << "Enter collage details (name, phone, city, country):" << std::endl;
    newCollage.Deserialize(std::cin);
    newCollage.Serialize(std::cout);
    
    return 0;
}
