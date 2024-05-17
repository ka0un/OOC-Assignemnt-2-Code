
#include "Action.h"

Action::Action() : Entity("null") {}

Action::Action(int id, string name, string permission) : Entity(name) {
  this->id = id;
  this->permission = permission;
}

Action::Action(int id, string name, string permission, bool isExecuted)
    : Action(id, name, permission) {
  this->isexecuted = isExecuted;
}

void Action::postExecution() {
  int currentTimeStamp =
      0; // use proper way to get current time stamp on implemention
  this->setExecuted(true);
  this->setExecutedTimeStamp(currentTimeStamp);
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
