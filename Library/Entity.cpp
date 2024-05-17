#include "Entity.h"

Entity::Entity(const string name) : name(name) {}

string Entity::getName() const { return name; }

void Entity::setName(const string name) { this->name = name; }

void Entity::print()
{
	cout << "Entity {}";
}








