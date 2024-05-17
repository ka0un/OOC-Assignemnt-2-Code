#include "Return.h"

Return::Return(int id, string name, Copy *copy) : Action(id, name, "RETURN")
{
	this->copy = copy;
}

bool Return::execute()
{
	//implementaion of return action execution
	this->postExecution();
	return true;
}

void Return::print()
{
	cout << "Return {name = " << getName() << ", id = " << getId() << ", fine = " << fine << "}";
}

Copy* Return::getCopy()
{
	return copy;
}

double Return::getFine()
{
	return fine;
}

void Return::setCopy(Copy* copy)
{
	this->copy = copy;
}

void Return::setFine(double fine)
{
	this->fine = fine;
}
