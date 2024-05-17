
#pragma once
#include "Entity.h"
#include <string>
#include <iostream>

using namespace std;

class Action : public Entity {
private:
    int id;
    string permission;
    bool isexecuted = false;
    int executedTimeStamp = 0;

public:
    Action();
    Action(int id, string name, string permission);
    Action(int id, string name, string permission, bool isExecuted);

    virtual bool execute() = 0;
    void postExecution();

    int getId();
    string getPermission();
    bool isExecuted();
    int getExecutedTimeStamp();

    void setId(int id);
    void setPermission(string permission);
    void setExecuted(bool isExecuted);
    void setExecutedTimeStamp(int timestamp);
};

