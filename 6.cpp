/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/
#include<iostream>
using namespace std;

class test
{
float x,y;
public:
void accept()
{
  std::cout<<"Enter two numbers : ";
  std::cin>>x>>y;
}
float divide()
{
   try
   {
    		if(y==0)
		    throw(y);
  	std::cout<<"Division is :  "<<x/y;
    }
    catch(float p)
    {
  	std::cout<<"Divide by zero exception "<<p;
    }
}
int add()
{
  std::cout << "Addition is : " <<x+y;
}
};
/********************output*********************
Enter two numbers : 12 14
Division is :  0.857143 and 
Addition is : 26
press any key to continue. . .
**********************************************/

int main()
{
     test T;
     T.accept();
     T.divide();
     std::cout << " and " << '\n';
     T.add();
}
/*

Enter two numbers : 3 7
Division is :  0.428571 and
Addition is : 10
Press any key to continue . . .*/
