/*
Name :SHUBHAM GAONKAR
College : SKNSITS
Branch : SE-IT(2018-19)
Batch : S1
Roll No : 05
*/

#include<iostream>
#define max 50
using namespace std;

template <class t>void initmat(t *mat1,int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
	for(j=0;j<col;j++)
	{
	   mat1[i][j]=0;
	}
    }
}

template <class t>int getmat(t *mat1,int& row,int& col,int flag)
{
    int i,j;
    cout<<"\nEnter the no of rows of matrix:";
    cin>>row;
    cout<<"Enter the no of columns of matrix:";
    cin>>col;
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
	 cout<<"Enter data:";
	 cin>>mat1[i][j];
       }
    }
    if(flag==1)
	return col;
    else
	return row;
}
template <class t1,class t2,class t3> void addmat(t1 *mat,int r3,int c3,t2 *m1,int r1,int c1,t3 *m2,int r2,int c2)
{
   int i,j;
   if(r1==r2 && c1==c2)
   {
      for(i=0;i<r3;i++)
      {
	for(j=0;j<c3;j++)
	{
	   mat[i][j]=m1[i][j]+m2[i][j];
	}
      }
   }
   else
      cout<<"\nMatrices can't be added";
}
template <class t1,class t2,class t3> void submat(t1 *mat,int r3,int c3,t2 *m1,int r1,int c1,t3 *m2,int r2,int c2)
{
   int i,j;
   if(r1==r2 && c1==c2)
   {
	  for(i=0;i<r3;i++)
	  {
	for(j=0;j<c3;j++)
	{
	   mat[i][j]=m1[i][j]-m2[i][j];
	}
	  }
   }
   else
	  cout<<"\nMatrices can't be subtracted";
}

template <class t1,class t2,class t3> void mulmat(t1 *mat,int r3,int c3,t2 *m1,int r1,int c1,t3 *m2,int r2,int c2)
{
   int i,j,k;
   if(c1==r2)
   {
	  for(i=0;i<r1;i++)
	  {
	 for(j=0;j<c2;j++)
	 {
		 for(k=0;k<r1;k++)
		 {
		mat[i][j]+=m1[i][k]*m2[k][j];
		 }
	 }
	  }
   }
   else
	   cout<<"\nMatrices can't be multiplied";
}

template <class t>void display(t *mat1,int row,int col)
{
   int i,j;
   cout<<"\nThe Resultant matrix is:";
   for(i=0;i<row;i++)
   {
	  cout<<"\n";
	  for(j=0;j<col;j++)
	  {
	 cout<<"\t"<<mat1[i][j];
	  }
   }
}

int main()
{
   int r1,c1,r2,c2,r3,c3,r4,c4,r5,c5,r6,c6;
   int m1[max][max],m2[max][max],m3[max][max];
   float m4[max][max],m5[max][max],m6[max][max];
   char ans;
   int choice,ch;
   do
   {

	   cout<<"\n\nMenu";
	   cout<<"\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit";
	   cout<<"\n\nEnter your choice:";
	   cin>>choice;
	   switch(choice)
	   {
	  case 1:
	  {
		   cout<<"\nMenu for addition";
		   cout<<"\n1.Integer Addition\n2.Float Addition";
		   cout<<"\nEnter your  choice:";
		   cin>>choice;
		   if(ch==1)
		   {
		  r3=getmat(m1,r1,c1,1);
		  c3=getmat(m2,r2,c2,2);
		  initmat(m3,r3,c3);
		  addmat(m3,r3,c3,m1,r1,c1,m2,r2,c2);
		  display(m3,r3,c3);
		   }
		   else
		   {
		   r6=getmat(m4,r4,c4,1);
		   c6=getmat(m5,r5,c5,2);
		   initmat(m6,r6,c6);
		   addmat(m6,r6,c6,m4,r4,c4,m5,r5,c5);
		   display(m6,r6,c6);
		   }
		   break;
	  }

	  case 2:

	  {
		   cout<<"\nMenu for Subtraction";
		   cout<<"\n1.Integer Subtraction\n2.Float Subtraction";
		   cout<<"\nEnter your  choice:";
		   cin>>choice;
		   if(ch==1)
		   {
		  r3=getmat(m1,r1,c1,1);
		  c3=getmat(m2,r2,c2,2);
		  initmat(m3,r3,c3);
		  submat(m3,r3,c3,m1,r1,c1,m2,r2,c2);
		  display(m3,r3,c3);
		   }
		   else
		   {
		   r6=getmat(m4,r4,c4,1);
		   c6=getmat(m5,r5,c5,2);
		   initmat(m6,r6,c6);
		   submat(m6,r6,c6,m4,r4,c4,m5,r5,c5);
		   display(m6,r6,c6);
		   }
		   break;
	  }

	  case 3:
	  {
		   cout<<"\nMenu for multiplication";
		   cout<<"\n1.Integer Multiplication\n2.Float Multipliacation";
		   cout<<"\nEnter your choice:";
		   cin>>ch;
		   if(ch==1)
		   {
			r3=getmat(m1,r1,c1,1);
			c3=getmat(m2,r2,c2,2);
			initmat(m3,r3,c3);
			mulmat(m3,r3,c3,m1,r1,c1,m2,r2,c2);
			display(m3,r3,c3);
		   }
		   else
		   {
			r6=getmat(m4,r4,c4,1);
			c6=getmat(m5,r5,c5,2);
			initmat(m6,r6,c6);
			mulmat(m6,r6,c6,m4,r4,c4,m5,r5,c5);
			display(m6,r6,c6);
		}
		break;
	  }

	  case 4:
		   exit(1);
	}
	cout<<"\n\nDo you want to continue?";
	cin>>ans;
   }while(ans=='y');
   return 0;
}
/************************output**************************
Menu

1.Addition
2.Subtraction
3.Multiplication
4.Exit

Enter your choice:1

Menu for addition
1.Integer Addition
2.Float Addition
Enter your  choice:1

Enter the no of rows of matrix:2
Enter the no of columns of matrix:2
Enter data:12
Enter data:13
Enter data:14
Enter data:15

Enter the no of rows of matrix:2
Enter the no of columns of matrix:2
Enter data:56
Enter data:45
Enter data:34
Enter data:23

The Resultant matrix is:
	68	58
	48	38

Do you want to continue?y


Menu

1.Addition
2.Subtraction
3.Multiplication
4.Exit

Enter your choice:2

Menu for Subtraction
1.Integer Subtraction
2.Float Subtraction
Enter your  choice:1

Enter the no of rows of matrix:2
Enter the no of columns of matrix:2
Enter data:12
Enter data:13
Enter data:14
Enter data:12

Enter the no of rows of matrix:2
Enter the no of columns of matrix:2
Enter data:78
Enter data:67
Enter data:56
Enter data:45

The Resultant matrix is:
	-66	-54
	-42	-33

Do you want to continue?y


Menu

1.Addition
2.Subtraction
3.Multiplication
4.Exit

Enter your choice:3

Menu for multiplication
1.Integer Multiplication
2.Float Multipliacation
Enter your choice:1

Enter the no of rows of matrix:2
Enter the no of columns of matrix:2
Enter data:21
Enter data:32
Enter data:43
Enter data:54

Enter the no of rows of matrix:2
Enter the no of columns of matrix:2
Enter data:54
Enter data:34
Enter data:23
Enter data:12

The Resultant matrix is:
	1870	1098
	3564	2110

Do you want to continue?y


Menu

1.Addition
2.Subtraction
3.Multiplication
4.Exit

Enter your choice:4
*********************************************/
