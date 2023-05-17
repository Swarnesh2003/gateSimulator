#include<iostream>
#include<vector>
#include<string>
#include "logic.h"
#include<fstream>
#include<sstream>
#include<conio.h>
#include<ctime>
#include<windows.h>
using namespace std;
//function for getting username and password from the user
void Account::signup()
{
    ofstream login;
    char ch;
    login.open("user.txt", ios::app);
    password="";
    cout<<"Enter the Username: ";
    cin>>username;
    cout<<"Enter the password: ";

    ch = getch();
    while(ch != 13)
    {
        password=password+ch;
        cout << '*';
        ch = getch();
    }
    cout<<"Signed Up successfully"<<endl;
    login<<username<<" "<<password<<endl;
    login.close();
}
bool Account::login()
{
    a:
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\tLOGIC GATES CIRCUIT"<<endl;
    cout<<"\n\t\t\t\t\tEnter your username:";
    cin>>username;
    cout<<"\n\t\t\t\t\tEnter the password:";
   char ch, ch1;
   int count1=0;
   password="";
   ch = getch();
   while(ch != 13)
    {
      password=password+ch;
      cout << '*';
      ch = getch();
    }
    ifstream login;
    ofstream correctLogin;
    ofstream incorrectLogin;
    string user,pass;
    time_t now=time(0);
    char* dt=ctime(&now);
    login.open("user.txt");
    correctLogin.open("clogin.txt",ios::app);
    incorrectLogin.open("iclogin.txt",ios::app);
    while (login >> user >> pass)
    {
            if (user == username && pass == password)
            {
                    cout<<"\n";
                    cout<<"Login successfull" << endl;
                    correctLogin<<"Login :"<<username<<" logged in at "<<dt<<endl;
                    system("cls");
                    count1=1;
                    return 1;
                    break;
            }
    }
    if(count1==0)
    {
        cout<<"/n"<<endl;
        cout<<"/n"<<endl;
        cout<<"Login unsuccessful.. try again"<<endl;
        cout<<"Press any key to continue..";
        cin>>ch1;

        incorrectLogin<<"Username: "<<username<<endl;
        incorrectLogin<<"Password: "<<password<<endl;
        incorrectLogin<<"Time of attempted login: "<<dt<<endl;
        system("cls");
        goto a;
        return 0;
    }
}
