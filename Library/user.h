#pragma once
#include "Action.h"
#include "Entity.h"
#include "Role.h"
#include <iostream>

using namespace std;

class User : public Entity {
private:
	int id;
	string email;
	string nic;
	string password;
	Role* role;

public:
	User();
	User(int id, string name, string nic, string email, string password);
	User(int id, string name, string nic, string email, string password, Role* role);
	bool performs(Action* action);
	void print();
	int getId();
	string getEmail();
	string getNic();
	string getPassword();
	Role* getRole();
	void setId(int id);
	void setEmail(string email);
	void setNic(string nic);
	void setRole(Role* role);
};

