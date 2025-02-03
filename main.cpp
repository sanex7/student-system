#include "String.h"
#include "Contact.h"
#include "Collage.h"
#include "Student.h"
#include <iostream>
#include <fstream>

int main() {
    Contact contact("123-456-7890", "Kyiv", "Ukraine");
    Collage collage(contact, "Kyiv Polytechnic Institute");
    Student student("Ivan Petrov", "2000-01-01", contact, collage);

    std::ofstream outFile("student.txt");
    if (outFile) {
        student.Serialize(outFile);
        outFile.close();
    }
    
    Student newStudent;
    std::ifstream inFile("student.txt");
    if (inFile) {
        newStudent.Deserialize(inFile);
        inFile.close();
    }
    
    std::cout << "Deserialized Student:" << std::endl;
    newStudent.Serialize(std::cout);
    
    collage.Serialize(std::cout);
    
    Collage newCollage;
    std::cout << "Enter collage details (name, phone, city, country):" << std::endl;
    newCollage.Deserialize(std::cin);
    newCollage.Serialize(std::cout);
    
    return 0;
}
