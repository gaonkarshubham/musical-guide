/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/
#include<iostream>
using namespace std;
class personal
{
public:
	char name[10];
	char dob[10];
};
class academic:virtual public personal
{
public:
	char qual[10];
	char grade[10];
};
class professional:virtual public personal
{
public:
	int salary;
	char Company[10];
	char post[10];
};
class biodata:public academic,public professional
{
public:
	void accept();
	void display();
};
void biodata::accept()
{
	cout<<"\nEnter data : ";
	cout<<"\n\tEnter Name : ";
	cin>>name;
  cout<<"\n\tEnter DOB: ";
	cin>>dob;
  cout<<"\n\tEnter Qualification : ";
	cin>>qual;
	cout<<"\n\tEnter Grade : ";
	cin>>grade;
	cout<<"\n\tEnter Company Name : ";
  cin>>Company;
	cout<<"\n\tEnter Post : ";
	cin>>post;
  cout<<"\n\tEnter Salary : ";
	cin>>salary;;
}

void biodata::display()
{
	cout<<"\nName : "<<name;
	cout<<"\nDOB : "<<dob;
	cout<<"\nQual : "<<qual;
	cout<<"\nGrade : "<<grade;
	cout<<"\nCmpnm : "<<Company;
	cout<<"\nPost : "<<post;
	cout<<"\nSalary : "<<salary;
}

int main()
{
biodata b;
b.accept();
cout<<"\nBio Data : ";
b.display();
}
/********************output*********************
Enter data : 
	Enter Name : shubham

	Enter DOB: 26-03-1999

	Enter Qualification : B.E

	Enter Grade : O

	Enter Company Name : google

	Enter Post : CEO

	Enter Salary : 100000000

Bio Data : 
Name : shubham
DOB : 26-03-1999
Qual : B.E
Grade : O
Cmpnm : google
Post : CEO
Salary : 100000000
************************************************/
