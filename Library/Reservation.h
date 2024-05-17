#pragma once
#include "Book.h"
#include "Action.h"

class Reservation : public Action
{
private:
	Book *book;
	int durationSecounds;

public:
	Reservation(int id, string name, Book* book, int durationSecounds);
	bool execute() override;
	void print();

	Book* getBook();
	int getDurationSecounds();

	void setBook(Book *book);
	void setDurationSecounds(int secounds);

};

