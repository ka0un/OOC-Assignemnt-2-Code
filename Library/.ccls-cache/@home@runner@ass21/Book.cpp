
#include "Book.h"

using namespace std;

Book::Book(int id, string name, string author, string description,
           string imageUrl)
    : Entity(name) {
  this->id = id;
  this->author = author;
  this->description = description;
  this->imageUrl = imageUrl;
  currentReservations = 0;
}

void Book::addReservation() { currentReservations++; }

void Book::removeReservation() { currentReservations--; }

void Book::addCopy(Copy copy) {
  // add copy to copies array
}

void Book::removeCopy(Copy copy) {
  // remove copy from copies array
}

void Book::addCategory(Category category) {
  // add category to categories array
}

void Book::removeCategory(Category category) {
  // remove category from categories array
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

Copy *Book::getCopies() { return copies; }

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

void Book::setCopies(Copy *copies) { this->copies = copies; }

void Book::setCurrentReservations(int amount) { currentReservations = amount; }
