#pragma once
#include "Entity.h"
#include <iostream>
class Role : public Entity {
private:
	int id;
	string permissions[100];

public:
	Role(int id, string name);
	bool hasPermission(string permission);
	void print();
	int getId();
	string* getPermissions();
	void setId(int id);
	void addPermission(string permission);
};

