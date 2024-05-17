#include "Role.h"

Role::Role(int id, string name) : Entity(name) { this->id = id; }

bool Role::hasPermission(string permission) {
    // checks if permission array contains given string and if yes return true
    // else false
    return true;
}

void Role::print() {
    cout << "Role {name = " << getName() << ", id = " << getId() << "}";
}

int Role::getId() { return id; }

string* Role::getPermissions() { return permissions; }

void Role::setId(int id) { this->id = id; }

void Role::addPermission(string permission) {
    // add permission string to the arry
}
