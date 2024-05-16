#include "User.h"
#include <iostream>

using namespace std;

User::User() : Entity("null") {}

User::User(int id, string name, string nic, string password) : Entity(name) {
    this->id = id;
    this->nic = nic;
    this->password = password;
    this->role = new Role(1, "Member"); // default role
}

User::User(int id, string name, string nic, string password, Role* role)
    : User(id, name, nic, password) {
    this->role = role;
}

bool User::performs(Action* action) {
    // checks if user has permission to execute the action
    if (role->hasPermission(action->getPermission())) {
        return action->execute();
    }
    else {
        return false;
    }
}

void User::print() {
    cout << "User {id = " << id << ", name = " << getName() << ", nic = " << nic
        << ", password = " << password << ", roleid = " << role->getId() << "}";
}

int User::getId() { return id; }

string User::getEmail() { return email; }

string User::getNic() { return nic; }

string User::getPassword() { return password; }

Role* User::getRole() { return role; }

void User::setId(int id) { this->id = id; }

void User::setEmail(string email) { this->email = email; }

void User::setNic(string nic) { this->nic = nic; }

void User::setRole(Role* role) { this->role = role; }





