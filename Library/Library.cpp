// Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include <iostream>
#include "Entity.h"
#include "User.h"
#include "Role.h"
#include "Action.h"
#include <string>

using namespace std;

int main()
{
    cout << "test";

    Role* member = new Role(1, "Member");
    
    User* user = new User(1, "kamal", "123", "123123", member);

    Action* test = new Action(1, "add Books", "ADD_BOOKS");

    user->performs(test);

    cout << endl;
    member->print();
    cout << endl;
    user->print();
    cout << endl;
    test->print();
    cout << endl;
}


