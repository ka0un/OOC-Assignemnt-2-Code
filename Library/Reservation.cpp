#include "Reservation.h"

Reservation::Reservation(int id, string name, Book *book, int durationSecounds) : Action(id, name, "RESERVATION")
{
    this->book = book;
    this->durationSecounds = durationSecounds;
}

bool Reservation::execute()
{

    //implementaion of reservation action
    this->postExecution();
    return true;
}

void Reservation::print()
{
    cout << "Reservation {name = " << getName() << ", id = " << getId() << ", duraation = " << durationSecounds << "}";
}

Book* Reservation::getBook()
{
    return book;
}

int Reservation::getDurationSecounds()
{
    return durationSecounds;
}

void Reservation::setBook(Book* book)
{
    this->book = book;
}

void Reservation::setDurationSecounds(int secounds)
{
    this->durationSecounds = secounds;
}
