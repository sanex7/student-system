#include "Contact.h"
#include "Collage.h"
#include "Student.h"

int main() {
    Contact contact("123-456-7890", "Kyiv", "Ukraine");
    Collage collage(contact, "Kyiv Polytechnic Institute");
    Student student("Ivan Petrov", "2000-01-01", contact, collage);

    student.Show();

    return 0;
}