#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include "Contact.h"
#include "Collage.h"

class Student {
private:
    char* fullName;
    char* birthDate;
    Contact contact;
    Collage collage;

public:
    Student(const char* fullName, const char* birthDate, const Contact& contact, const Collage& collage);

    ~Student();

    void Show() const;
};

#endif