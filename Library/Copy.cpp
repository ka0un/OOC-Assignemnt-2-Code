#include "Copy.h"
#include <iostream>

using namespace std;

Copy::Copy(int id, string name, bool pr) : Entity(name) {
    this->id = id;
    this->pr = pr;
    isCheckedOut = false;
}

void Copy::print() {
    cout << "{name = " << getName() << ", id = " << id << ", pr = " << pr
        << ", ischeckedout = " << isCheckedOut << "}";
}

int Copy::getId() { return id; }

bool Copy::isPr() { return pr; }

bool Copy::isCheckedout() { return isCheckedOut; }

void Copy::setId(int id) { this->id = id; }

void Copy::setPr(bool pr) { this->pr = pr; }

void Copy::setIsCheckout(bool isCheckedOut) {
    this->isCheckedOut = isCheckedOut;
}
