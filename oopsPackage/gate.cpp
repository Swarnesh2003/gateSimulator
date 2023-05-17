#include <iostream>
#include <string>
#include<cmath>
#include "gate.h"
Gate::Gate()
{
    value=0;
    ins=nullptr;
    out=nullptr;
    number_of_inputs=0;
}
void And_Gate::input(int number_of_gate_inputs)
{
    int i,j;
    if(number_of_gate_inputs==3)
    {

        Gate::number_of_inputs=number_of_gate_inputs;
        ins=new int[3];
        out=new int[8];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                for(ins[2]=0;ins[2]<=1;ins[2]++)
                {
                    out[j]=ins[0]*ins[1]*ins[2];
                    j++;
                }
    }
    else
    {
        Gate::number_of_inputs=2;
        ins=new int[2];
        out=new int[4];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                {
                    out[j]=ins[0]*ins[1];
                    j++;
                }

    }
}
void And_Gate::input(int a,int b,int c)
{
    value=a*b*c;
}
void And_Gate::input(int a,int b)
{
    value=a*b;
}
int And_Gate::getOut(int a,int b)
{
    return a*b;
}
void Or_Gate::input(int number_of_gate_inputs)
{
    int i,j,k;
    if(number_of_gate_inputs==3)
    {

        i=pow(2,number_of_gate_inputs);
        Gate::number_of_inputs=number_of_gate_inputs;
        ins=new int[number_of_gate_inputs];
        out=new int[i];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                for(ins[2]=0;ins[2]<=1;ins[2]++)
                {
                    k=ins[0]+ins[1]+ins[2];
                    if(k>0)
                        out[j]=1;
                    else
                        out[j]=0;
                    j++;
                }
    }
    else
    {
        Gate::number_of_inputs=2;
        ins=new int[2];
        out=new int[4];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                {
                    k=ins[0]+ins[1];
                    if(k>0)
                        out[j]=1;
                    else
                        out[j]=0;
                    j++;
                }
    }
}
void Or_Gate::input(int a,int b,int c)
{
    value=a+b+c;
    if(value>0)
        value=1;
    else
        value=0;
}
void Or_Gate::input(int a,int b)
{
    value=a+b;
    if(value>0)
        value=1;
    else
        value=0;
}
int Or_Gate::rinput(int a,int b)
{
    value=a+b;
    if(value>0)
        return 1;
    else
        return 0;
}
int Or_Gate::rinput(int a,int b,int c)
{
 value=a+b+c;
    if(value>0)
        return 1;
    else
        return 0;
}
void Not_Gate::input(int a)
{
    value=!a;
}
void Not_Gate::input()
{
    int i,j,k;
    Gate::number_of_inputs=1;
       ins=new int[1];
       out=new int[2];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
        {
            out[j]=!ins[0];
            j++;
        }

}
int Not_Gate::invert(int a)
{
    return !a;
}
void Not_Gate::displaynot()
{
    int j;
    for(ins[0]=0;ins[0]<=1;ins[0]++)
        {
            cout<<ins[0]<<"   "<<out[j]<<endl;
            j++;
        }
}
void Not_Gate::displayvalnot()
{
    cout<<"The output is "<<value<<endl;
}
void Nand_Gate::input(int number_of_gate_inputs)
{
    int i,j;
    if(number_of_gate_inputs==3)
    {
        Gate::number_of_inputs=number_of_gate_inputs;
        ins=new int[number_of_gate_inputs];
        out=new int[8];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
		   for(ins[1]=0;ins[1]<=1;ins[1]++)
			  for(ins[2]=0;ins[2]<=1;ins[2]++)
              {
                 out[j]=ins[0]*ins[1]*ins[2];
                 out[j]=g1.invert(out[j]);
                 j++;
			  }
    }
    else
    {
        Gate::number_of_inputs=2;
        ins=new int[2];
        out=new int[4];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                {
                    out[j]=ins[0]*ins[1];
                    out[j]=g1.invert(out[j]);
                    j++;
                }
    }
}
void Nand_Gate::input(int a,int b,int c)
{
    value=a*b*c;
    value=g1.invert(value);
}
void Nand_Gate::input(int a,int b)
{
     value=a*b;
     value=g1.invert(value);
}
void Nor_Gate::input(int number_of_gate_inputs)
{
    int i,j,k;
    if(number_of_gate_inputs==3)
    {
        Gate::number_of_inputs=number_of_gate_inputs;
        ins=new int[number_of_gate_inputs];
        out=new int[8];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                for(ins[2]=0;ins[2]<=1;ins[2]++)
                {
                    k=ins[0]+ins[1]+ins[2];
                    if(k>0)
                        out[j]=1;
                    else
                        out[j]=0;
                    out[j]=g1.invert(out[j]);
                    j++;
                }
    }
    else
    {
        Gate::number_of_inputs=2;
        ins=new int[2];
        out=new int[4];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
			{
                k=ins[0]+ins[1];
                if(k>0)
                    out[j]=1;
                else
                    out[j]=0;
                out[j]=g1.invert(out[j]);
                j++;
			}
    }
}

