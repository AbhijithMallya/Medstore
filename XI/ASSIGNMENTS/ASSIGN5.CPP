/*ASSIGNMENT 5
TOPIC -Conditional Operator
DESCRIPTION - TO FIND VOLUME/AREA OF CONE/CYLINDER
DATE OF SUBMISSION - 27-8-2018
STUDENT - ABHIJITH MALLYA   XI C    4462*/
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
void main()  {clrscr();  char x,y ;
cout<<"\n\t\t\tVOLUME OF CONE AND CYLINDER";
cout<<"\n\t\t\t-*-*-*-*-*-*-*-*-*-*-*-*-*-";
cout<<"\n\n\n\n\t DO YOU WANT CYLINDER OR CONE(C or N) :";
cout<<"\n\t ------------------------------------"; gotoxy(50,7); cin>>x;
cout<<"\n\n\t DO YOU WANT AREA OR VOLUME(A or V) :" ;
cout<<"\n\t ----------------------------------";  gotoxy(48,10); cin>>y;
cout<<"\n\n\t ENTER RADIUS \, HEIGHT (in cm) :";
cout<<"\n\t -----------------------------";  gotoxy(42,13);
double r, h , l=sqrt((r*r)+(h*h)) ,ac , an , vc , vn ;  cin>>r>>h;
ac=2*M_PI*r*(h+r);  an=M_PI*r*(l+r);  vc=M_PI*r*r*h;  vn=(1.0/3.0)*M_PI*r*r*h;
x=='c'||x=='C'?  y=='a'||y=='A' ? cout<<"\n\n\tAREA OF CYLINDER :"<<ac<<" cm sq":cout<<"\n\n\tVOLUME OF CYLINDER :"<<vc<<" cm cube" : y=='a'||y=='A' ? cout<<"\n\n\tAREA OF CONE :"<<an<<" cm sq": cout<<"\n\n\tVOLUME OF CONE :"<<vn<<" cm cube" ;
getch();  }
