/*				ASSIGNMENT NO.11
Topic : SIN function
Description : Sum of sin function
D.O.S :27-11-2018   */
#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float n=0,x=0;
long double sum=0.0;
float sin=1;
cout<<"\n\t\t\tSUM OF SIN FUNCTION\n\t\t\t-------------------\n";
cout<<"\n\tEnter angle : ";
cin>>x;
cout<<"\n\tEnter the nth term : ";
cin>>n;
x*=(M_PI/180);
for(int i=1;i<=n;i+=2)
{
float p=1.0;
int f=1;
for(int j=1;j<=i;j++)
p*=x;
for(int k=1;k<=i;k++)
f*=k;
sum+=p/f*sin;
sin*=-1;
}
  cout<<"\n\n\tThe SUM IS= "<<sum;
  getch();
  }