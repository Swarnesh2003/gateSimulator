#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED
#include "gate.h"
class Adder:public Gate
{
  private:
      int *carry;
      And_Gate a1;
      Xor_Gate x1;
      Or_Gate o1;
  public:
      Adder();
      void halfinput();
      void fullinput();
      void display()const;
      void halfinput(int a,int b);
      void fullinput(int a,int,int c);
      void displayval()const;
};

class Subractor:public Gate
{
  private:
      int *borrow;
      And_Gate a1;
      Not_Gate n1;
      Xor_Gate x1;
      Or_Gate o1;
  public:
      Subractor();
      void halfinput();
      void fullinput();
      void display()const;
      void halfinput(int a,int b);
      void fullinput(int a,int,int c);
      void displayval()const;
};

#endif // CIRCUIT_H_INCLUDED
