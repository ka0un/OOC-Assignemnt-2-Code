#include "Entity.h"
#include <iostream>

using namespace std;

class Copy : public Entity
{
private:
	int id;
	bool pr;
	bool isCheckedOut;
public:
	Copy(int id, string name, bool pr);
	void print();
	int getId();
	bool isPr();
	bool isCheckedout();
	void setId(int id);
	void setPr(bool pr);
	void setIsCheckout(bool isCheckedOut);
};
