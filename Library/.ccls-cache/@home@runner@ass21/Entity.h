#pragma once
#include <iostream>

using namespace std;

class Entity {
private:
	string name;

public:
	Entity(const string name);
	string getName() const;
	void setName(const string name);
	void print() const;
};







