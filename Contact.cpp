#include "Contact.h"

Contact::Contact(const char* phone, const char* city, const char* country) {
    this->phone = new char[strlen(phone) + 1];
    strcpy(this->phone, phone);

    this->city = new char[strlen(city) + 1];
    strcpy(this->city, city);

    this->country = new char[strlen(country) + 1];
    strcpy(this->country, country);
}

Contact::~Contact() {
    delete[] phone;
    delete[] city;
    delete[] country;
}

void Contact::Show() const {
    std::cout << "Phone: " << phone << "\nCity: " << city << "\nCountry: " << country << std::endl;
}
