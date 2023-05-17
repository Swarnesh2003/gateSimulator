#ifndef GATE_H_INCLUDED
#define GATE_H_INCLUDED

#include<iostream>
using namespace std;
class Gate
{
    protected:
        int value;
        int *ins;
        int *out;
        int number_of_inputs;
    public:
        Gate();
        void display()const;
        void displayval()const;
};
class And_Gate:public Gate
{
    public:
        void input(int number_of_gate_inputs);
        void input(int a,int b,int c);
        void input(int a,int b);
        int getOut(int a,int b);
};
class Or_Gate:public Gate
{
public:
    void input(int number_of_gate_inputs);
    void input(int a,int b,int c);
    void input(int a,int b);
    int rinput(int a,int b,int c);
    int rinput(int a,int b);
};
class Xor_Gate:public Gate
{
public:
    void input(int number_of_gate_inputs);
    void input(int a,int b,int c);
    void input(int a,int b);
    int rinput(int a,int b);
    int rinput(int a,int b,int c);
};
class Not_Gate:public Gate
{
public:
    void input(int a);
    void input();
    int invert(int a);
    void displaynot();
    void displayvalnot();
};
class Nor_Gate:public Gate
{
private:
     Not_Gate g1;
public:
    void input(int number_of_gate_inputs);
    void input(int a,int b,int c);
    void input(int a,int b);
};
class Xnor_Gate:public Gate
{
private:
    Not_Gate g1;
public:
    void input(int number_of_gate_inputs);
    void input(int a,int b,int c);
    void input(int a,int b);

};
class Nand_Gate:public Gate
{
private:
    Not_Gate g1;
public:
    void input(int number_of_gate_inputs);
    void input(int a,int b,int c);
    void input(int a,int b);

};


#endif // GATE_H_INCLUDED
