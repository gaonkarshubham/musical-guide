/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/


#include<iostream>
using namespace std;
class complex
{
      private:
      float real,img;
      public:
       complex()
      {   img=0;
	        real=0;
      }
      void accept();
      void display();
      friend complex operator+(complex, complex);
      friend complex operator-(complex, complex);
      complex operator*(complex c2);
      complex operator/(complex c2);
};
void complex::accept()
{
   cout<<"\n Enter real & Imaginary value of Complex no : ";
   cin>>real>>img;
}
void complex::display()
{
    cout<<"\n\t Complex no is:"<<real<<"+"<<img<<"i\n";
}

complex operator+(complex c1, complex c2)
{
  complex c3;
  c3.real=c1.real+c2.real;
  c3.img=c1.img+c2.img;
  return(c3);
}
complex operator-(complex c1, complex c2)
{  complex c3;
   c3.real=c1.real-c2.real;
   c3.img=c1.img-c2.img;
   return(c3);
}
complex complex::operator*(complex c2)
{  complex c3;
   c3.real=(real*c2.real)-(img*c2.img);
   c3.img=(real*c2.img)+(img*c2.real);
   return(c3);
}
complex complex::operator/(complex c2)
{  complex c3;
   c3.real=((real*c2.real)+(img*c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
   c3.img=(-(real*c2.img)+(img*c2.real))/((c2.real*c2.real)+(c2.img*c2.img));
   return(c3);
}

int main()
{  int ch;
   complex c1,c2,c3,c4,c5,c6;
    c1.accept();
    c2.accept();
    c1.display();
    c2.display();
 do
   {
      cout<<"\n  1.addition\n  2.subtraction\n  3.multiplication\n  4.division\n  5. exit";
      cout<<"\nEnter your choice : ";
      cin>>ch;
      switch(ch)
      {
	case 1:c3=c1+c2;
	       c3.display();
	       break;
	case 2:c4=c1-c2;
	       c4.display();
	       break;
	case 3:c5=c1*c2;
	       c5.display();
	       break;
	case 4:c6=c1/c2;
	       c6.display();
	       break;
  case 5:std::cout << "end" << '\n';
      }
   }while(ch!=5);
   return 0;
}

/*******************************************output*****************************************
 Enter real & Imaginary value of Complex no : 3 5

 Enter real & Imaginary value of Complex no : 1 8

	 Complex no is:3+5i

	 Complex no is:1+8i

  1.addition
  2.subtraction
  3.multiplication
  4.division
  5. exit
Enter your choice : 1

	 Complex no is:4+13i

  1.addition
  2.subtraction
  3.multiplication
  4.division
  5. exit
Enter your choice : 2

	 Complex no is:2+-3i

  1.addition
  2.subtraction
  3.multiplication
  4.division
  5. exit
Enter your choice : 3

	 Complex no is:-37+29i

  1.addition
  2.subtraction
  3.multiplication
  4.division
  5. exit
Enter your choice : 4

	 Complex no is:0.661538+-0.292308i

  1.addition
  2.subtraction
  3.multiplication
  4.division
  5. exit
Enter your choice : 5
end
***********************************************************************************/
