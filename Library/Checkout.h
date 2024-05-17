#pragma once
#include "Copy.h"
#include "Action.h"

class Checkout : public Action
{
private:
	Copy *copy;
public:
	Checkout(int id, string name, Copy *copy);
	bool execute() override;
	void print();
	Copy* getCopy();
	void setCopy(Copy *copy);
};

