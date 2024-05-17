
#include "Book.h"

using namespace std;

Book::Book(int id, string name, string author, string description,string imageUrl) : Entity(name) {
  this->id = id;
  this->author = author;
  this->description = description;
  this->imageUrl = imageUrl;
  currentReservations = 0;
  copyAmount = 0;
}

void Book::addReservation() { currentReservations++; }

void Book::removeReservation() { currentReservations--; }

int Book::addCopy(string name, bool pr) {
    copies[copyAmount] = new Copy(copyAmount + 1, name, pr);
    copyAmount++;
    return copyAmount;
}

void Book::removeCopy(int copyId) {
    copies[copyId - 1] = nullptr;
}


void Book::print() {
  cout << "Book {name = " << getName() << ", id = " << id
       << ", author = " << author << ", description = " << description
       << ", imageUrl = " << imageUrl << "}";
}

int Book::getId() { return id; }

string Book::getAuthor() { return author; }

string Book::getDescription() { return description; }

Category *Book::getCategories() { return categories; }

Copy* Book::getCopies() { return *copies; }

Copy Book::getCopy(int copyId)
{
    return *copies[copyId - 1];
}

int Book::getCurrentReservations() { return currentReservations; }

void Book::setId(int id) { this->id = id; }

void Book::setAuthor(string author) { this->author = author; }

void Book::setDescription(string description) {
  this->description = description;
}

void Book::setCategories(Category *categories) {
  this->categories = categories;
}

void Book::setImageUrl(string url) { imageUrl = url; }


void Book::setCurrentReservations(int amount) { currentReservations = amount; }
