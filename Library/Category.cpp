#include "Category.h"
#include <iostream>

using namespace std;

Category::Category(int id, string name) : Entity(name)
{
	this->id = id;
}

int Category::getId()
{
	return id;
}

void Category::setId(int id) 
{
	this->id = id;
}

void Category::print()
{
	std::cout << "Category {id = " << id << ", name = " << getName() << "}";
}
