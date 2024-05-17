#pragma once
#include "Entity.h"
#include <iostream>

using namespace std;

class Category : public Entity
{
private:
	int id;
public:
	Category(int id, string name);
	int getId();
	void setId(int id);
	void print();
};

