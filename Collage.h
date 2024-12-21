#ifndef COLLAGE_H
#define COLLAGE_H

#include <iostream>
#include "Contact.h"

class Collage {
private:
    Contact contact;
    char* name;

public:
    Collage(const Contact& contact, const char* name);

    ~Collage();

    void Show() const;
};

#endif
