/*				ASSIGNMENT 18

TOPIC :
DESCRIPTION :  Creating (m+)1 x (n+1) matrix
D.O.S : 20 - 01 - 2019          */

#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
void main()
{
clrscr();
char op;
int row,col,A[50][50],rs[30],cs[30],ds=0;
cout<<"\n\t\t\tDisplay (m+1) X (n+1) matrix\n\n "
    <<"\n\t\tEnter row and column size of MATRIX 1 : ";cin>>row>>col;
if(row!=col)
{cout<<"\n\n\t\t SQUARRE MATRIX IS MANDATORY ";getch();}

else
{	      	cout<<"\n\n\tElements of Matrix 1\n";
		for(int i=0;i<row;i++)
		    for(int j=0;j<col;j++)
		     { cin>>A[i][j];}

	for(i=0;i<row;i++)
	{	       rs[i]=0;                     // ROW SUM
			for(j=0;j<col;j++)
			rs[i]+=A[i][j];
	}

	for(j=0;j<col;j++)
	{	       cs[j]=0;                    // COLUMN SUM
			for(i=0;i<row;i++)
			cs[j]+=A[i][j];
	}
		ds=0;
		for(j=0;j<col;j++)               // DIAGONAL SUM
			   ds+=A[j][j];

	cout<<"\n\n\t\t\tMatrix (m+1) X (n+1) :\n\t\t\t----------------------- \n";
	for(i=0;i<row;i++)
	{	 cout<<"\n\n\t\t";
		   for( j=0;j<col;j++)
		   cout<<setw(5)<<A[i][j];
		   cout<<rs[i];
	}
	cout<<"\n\n\t\t";
		for(j=0;j<col;j++)
			cout<<setw(5)<<cs[j];
			cout<<setw(5)<<ds;
getch();
}
}
		//  void and if else mandatory

