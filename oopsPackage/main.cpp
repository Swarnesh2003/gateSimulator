/**
SEMESTER 2 OOPS PACKAGE.
LOGIC GATE SIMULATION.
S SWARNESHWAR          21PW25.
M THIRUSHA             21PW39.
**/
#include<iostream>
#include<string>
#include "logic.h"
#include "gate.h"
#include "circuit.h"
#include<fstream>
#include<conio.h>
#include<sstream>
using namespace std;
void choice();
int main()
{
    Account a1;
    int choice1, val;
    a:
    cout<<"1. Login"<<endl;
    cout<<"2. Sign Up"<<endl;
    cout<<"Enter your choice:";
    cin>>choice1;
    system("cls");
    if (choice1==1)
    {
        val=a1.login();
    }
    else
    {
        a1.signup();
        system("cls");
        goto a;
    }
    if(val==1)
    {
        int c;
        ofstream fp;
        fp.open("clogin.txt",ios::app);
        int num=1;
        while(num)
        {
            cout<<"\t\t\t\tWelcome to GATE STIMULATION\n\n";
            cout<<"Choose any one of the following below..."<<endl;
            cout<<"1.AND Gate"<<endl;
            cout<<"2.OR Gate"<<endl;
            cout<<"3.NOT Gate"<<endl;
            cout<<"4.XOR Gate"<<endl;
            cout<<"5.NAND Gate"<<endl;
            cout<<"6.NOR Gate"<<endl;
            cout<<"7.XNOR Gate"<<endl;
            cout<<"8.Adder Circuit"<<endl;
            cout<<"9.Subtractor Circuit"<<endl;
            cout<<"10.Exit"<<endl<<endl;
            cout<<"Enter your choice  :  ";
            cin>>c;
            switch(c)
            {
                case 1:
                {
                    fp<<"[USER] used AND GATE";
                    int i;
                    choice();
                    cin>>i;
                    And_Gate a1;
                    switch(i)
                    {
                        case 1:
                        {
                            a1.input(2);
                            fp<<"and displayed truth table for 2 variables"<<endl;
                            cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                            cout<<"A B  A and B\n"<<endl;
                            a1.display();
                            break;
                        }
                        case 2:
                        {
                            a1.input(3);
                            fp<<"and displayed truth table for 3 variables"<<endl;
                            cout<<"\nThe Truth Table for 3 variables :\n"<<endl;
                            cout<<"A B C  A and B and c\n"<<endl;
                            a1.display();
                            break;
                        }
                        case 3:
                        {
                            fp<<"and got the required output for desired 2 input Gate"<<endl;
                            int a,b;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            a1.input(a,b);
                            a1.displayval();
                            break;
                        }
                        case 4:
                        {
                            int a,b,c;
                            fp<<"and got the required output for desired 3 input Gate"<<endl;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            cout<<"Enter the 3rd input  : ";
                            cin>>c;
                            a1.input(a,b,c);
                            a1.displayval();
                            break;
                        }
                    }
                    break;
                }
                case 2:
                {
                    fp<<"[USER] : used OR GATE ";
                    int i;
                    choice();
                    cin>>i;
                    Or_Gate a1;
                    switch(i)
                    {
                        case 1:
                            {
                                a1.input(2);
                                fp<<"and displayed truth table for 2 variables"<<endl;
                                cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                                cout<<"A B  A or B\n"<<endl;
                                a1.display();
                                break;
                            }
                        case 2:
                            {
                                a1.input(3);
                                fp<<"and displayed truth table for 3 variables"<<endl;
                                cout<<"\nThe Truth Table for 3 variables :\n"<<endl;
                                cout<<"A B C  A or B or c\n"<<endl;
                                a1.display();
                                break;
                            }
                        case 3:
                            {
                                fp<<"and got the required output for desired 2 input Gate"<<endl;
                                int a,b;
                                cout<<"Enter the 1st input  : ";
                                cin>>a;
                                cout<<"Enter the 2nd input  : ";
                                cin>>b;
                                a1.input(a,b);
                                a1.displayval();
                                break;
                            }
                        case 4:
                            {
                                fp<<"and got the required output for desired 3 input Gate"<<endl;
                                int a,b,c;
                                cout<<"Enter the 1st input  : ";
                                cin>>a;
                                cout<<"Enter the 2nd input  : ";
                                cin>>b;
                                cout<<"Enter the 3rd input  : ";
                                cin>>c;
                                a1.input(a,b,c);
                                a1.displayval();
                                break;
                            }
                        }
                        break;
                    }
                    case 3:
                    {
                        int i;
                        cout<<"Enter any one of the following below ...\n"<<endl;
                        cout<<"1. To display truth table."<<endl;
                        cout<<"2. To get output for desired input.\n"<<endl;
                        cout<<"Enter your choice  :  ";
                        cin>>i;
                        fp<<"[USER] : used NOT GATE ";
                        Not_Gate a1;
                        switch(i)
                        {
                            case 1:
                            {
                                a1.input();
                                fp<<"and displayed truth table for 2 variables"<<endl;
                                cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                                cout<<"A  ~A\n"<<endl;
                                a1.displaynot();
                                break;
                            }
                            case 2:
                            {
                                int a;
                                fp<<"and got the required output for the given input"<<endl;
                                cout<<"Enter your input : ";
                                cin>>a;
                                a1.input(a);
                                a1.displayvalnot();
                                break;
                            }
                        }
                        break;
                    }
                case 4:
                {
                    fp<<"[USER] : used XOR GATE ";
                    int i;
                    choice();
                    cin>>i;
                    Xor_Gate a1;
                    switch(i)
                    {
                        case 1:
                            {
                                a1.input(2);
                                fp<<"and displayed truth table for 2 variables"<<endl;
                                cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                                cout<<"A B  A Xor B\n"<<endl;
                                a1.display();
                                break;
                            }
                        case 2:
                            {
                                a1.input(3);
                                fp<<"and displayed truth table for 3 variables"<<endl;
                                cout<<"\nThe Truth Table for 3 variables :\n"<<endl;
                                cout<<"A B C  A Xor B Xor c\n"<<endl;
                                a1.display();
                                break;
                            }

                        case 3:
                            {
                                fp<<"and got the required output for desired 2 input Gate"<<endl;
                                int a,b;
                                cout<<"Enter the 1st input  : ";
                                cin>>a;
                                cout<<"Enter the 2nd input  : ";
                                cin>>b;
                                a1.input(a,b);
                                a1.displayval();
                                break;
                            }
                        case 4:
                            {
                                fp<<"and got the required output for desired 3 input Gate"<<endl;
                                int a,b,c;
                                cout<<"Enter the 1st input  : ";
                                cin>>a;
                                cout<<"Enter the 2nd input  : ";
                                cin>>b;
                                cout<<"Enter the 3rd input  : ";
                                cin>>c;
                                a1.input(a,b,c);
                                a1.displayval();
                                break;
                            }
                    }
                    break;
                }
                case 5:
                {
                    fp<<"[USER] : used NAND GATE ";
                    int i;
                    choice();
                    cin>>i;
                    Nand_Gate a2;
                    switch(i)
                    {
                        case 1:
                            {
                                a2.input(2);
                                fp<<"and displayed truth table for 2 variables"<<endl;
                                cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                                cout<<"A B  A Nand B\n"<<endl;
                                a2.display();
                                break;
                            }
                        case 2:
                            {
                                a2.input(3);
                                fp<<"and displayed truth table for 3 variables"<<endl;
                                cout<<"\nThe Truth Table for 3 variables :\n"<<endl;
                                cout<<"A B C  A Nand B Nand c\n"<<endl;
                                a2.display();
                                break;
                            }
                        case 3:
                            {
                                fp<<"and got the required output for desired 2 input Gate"<<endl;
                                int a,b;
                                cout<<"Enter the 1st input  : ";
                                cin>>a;
                                cout<<"Enter the 2nd input  : ";
                                cin>>b;
                                a2.input(a,b);
                                a2.displayval();
                                break;
                            }
                        case 4:
                            {
                                fp<<"and got the required output for desired 3 input Gate"<<endl;
                                int a,b,c;
                                cout<<"Enter the 1st input  : ";
                                cin>>a;
                                cout<<"Enter the 2nd input  : ";
                                cin>>b;
                                cout<<"Enter the 3rd input  : ";
                                cin>>c;
                                a2.input(a,b,c);
                                a2.displayval();
                                break;
                            }
                        }
                        break;
                }
              case 6:
                {
                    fp<<"[USER] : used NOR GATE ";
                    int i;
                    choice();
                    cin>>i;
                    Nor_Gate a1;
                    switch(i)
                    {
                    case 1:
                        a1.input(2);
                         fp<<"and displayed truth table for 2 variables"<<endl;
                        cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                        cout<<"A B  A Nor B\n"<<endl;
                        a1.Gate::display();
                        break;
                    case 2:
                        a1.input(3);
                         fp<<"and displayed truth table for 3 variables"<<endl;
                        cout<<"\nThe Truth Table for 3 variables :\n"<<endl;
                        cout<<"A B C  A Nor B Nor c\n"<<endl;
                        a1.Gate::display();
                        break;
                    case 3:
                        {
                            fp<<"and got the required output for desired 2 input Gate"<<endl;
                            int a,b;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                           a1.input(a,b);
                            a1.Gate::displayval();
                            break;
                        }
                    case 4:
                        {
                            fp<<"and got the required output for desired 3 input Gate"<<endl;
                            int a,b,c;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            cout<<"Enter the 3rd input  : ";
                            cin>>c;
                            a1.input(a,b,c);
                            a1.Gate::displayval();
                            break;
                        }
                    }
                    break;
                }
             case 7:
                {
                    fp<<"[USER] : used XNOR GATE ";
                    int i;
                    choice();
                    cin>>i;
                    Xnor_Gate a1;
                    switch(i)
                    {
                    case 1:
                        a1.input(2);
                         fp<<"and displayed truth table for 2 variables"<<endl;
                        cout<<"\nThe Truth Table for 2 variables :\n"<<endl;
                        cout<<"A B  A Xnor B\n"<<endl;
                        a1.Gate::display();
                        break;
                    case 2:
                        a1.input(3);
                         fp<<"and displayed truth table for 3 variables"<<endl;
                        cout<<"\nThe Truth Table for 3 variables :\n"<<endl;
                        cout<<"A B C  A Xnor B Xnor c\n"<<endl;
                        a1.Gate::display();
                        break;
                    case 3:
                        {
                            fp<<"and got the required output for desired 2 input Gate"<<endl;
                            int a,b;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            a1.input(a,b);
                            a1.Gate::displayval();
                            break;
                        }
                    case 4:
                        {
                            fp<<"and got the required output for desired 3 input Gate"<<endl;
                            int a,b,c;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            cout<<"Enter the 3rd input  : ";
                            cin>>c;
                            a1.input(a,b,c);
                            a1.Gate::displayval();
                            break;
                        }
                    }
                    break;
                }
             case 8:
                {
                    fp<<"[USER] : used ADDER CIRCUIT ";
                    int i;
                    cout<<"Choose any one of the following below ..\n"<<endl;
                    cout<<"1. To display Half adder circuit truth table."<<endl;
                    cout<<"2. To display Full adder circuit truth table."<<endl;
                    cout<<"3. To get output for desired Half adder circuit."<<endl;
                    cout<<"4. To get output for desired Full adder circuit.\n"<<endl;
                    cout<<"Enter your choice  :  ";
                    cin>>i;
                    Adder a1;
                    switch(i)
                    {
                    case 1:
                        {
                        fp<<"and displayed the HALF ADDER truth table for the circuit"<<endl;
                        a1.halfinput();
                        cout<<"\nThe Truth Table HALF ADDER :\n"<<endl;
                        cout<<"A B  A+B   Carry\n "<<endl;
                        a1.display();
                        break;
                        }
                    case 2:
                        {
                        a1.fullinput();
                         fp<<"and displayed the FULL ADDER truth table for the circuit"<<endl;
                        cout<<"\nThe Truth Table FULL ADDER :\n"<<endl;
                        cout<<"A B  C-in  A+B  C-out\n "<<endl;
                        a1.display();
                        break;
                        }
                    case 3:
                        {
                            fp<<"and got the desired output for half-adder circuit"<<endl;
                            int a,b;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            a1.halfinput(a,b);
                            a1.displayval();
                            break;
                        }
                    case 4:
                        {
                            fp<<"and got the desired output for full-adder circuit"<<endl;
                            int a,b,c;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            cout<<"Enter the carry      : ";
                            cin>>c;
                            a1.fullinput(a,b,c);
                            a1.displayval();
                            break;
                        }
                    }
                    break;
                }
             case 9:
                {
                    fp<<"[USER] : used SUBTRACTOR GATE ";
                    int i;
                    cout<<"Choose any one of the following below ..\n"<<endl;
                    cout<<"1. To display Half subtracter circuit truth table."<<endl;
                    cout<<"2. To display Full  subtracter circuit truth table."<<endl;
                    cout<<"3. To get output for desired  half subtracter circuit."<<endl;
                    cout<<"4. To get output for desired  full subtracter circuit.\n"<<endl;
                    cout<<"Enter your choice  :  ";
                    cin>>i;
                    Subractor a1;
                    switch(i)
                    {
                    case 1:
                        {
                        a1.halfinput();
                        fp<<"and displayed the HALF SUBTRACTOR truth table for the circuit"<<endl;
                        cout<<"\nThe Truth Table for HALF SUBRACTOR :\n"<<endl;
                        cout<<"A B  A-B   Borrow \n"<<endl;
                        a1.display();
                        break;
                        }
                    case 2:
                        {
                        fp<<"and displayed the FULL SUBTRACTOR truth table for the circuit"<<endl;
                        a1.fullinput();
                        cout<<"\nThe Truth Table for FULL SUBRACTOR :\n"<<endl;
                        cout<<"A B  B-in  A-B  B-out\n "<<endl;
                        a1.display();
                        break;
                        }
                    case 3:
                        {
                            fp<<"and got the desired output for half-subtractor circuit"<<endl;
                            int a,b;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            a1.halfinput(a,b);
                            a1.displayval();
                            break;
                        }
                    case 4:
                        {
                             fp<<"and got the desired output for full-subtractor circuit"<<endl;
                            int a,b,c;
                            cout<<"Enter the 1st input  : ";
                            cin>>a;
                            cout<<"Enter the 2nd input  : ";
                            cin>>b;
                            cout<<"Enter the carry      : ";
                            cin>>c;
                            a1.fullinput(a,b,c);
                            a1.displayval();
                            break;
                        }
                    }
                    break;
                }
                    case 10:
                    {
                           fp<<"[USER] : logged out..."<<endl<<endl;
                            num=0;
                            break;
                    }
                default:
                    {
                        cout<<"Invalid input of choice. Please enter a valid choice"<<endl;
                    }
             }
     cout<<"Any key to continue...."<<endl;
     getch();
     system("cls");
     }
     fp.close();
    }

}
void choice()
{
         cout<<"Choose any one of the following below ..\n"<<endl;
         cout<<"1. To display 2 input truth table."<<endl;
         cout<<"2. To display 3 input truth table."<<endl;
         cout<<"3. To get output for desired 2 inputs."<<endl;
         cout<<"4. To get output for desired 3 inputs.\n"<<endl;
         cout<<"Enter your choice  :  ";
}

