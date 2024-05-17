
#include "Announcement.h"

using namespace std;

Announcement::Announcement(int id, string name, string message, int durationSecounds) : Action(id, name, "CREATE_ANNOUNCEMENT")
{
	this->message = message;
	this->durationSecounds = durationSecounds;
	isoutdated = false;
}

bool Announcement::execute()
{
	//implimentaion of create announcement action execution
	this->postExecution();
	return true;
}

void Announcement::print()
{
	cout << "Announcement {name =" << getName() << ", id = " << getId() << ", message = " << message << ", duration = " << durationSecounds << ", isOutdated = " << isoutdated << "}";
}

string Announcement::getMessage()
{
	return message;
}

int Announcement::getDurationSecounds()
{
	return durationSecounds;
}

bool Announcement::isOutdated()
{
	return isoutdated;
}

void Announcement::setMessage(string message)
{
	this->message = message;
}

void Announcement::setDurationSecounds(int secounds)
{
	durationSecounds = secounds;
}

void Announcement::setIsOutdated(bool isOutdated)
{
	isoutdated = isOutdated;
}

