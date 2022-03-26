/*  				ASSIGNMENT NO.:- 12
Topic:- Use of while loop
Description:- Validity of an ARMSTRONG NUMBER
D.O.S:- 27-11-2018  */
#include <iostream.h>
#include <conio.h>
#include <MATH.H>
void main()
{int num,digit,sum=0,m;char op;
do{
clrscr();
cout<<"\n\t\t\tARMSTRONG NUMBER\n\t\t\t----------------    ";
cout<<"\nEnter the number : ";
cin>>num;
m=num;
while (num!=0)
{
digit=num%10;
sum=sum+pow(digit,3);
num/=10;
}
if (sum==m)
cout<<"\n"<<m <<" is an armstrong number.";
else
cout<<"\n"<<m <<" is not an armstrong number.";
getch();
cout<<"\n\nDO you Want to Try Again (Y/N) : ";cin>>op;
}while(op=='y'||op=='Y')  ;
}

