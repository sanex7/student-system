#ifndef CONTACT_H
#define CONTACT_H

#include <cstring>
#include <iostream>

class Contact {
private:
    char* phone;
    char* city;
    char* country;

public:
    Contact(const char* phone, const char* city, const char* country);

    ~Contact();

    void Show() const;
};

#endif
