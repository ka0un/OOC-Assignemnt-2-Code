#pragma once
#include <iostream>
#include "Entity.h"
#include "Category.h"
#include "Copy.h"

using namespace std;

class Book : public Entity
{
private:
	int id;
	string author;
	string description;
	Category *categories;
	string imageUrl;
	Copy *copies;
	int currentReservations;

public:
	Book(int id, string name, string author, string description, string imageUrl);
	void addReservation();
	void removeReservation();
	void addCopy(Copy copy);
	void removeCopy(Copy copy);
	void addCategory(Category category);
	void removeCategory(Category category);
	void print();

	int getId();
	string getAuthor();
	string getDescription();
	Category* getCategories();
	Copy* getCopies();
	int getCurrentReservations();

	void setId(int id);
	void setAuthor(string author);
	void setDescription(string description);
	void setCategories(Category *categories);
	void setImageUrl(string url);
	void setCopies(Copy *copies);
	void setCurrentReservations(int amount);
	

};


