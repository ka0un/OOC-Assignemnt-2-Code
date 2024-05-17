#pragma once
#include <iostream>
#include "Action.h"


using namespace std;

class Announcement : public Action
{
private:
	string message;
	int durationSecounds;
	bool isoutdated;
public:
	Announcement(int id, string name, string message, int durationSecounds);
	bool execute() override;
	void print();

	string getMessage();
	int getDurationSecounds();
	bool isOutdated();

	void setMessage(string message);
	void setDurationSecounds(int secounds);
	void setIsOutdated(bool isOutdated);

};

