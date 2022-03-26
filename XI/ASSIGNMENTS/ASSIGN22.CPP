/*				ASSIGNMENT 22


TOPIC : Functions
DESCRIPTION : Displaying Pascals Triangle
D.O.S : 20 - 02 - 2019
*/

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

int factorial(int);
void P_Triangle(int);

void main()
{       clrscr();  	int n;
	cout<<"\n\n\t\tPASCAL'S TRIANGLE\n\n"
	     <<"\tEnter the n for PASCALS Triangle : ";cin>>n;cout<<"\n\n";
	P_Triangle(n);
	getch();
}

int factorial(int num)
{
long  int fact=1;
 for(int i=1;i<=num;i++)
    fact*=i;

 return fact ;
}

void P_Triangle(int limit)
{            int space=40,element;
for(int n=0;n<=limit-1;n++)
  {
	     for(int sp=0;sp<=space;sp++) cout<<" ";
	    for(int r=0;r<=n;r++)
	 {   cout<<(factorial(n))/(factorial(r)*factorial(n-r));cout<<' '<<' '<<' ';}

	space-=2;cout<<"\n";

   }
}


