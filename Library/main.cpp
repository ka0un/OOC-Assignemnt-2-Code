#include "Book.h"
#include "User.h"
#include <iostream>
#include <string>
#include "Announcement.h"
#include "Checkout.h"
#include "Return.h"
#include "Reservation.h"

using namespace std;

int main() {
    
    //Creating Roles Of Library Users
    Role *member = new Role(1, "Member");
    Role *assistant = new Role(2, "Library Assistant");
    Role *manager = new Role(3, "Library Manager");
    Role *admin = new Role(4, "Library Administrator");

    //Assigning Permissions to Roles
    member->addPermission("BROWSE_BOOKS");
    member->addPermission("RESERVATION");

    assistant->addPermission("RESERVATION");
    assistant->addPermission("BROWSE_BOOKS");
    assistant->addPermission("CHECKOUT");
    assistant->addPermission("RETURN");

    manager->addPermission("BROWSE_BOOKS");
    manager->addPermission("RESERVATION");
    manager->addPermission("CHECKOUT");
    manager->addPermission("RETURN");
    manager->addPermission("CREATE_ANNOUNCEMENT");

    admin->addPermission("BROWSE_BOOKS");
    admin->addPermission("RESERVATION");
    admin->addPermission("CHECKOUT");
    admin->addPermission("RETURN");
    admin->addPermission("CREATE_ANNOUNCEMENT");

    //printing some infomation about roles
    member->print();
    cout << endl << endl;

    assistant->print();
    cout << endl << endl;

    manager->print();
    cout << endl << endl;

    admin->print();
    cout << endl << endl;

    //Creating User Accounts
    User* adminUser = new User(1, "Kasun Hapangama", "kasun@hapangama.com", "123123", "password", admin);
    User* assistantUser = new User(2, "Eyyas", "eyyas123@gmail.com", "123123", "password", assistant);
    User* managerUser = new User(3, "Kavindu Herath", "kavndu@gmail.com", "123123", "password", manager);

    User* member1 = new User(4, "Danuli", "daniru@gmail.com", "123123", "password", member);
    User* member2 = new User(5, "Oshadi", "123123@gmail.com" , "123123", "password", member);

    //printing infomation about users



    

    


}


