#pragma once
#include <iostream>
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
	Copy *copies[10] = {nullptr}; //coppy pointer array initalizzed with 10 null poniters
	int currentReservations;
	int copyAmount;

public:
	Book(int id, string name, string author, string description, string imageUrl);
	void addReservation();
	void removeReservation();
	int addCopy(string name, bool pr); //this function returns newly created copyId
	void removeCopy(int copyId);
	void print();

	int getId();
	string getAuthor();
	string getDescription();
	Category* getCategories();
	Copy* getCopies();
	Copy getCopy(int copyId);
	int getCurrentReservations();

	void setId(int id);
	void setAuthor(string author);
	void setDescription(string description);
	void setCategories(Category *categories);
	void setImageUrl(string url);
	void setCurrentReservations(int amount);
	

};


