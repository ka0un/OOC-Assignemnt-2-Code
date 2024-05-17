#include "Checkout.h"
#include <iostream>

using namespace std;

Checkout::Checkout(int id, string name, Copy *copy) : Action(id, name, "CHECKOUT")
{
    this->copy = copy;
}

bool Checkout::execute()
{
    //implimenation of checkout action execution
    this->postExecution();
    return false;
}

void Checkout::print()
{
    cout << "Checkout {name = " << getName() << ", id = " << getId() << ", isExecuted = " << isExecuted() << "}";
}

Copy* Checkout::getCopy()
{
    return copy;
}

void Checkout::setCopy(Copy *copy)
{
    this->copy = copy;
}
