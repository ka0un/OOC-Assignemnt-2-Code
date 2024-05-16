#include "Entity.h"
#include <iostream>
#include <string>

Entity::Entity(const string name) : name(name) {}

string Entity::getName() const { return name; }

void Entity::setName(const string name) { this->name = name; }

void Entity::print() const {
	std::cout << "Entity {name = " << name << "}" << std::endl;
}







