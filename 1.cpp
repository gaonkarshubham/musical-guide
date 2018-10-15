/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/

#include <iostream>
#include <iomanip>

using namespace std;

class weather
{
public:
	int dayOfMonth, HighTemp, LowTemp, amountRain, amountSnow;
	weather() {
		// dayOfMonth = 31;
		// HighTemp = 500;
		// LowTemp = -200;
		// amountRain = 0;
		// amountSnow = 0; }

	weather(int day, int hgt, int lnt, int amtRain, int amtSnow) {
	  dayOfMonth = day;
		HighTemp = hgt;
		LowTemp = lnt;
		amountRain = amtRain;
		amountSnow = amtSnow; }

	void getdata() {
		cout<<"\nEnter Days in the Month : ";
		cin>>dayOfMonth;

		cout<<"Enter Highest Temperature : ";
		cin>>HighTemp;

		cout<<"Enter Lowest Temperature : ";
		cin>>LowTemp;

		cout<<"Enter Amount Rain : ";
		cin>>amountRain;

		cout<<"Enter Amount Snow : ";
		cin>>amountSnow;}

	void display() {
		cout<<setw(10)<<dayOfMonth<<setw(10)<<HighTemp<<setw(10)<<LowTemp<<setw(10)<<amountRain<<setw(10)<<amountSnow; } };

int main() {
	weather w1(1,1,1,1,1);
	weather w[5];
	int ch=0,n=0,i;
  float fLowTemp=0, fHighTemp=0, fRain=0, fSnow=0;
	do	{
		cout<<"\n1.Enter Data\n2.Display Data\n3:Exit : \nEnter  the Choice : ";
		cin>>ch;
		switch(ch)	{
			case 1: cout<<"\nEnter no of months : ";
					cin>>n;
					cout<<"\nEnter Data : ";
					for (i=0; i<n; i++)	{
						w[i].getdata(); }
					break;

			case 2: cout<<setw(10)<<"DayOfMonth"<<setw(10)<<"HighTemp"<<setw(10)<<"LowTemp"<<setw(10)<<"Rainfall"<<setw(10)<<"SnowFall";
					cout<<"\n";
					for (i=0;i<n;i++)	{
						w[i].display();
						cout<<"\n";
					}
		for (i=0;i<n;i++)	{
			fHighTemp += w[i].HighTemp;
			fLowTemp += w[i].LowTemp;
			fRain += w[i].amountRain;
			fSnow += w[i].amountSnow;
		 }
			fHighTemp = fHighTemp/n;
			fLowTemp = fLowTemp/n;
			fRain = fRain/n;
			fSnow = fSnow/n;
			break;
		cout<<setw(10)<<"Average"<<setw(10)<<fHighTemp<<setw(10)<<fLowTemp<<setw(10)<<fRain<<setw(10)<<fSnow;	}
	}while(ch!=3);
 return 0;
}

/*---------------------------------output-----------------------------------------
1.Enter Data
2.Display Data
3:Exit :
Enter  the Choice : 1

Enter no of months : 3

Enter Data :
Enter Days in the Month : 30
Enter Highest Temperature : 47
Enter Lowest Temperature : 25
Enter Amount Rain : 120
Enter Amount Snow : 0

Enter Days in the Month : 31
Enter Highest Temperature : 24
Enter Lowest Temperature : 23
Enter Amount Rain : 126
Enter Amount Snow : 01

Enter Days in the Month : 28
Enter Highest Temperature : 45
Enter Lowest Temperature : 20
Enter Amount Rain : 234
Enter Amount Snow : 04

1.Enter Data
2.Display Data
3:Exit :
Enter  the Choice : 2
DayOfMonth  HighTemp   LowTemp  Rainfall  SnowFall
        30        47        25       120         0
        31        24        23       126         1
        28        45        20       234         4

1.Enter Data
2.Display Data
3:Exit :
Enter  the Choice : 3
-------------------------------------------------------------------------------------*/
