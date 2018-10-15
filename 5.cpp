/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/

#include<iostream>
using namespace std;
class sides
{
	    protected:
		    double a,b;
	    public:
	        virtual void accept()
		{
			std::cout << "\nEnter side 1 : ";
			std::cin >> a;
			std::cout << "\nEnter side 2 : ";
			std::cin >> b;
		}
	      virtual void area()=0;
};
class traingle: public sides
{
	   public:
	   void area()
	    {
		double ans;
	        ans=0.5*a*b;
		cout<<"\nArea of triangle : "<<ans;
	    }
};
class rectangle: public sides
{
	   public:
	   void area()
	    {
	        double ans;
	        ans=a*b;
		cout<<"\nArea of Rectangle : "<<ans;
	    }
};
int main()
{
	 sides *ptr;
	traingle T;
	rectangle R;
	int ch;
do
{
	  cout<<"\n  calculate\n  1: Triangle\n  2:Rectangle\n  3:Exit";
	  cout<<"\n  Enter your choice: ";
	  cin>>ch;
	  switch(ch)
	         {
		case 1:
			ptr=&T;
			ptr->accept();
			ptr->area();
		        break;
                case 2:
			ptr=&R;
			ptr->accept();
			ptr->area();
		        break;


		}
}while(ch<3);
return 0;
}
/***********************************output****************************************
 calculate
  1: Triangle
  2:Rectangle
  3:Exit
  Enter your choice: 1

Enter side 1 : 12

Enter side 2 : 13

Area of triangle : 78
  calculate
  1: Triangle
  2:Rectangle
  3:Exit
  Enter your choice: 2

Enter side 1 : 15

Enter side 2 : 17

Area of Rectangle : 255
  calculate
  1: Triangle
  2:Rectangle
  3:Exit
  Enter your choice: 3
*********************************************************************************/
