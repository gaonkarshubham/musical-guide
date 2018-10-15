/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/

#include<iostream>

#include<string.h>

#include<iomanip>


using namespace std;


class Book {
	
   char *Bname,*Author,*Publisher, *nothing;

   int Stock; float Price;

   static int valid_transactions;

 public:

   Book();

   void Accept();

   void Display();
   void PinCode();
   int Search(char[]);
	
   friend void Display_All(Book[],int);
	
   void Update();

   void Purchase(int);

   static void Transactions() {

   cout<<"\nT "<<valid_transactions; } };



int Book::valid_transactions=0;

 Book::Book() {
	
   Bname=new char[30];
	
   Author=new char[30];
   Publisher=new char[30];

   Stock=Price=0; }



void Book::Accept() {
   cout<<"\nEnter Book data ";

   cout<<"\n\tBook Name : ";
   cin>>Bname;

   cout<<"\n\tAuthor : ";
   cin>>Author;

   cout<<"\n\tPublisher : ";
   cin>>Publisher;

   cout<<"\n\tPrice : ";
   cin>>Price;

   cout<<"\n\tStock : ";
   cin>>Stock;  }



void Book::Display()   {

   cout<<"\nBook data";

   cout<<"\nBook Name : "<<Bname;
   cout<<"\nAuthor : "<<Author;

   cout<<"\nPublisher : "<<Publisher;
   cout<<"\nPrice : "<<Price;

   cout<<"\nStock : "<<Stock; }



int Book::Search(char N[])  {

  if(strcasecmp(Bname,N)==0)

    return 1;
		return 0;   }



void Display_All(Book B[20],int n) {

   cout<<"\nBook data";

   cout<<"\n\tSr. No.\n\tBookName\n\tAuthor\n\tPublisher\n\tPrice\n\tStock";

  for(int i=0;i<n;i++)  {
   cout<<"\n  "<<i+1<<setw(7)<<B[i].Bname<<setw(7)<<B[i].Author<<setw(7)<<B[i].Publisher;

   cout<<setw(7)<<B[i].Price<<setw(7)<<B[i].Stock; } }



void Book::Update() {

 int ch;

  cout<<"\nUpdate: 1:Stock \t2:Price";
	cin>>ch;
 if(ch==1) {
	
   cout<<"Enter new stock : ";
	
   cin>>ch;

   Stock+=ch; }

 else if(ch==2) {

   cout<<"Enter new Price : ";
   cin>>Price; }
 else{

   cout<<" Choose again : ";
	cin>>ch; } }



void Book::Purchase(int N)   {

 if(N<=Stock) {

   cout<<"\nTotal Price of Books : "<<N*Price;

   Stock-=N;

   valid_transactions++;

   PinCode();	}

 else 
   cout<<"\nBook out of Stock.";   }



void Book::PinCode() {

   int i;

   cout<<"\n\tEnter your pincode number : ";

   cin>>i;

 if((i>=400001) && (i<=421202))
	{

    cout<<"Currier to your place is available and its free. thanks for the order.\n";}
 else if((i>=430410) && (i<=450101))
 {
    cout<<"Currier is available and charges are $ 15\n";
 }
 else{ cout<<"currier is not available, try another location\n";
    cout<<"\n\tEnter your pincode number again : ";
    cin>>i; } }



int main() {

  int choice,n,i,No;

  Book B[25];
	
  char Name[30],ans;

     cout<<"\nAccept Book Data : ";

     cin>>n;

   for(i=0;i<n;i++)

      B[i].Accept();
   do {
      cout<<"\n\t 1:Add New Book\n\t 2:Display All Books\n\t 3:Search\n\t 4:Update\n\t 5:Purchase";

      cout<<"\n\t 6:Add pincode\n\t 7.Valid transactions\n\t Enter the Choice : ";
      cin>>choice;
    switch(choice) {

      case 1:

        cout<<" Add New Book : ";

        B[n++].Accept();
       break;


      case 2:
        Display_All(B,n);
       break;


      case 3:

        cout<<"Enter Book name to Search : ";
        cin>>Name;
       for(i=0;i<n;i++)
        if(B[i].Search(Name))  {
         B[i].Display();

        break; }

       if(i==n) 
         cout<<"\nBook does not present.";
        break;

	
       case 4:
	 cout<<"Enter Book name to Update : ";
	 cin>>Name;

	for(i=0;i<n;i++)
         if(B[i].Search(Name)) {
          B[i].Display();
          B[i].Update();
	 break;  }
         if(i==n) cout<<"\nBook does not present : ";

         break;


	case 5:
          cout<<"Enter Book name to purchase : ";

          cin>>Name;

          cout<<"Enter Number of Books Customer Purchased : ";
          cin>>No;

         for(i=0;i<n;i++)

          if(B[i].Search(Name)) {
           B[i].Display();

           B[i].Purchase(No);

         break;  }

	 if(i==n)
          cout<<"\nBook does not present : ";

         break;
	case 7: Book::Transactions();
          break;
         case 6: B[i].PinCode();

           break;

          default: cout<<"Wrong Choice.";  }
            cout<<"\nMore...(y/n): ";
	cin>>ans;

          }while(ans=='y' || ans=='Y');
	
            return 0;  }

/**************************************output************************************
Accept Book Data : 2

Enter Book data 
	Book Name : Me_shivaji_raje_bhosle_boltoy

	Author : ramchandra_patil

	Publisher : mehata_publication

	Price : 300

	Stock : 6

Enter Book data 
	Book Name : yayati

	Author : shrikant_kamble

	Publisher : godbole_publication

	Price : 435

	Stock : 4

	 1:Add New Book
	 2:Display All Books
	 3:Search
	 4:Update
	 5:Purchase
	 6:Add pincode
	 7.Valid transactions
	 Enter the Choice : 2

Book data
Sr. No.	        BookName	       Author              Publisher	     Price   Stock
  1   Me_shivaji_raje_bhosle_boltoy  ramchandra_patil  mehata_publication     300      6
  2   yayati                          shrikant_kamble  godbole_publication    435      4
More...(y/n): y

	 1:Add New Book
	 2:Display All Books
	 3:Search
	 4:Update
	 5:Purchase
	 6:Add pincode
	 7.Valid transactions
	 Enter the Choice : 3
Enter Book name to Search : yayati

Book data
Book Name : yayati
Author : shrikant_kamble
Publisher : godbole_publication
Price : 435
Stock : 4
More...(y/n): y

	 1:Add New Book
	 2:Display All Books
	 3:Search
	 4:Update
	 5:Purchase
	 6:Add pincode
	 7.Valid transactions
	 Enter the Choice : 4
Enter Book name to Update : yayati2

Book does not present : 
More...(y/n): y

	 1:Add New Book
	 2:Display All Books
	 3:Search
	 4:Update
	 5:Purchase
	 6:Add pincode
	 7.Valid transactions
	 Enter the Choice : 5
Enter Book name to purchase : yayati
Enter Number of Books Customer Purchased : 2

Book data
Book Name : yayati
Author : shrikant_kamble
Publisher : godbole_publication
Price : 435
Stock : 4
Total Price of Books : 870
	Enter your pincode number : 416604
Currier to your place is available and its free. thanks for the order.

More...(y/n): y  

	 1:Add New Book
	 2:Display All Books
	 3:Search
	 4:Update
	 5:Purchase
	 6:Add pincode
	 7.Valid transactions
	 Enter the Choice : 7

T 1
More...(y/n): n
********************************************************************************/
