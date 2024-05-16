
#include "Action.h"
#include "Entity.h"
#include <iostream>
#include <string>

Action::Action() : Entity("null") {}

Action::Action(int id, string name, string permission) : Entity(name) {
    this->id = id;
    this->permission = permission;
}

Action::Action(int id, string name, string permission, bool isExecuted) : Action(id, name, permission) {
    this->isexecuted = isExecuted;
}

bool Action::execute() {
    // checks if user has reqired permission to execute action and
    //  if yes execute it and return true
    //  else return false
    return true;
}

void Action::print() {
    cout << "Action {id = " << id << ", name = " << getName()
        << ", permission = " << permission << "}";
}

int Action::getId() { return id; }

string Action::getPermission() { return permission; }

bool Action::isExecuted() { return isexecuted; }

int Action::getExecutedTimeStamp() { return executedTimeStamp; }

void Action::setId(int id) { this->id = id; }

void Action::setPermission(string permission) { this->permission = permission; }

void Action::setExecuted(bool isExecuted) { this->isexecuted = isExecuted; }

void Action::setExecutedTimeStamp(int timestamp) {
    this->executedTimeStamp = timestamp;
}
