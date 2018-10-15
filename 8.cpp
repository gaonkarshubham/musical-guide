/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Student
	{
		int roll;
		char name[10];
	public:
		Student(){ name[0]='\0';roll=-1;}
		void get_Data();
		void put_Data();
		int return_Roll(){ return roll;}

	};

void Student::get_Data()
	{
	    cout<<"\nEnter roll number & name=";
		cin>>roll>>name;
	}
void Student::put_Data()
	{
	     cout<<"\n"<<roll<<"\t"<<name;
	 }

class Seq_File
	{
		char File_name[15];
		public:

		void Create();
		void Display();
		void Add();
		void Remove(int);
		void Modify(int);
	};
void Seq_File::Create()
	{
		ofstream  File;
		Student S;
		cout<<"\nenter file name=";
		cin>>File_name;
		File.open(File_name);
		S.get_Data();
		File.write(reinterpret_cast<char*>(&S),sizeof(S));		//to convert int into string(refer page No. 617 Robert Lafore)
		File.close();
	}

void Seq_File::Display()
	{
		ifstream  File;
		Student S;
		File.open(File_name);
		cout<<"\nRoll No\t Student name";
		File.read(reinterpret_cast<char*>(&S),sizeof(S));
		while(!File.eof())
		            {
                      S.put_Data();
               File.read(reinterpret_cast<char*>(&S),sizeof(S));
		            }
		File.close();

	}
void Seq_File::Add()
	{
		ofstream  File;
		Student S;
		File.open(File_name,ios::app);
		S.get_Data();
		File.write(reinterpret_cast<char*>(&S),sizeof(S));
		File.close();
	}
void Seq_File::Remove(int Roll)
	{
		 ifstream File;
		 ofstream Temp;
		 Student S;
		 int Flag=0;
		 File.open(File_name);
		 Temp.open("Temp.Txt");
		 File.read(reinterpret_cast<char*>(&S),sizeof(S));
		while(!File.eof())
		            {
		                     if(Roll==S.return_Roll())
		                         {   S.put_Data(); Flag=1;}
		                      else
              Temp.write(reinterpret_cast<char*>(&S),sizeof(S));
             File.read(reinterpret_cast<char*>(&S),sizeof(S));
		            }
 if(Flag==0) cout<<"Roll No. "<<Roll<<" does not present \n";
		File.close();
		Temp.close();
		remove(File_name);
		rename("Temp.Txt",File_name);
	}
void Seq_File::Modify(int Roll)
	{
		 ifstream File;
		 ofstream Temp;
		 Student S;
		 int Flag=0;
		 File.open(File_name);
		 Temp.open("Temp.Txt");
		 File.read(reinterpret_cast<char*>(&S),sizeof(S));
		while(!File.eof())
		            {
		                     if(Roll==S.return_Roll())
		                          {
		                                S.put_Data();			//you may use seekg() as alternative.
                                cout<<"\n Enter data to modify";
		                                S.get_Data();
		                                Flag=1;
		                           }
             Temp.write(reinterpret_cast<char*>(&S),sizeof(S));
             File.read(reinterpret_cast<char*>(&S),sizeof(S));
		            }
 if(Flag==0) cout<<"Roll No. "<<Roll<<" does not present \n";
		File.close();
		Temp.close();
		remove(File_name);
		rename("Temp.Txt",File_name);
	}
int main()
      {
	int ch;
	int R;
	Seq_File ob;
	do
	{
	cout<<"\n1: Create Database\n2: Display Database\n3: Add a record\n4: Delete a record\n5: Modify a record\n6.Exit";
	cout<<"\nEnter your choice : ";
        cin>>ch;
	  switch(ch)
	  {
		case 1:
		      ob.Create();
	              break;
	        case 2:
	              ob.Display();
	              break;
	        case 3:
	              ob.Add();
	              break;
                case 4:
                     cout<<"\nEnter Roll No to delete";
                     cin>>R;
	             ob.Remove( R);
	             break;
	        case 5:
                     cout<<"\nEnter Roll No to Modify";
                     cin>>R;
	             ob.Modify( R);
	             break;
	   }
}while(ch<6);
}

/**********************output*********************************
1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 1

enter file name=shubham

Enter roll number & name=05 gaonkar

1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 2

Roll No	 Student name
5	gaonkar
1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 3

Enter roll number & name=06 yogita

1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 4

Enter Roll No to delete06

6	yogita
1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 5

Enter Roll No to Modify05

5	gaonkar
 Enter data to modify
Enter roll number & name=03 shubham

1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 2

Roll No	 Student name
3	shubham
1: Create Database
2: Display Database
3: Add a record
4: Delete a record
5: Modify a record
6.Exit
Enter your choice : 6
********************************************************/
