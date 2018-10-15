/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class test
{
public:
	void writedata();
	void readdata();
};
void test::writedata()
{string ch;
std::cout<<"Enter the string : \n";
getline(cin,ch);
fstream text("in.txt",ios_base::out | ios_base::in);
if(text.good())
{
 text<<ch<<endl;
 text.seekg(0,ios_base::beg);
 getline(text,ch); 
 cout << endl << "You entered: \n" << ch<< endl;
}
}
void test::readdata()
{
	fstream text;
	char ch;
	text.open("in.txt",ios::in);
	ch=text.get();
while(!text.eof())
{
cout<<ch;
ch=text.get();
}
text.close();
}

  int main()
{
  test ob;
  int ch;
  do
  {
   cout<<"\n1.Write";
   cout<<"\n2.Read";
   cout<<"\nEnter your choice : ";
   cin>>ch;
   switch(ch)
   {
    case 1:
	ob.writedata();
    break;
    case 2:
//	ob.readdata();
 	cout<<"Under maintainance";
    break;
   }
  }while(ch<3);
return 0;
}

/*************************OUTPUT*********************************
1.Write
2.Read
Enter your choice : 1
Enter the string : 
i am always right.
You entered: 
i am always right.

1.Write
2.Read
Enter your choice : 2
Under maintainance
*****************************************************************/
