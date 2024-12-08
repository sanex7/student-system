#include "Collage.h"

Collage::Collage(const Contact& contact, const char* name)
    : contact(contact) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Collage::~Collage() {
    delete[] name;
}

void Collage::Show() const {
    std::cout << "Collage Name: " << name << std::endl;
    contact.Show();
}