void Nor_Gate::input(int a,int b,int c)
{
    value=a+b+c;
    if(value>0)
        value=1;
    else
        value=0;
        value=g1.invert(value);
}
void Nor_Gate::input(int a,int b)
{
    value=a+b;
    if(value>0)
        value=1;
    else
        value=0;
    value=g1.invert(value);
}
void Xor_Gate::input(int number_of_gate_inputs)
{
    //Logic::display();
    int i,j,k;
    if(number_of_gate_inputs==3)
    {
        Gate::number_of_inputs=number_of_gate_inputs;
        ins=new int[number_of_gate_inputs];
        out=new int[8];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                for(ins[2]=0;ins[2]<=1;ins[2]++)
                {
                    k=((!ins[0])*ins[1]*(!ins[2]))+(ins[0]*(!ins[1])*(!ins[2]))+((!ins[0])*(!ins[1])*ins[2])+(ins[0]*ins[1]*ins[2]);
                    if(k>0)
                        out[j]=1;
                    else
                        out[j]=0;
                    j++;
                }
    }
    else
    {
        Gate::number_of_inputs=2;
        ins=new int[2];
        out=new int[4];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
            {
                if(ins[0]==ins[1])
                    out[j]=0;
                else
                    out[j]=1;
                j++;
			}
    }

}
void Xor_Gate::input(int a,int b,int c)
{
    value=((!a)*b*(!c))+(a*(!b)*(!c))+((!a)*(!b)*c)+(a*b*c);

}
int Xor_Gate::rinput(int a,int b,int c)
{
    return ((!a)*b*(!c))+(a*(!b)*(!c))+((!a)*(!b)*c)+(a*b*c);
}
void Xor_Gate::input(int a,int b)
{
    if(a==b)
            value=0;
    else
            value=1;
}
int Xor_Gate::rinput(int a,int b)
{
    if(a==b)
            return 0;
    else
            return 1;
}
void Xnor_Gate::input(int number_of_gate_inputs)
{
    int i,j,k;
    if(number_of_gate_inputs==3)
    {
        i=pow(2,number_of_gate_inputs);
        Gate::number_of_inputs=number_of_gate_inputs;
        ins=new int[number_of_gate_inputs];
        out=new int[i];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
                for(ins[2]=0;ins[2]<=1;ins[2]++)
                {
                k=((!ins[0])*ins[1]*(!ins[2]))+(ins[0]*(!ins[1])*(!ins[2]))+((!ins[0])*(!ins[1])*ins[2])+(ins[0]*ins[1]*ins[2]);
                    if(k>0)
                    {
                        out[j]=1;
                        out[j]=g1.invert(out[j]);
                    }
                    else
                    {
                        out[j]=0;
                        out[j]=g1.invert(out[j]);
                    }
                    j++;
                }
    }
    else
    {
        Gate::number_of_inputs=2;
        ins=new int[2];
        out=new int[4];
        j=0;
        for(ins[0]=0;ins[0]<=1;ins[0]++)
            for(ins[1]=0;ins[1]<=1;ins[1]++)
			{
                if(ins[0]!=ins[1])
                    out[j]=0;
                else
                    out[j]=1;
                j++;
			}
    }
}
void Xnor_Gate::input(int a,int b,int c)
{
    value=((!a)*b*(!c))+(a*(!b)*(!c))+((!a)*(!b)*c)+(a*b*c);
    value=g1.invert(value);

}
void Xnor_Gate::input(int a,int b)
{
    if(a==b)
                    value=1;
                else
                    value=0;
}
void Gate::displayval()const
{
    cout<<"The output is "<<value<<endl;
}
void Gate::display()const
{
    int j;
    j=0;
    if(number_of_inputs==3)
    {
     for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			  for(ins[2]=0;ins[2]<=1;ins[2]++)
			{

                cout<<ins[0]<<" "<<ins[1]<<" "<<ins[2]<<"        " <<out[j]<<endl;
                j++;
			}
    }

    else
    {
        for(ins[0]=0;ins[0]<=1;ins[0]++)
		  for(ins[1]=0;ins[1]<=1;ins[1]++)
			{

                 cout<<ins[0]<<" "<<ins[1]<<"     "<<out[j]<<endl;
                 j++;
			}
    }
    cout<<"\n";
}
