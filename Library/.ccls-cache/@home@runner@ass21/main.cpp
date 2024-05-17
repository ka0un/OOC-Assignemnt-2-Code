#include "Book.h"
#include "User.h"
#include <iostream>
#include <string>
#include "Announcement.h"
#include "Checkout.h"

using namespace std;

int main() {
    cout << "test";

    Role* member = new Role(1, "Member");

    User* user = new User(1, "kamal", "123", "123123", member);



    cout << endl;
    member->print();
    cout << endl;
    user->print();
    cout << endl;

    Category* category = new Category(1, "cat1");

    category->print();

    Book* book = new Book(1, "Madol Duwa", "Martin Wikramasighe", "example", "https");
    Category categories[1] = { Category(1, "Nobvels") };
    Copy copies[2] = { Copy(1, "copy 1", false), Copy(2, "copy 2", false) };
    book->setCategories(categories);
    book->setCopies(copies);

    book->print();
    cout << endl << endl;

    Category* bookcats = book->getCategories();

    bookcats[0].print();
    cout << endl << endl;

    Copy* copis = book->getCopies();

    copis[0].print();
    cout << endl << endl;

    copis[1].print();
    cout << endl << endl;

    Announcement* an1 = new Announcement(1, "New Ann", "welcome new", 18000);
    user->performs(an1);
    an1->print();
    cout << endl << endl;

    Checkout* ck = new Checkout(1, "chekone", &copis[0]);
    user->performs(ck);
    ck->print();
    cout << endl << endl;


}


