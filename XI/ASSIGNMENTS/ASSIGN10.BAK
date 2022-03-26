/*				    ASSIGNMENT 10
Topic : For loop
Description : Displaying a number pattern for a given number of lines
Date of Submission : 14 - 09 -2018    */

#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int spaces=40;
cout<<"\n\n\n\t\t\tENTER THE NUMBER OF LINE (odd number) : ";
int lines;cin>>lines;
cout<<"\n\n\n\tRESULT : \n" ;

for(int i=1;i<=lines/2+1;i++)
{
for(int sp=1;sp<=spaces;sp++)
cout<<" ";
spaces=spaces-2;
for(int j=i;j>=1;j--)
cout<<j<<" ";
for(int k=2;k<=i;k++)
cout<<k<<" ";
cout<<"\n";
}

spaces=spaces+4;

for(i=lines/2; i>=1;i--)
{
for(int sp = 1;sp<=spaces;sp++)
cout<<" ";
spaces=spaces + 2;
for(int j=i;j>=1;j--)
cout<<j<<" ";
for(int k=2;k<=i;k++)
cout<<k<<" ";
cout<<"\n";
}
getch();            }