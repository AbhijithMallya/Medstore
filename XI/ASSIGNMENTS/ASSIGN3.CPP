/* ASSIGNMENT  3 -
TOPIC - CONSTANT DATATYPE
DESCRIPTION - CALCULATING FORCE BTWN 2 OBJECTS
DATE OF SUBMISSION - 31/7/2018
Student- ABHIJITH MALLYA  XIC  4462
*/
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
gotoxy(30,10);
cout<<"\aPHYSICS\a\a  CALCULATOR";
gotoxy(30,11);
cout<<"-------------------";
float m1;
float m2;
float d;
const float G=6.67E-11;
gotoxy(10,15);
cout<<"\aENTER MASS IF OBJECT 1 (kg)\:";
cin>>m1;
gotoxy(10,20);
cout<<"\aENTER MASS IF OBJECT 2 (kg)\:";
cin>>m2;
gotoxy(10,25);
cout<<"\aENTER DISTANCE BETWEEN THEM (m)\:";
cin>>d;
gotoxy(25,30);
cout<<"\aTHE FORCE\a \: "<<(G*m1*m1)/(d*d)<<" N";

getch();
}