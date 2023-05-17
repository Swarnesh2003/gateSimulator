#ifndef LOGIC_H_INCLUDED
#define LOGIC_H_INCLUDED


#include<iostream>
#include<string>
#include<ctime>
using namespace std;
//Class Account for login
class Account
{
    private:
        string username;
        string password;
    public:
        bool login();
        void signup();
};


#endif // LOGIC_H_INCLUDED
