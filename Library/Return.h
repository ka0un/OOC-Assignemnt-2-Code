#pragma once
#include "Book.h"
#include "Action.h"
#include <iostream>

class Return : public Action
{
private:
	Copy *copy;
	double fine = 0.0;
public:
	Return(int id, string name, Copy *copy);
	bool execute() override;
	void print();

	Copy* getCopy();
	double getFine();

	void setCopy(Copy* copy);
	void setFine(double fine);
};

