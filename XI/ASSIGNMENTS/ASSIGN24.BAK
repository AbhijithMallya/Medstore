/*				ASSIGNMENT 24
TOPIC : Structures and Functions
DESCRIPTION :  Merit list of students
D.O.S : 27 - 02 -2019          */
#include<string.h>
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<stdlib.h>

struct stud
{
 int roll;
 char name[20];
 char gender;
 int cls;
 float percentage;
};
stud students[50],temp;
int n;

void line()
{  cout<<"\n"; for(int i=1;i<=80;i++) cout<<"*";cout<<endl; }

void Design()
{cout<<"\n";for(int i=0;i<80;i++)cout<<"-";cout<<"\n";}

void input()
{

 cout<<"\n\n\n\t\t\t\tMERIT LIST\n\t\t\t\t----------\n\n\tENTER THE NUMBER OF STUDENTS : ";  cin>>n;
if(n<=0)
{cout<<"\n\n\n\n\t\tBETTER LUCK NEXT TIME !";getch(); exit(0);}
for(int i=0;i<n;i++)
{ clrscr();   cout<<"\n\n\t\t\t\tSTUDENT ["<<i+1<<"]\n\t\t\t\t------------";
  cout<<"\n\t 1 . ROLL NO. : ";cin>>students[i].roll;
  cout<<"\n\t 2 . NAME : ";gets(students[i].name);
  cout<<"\n\t 3 . GENDER (M\/F) : ";cin>>students[i].gender;
  cout<<"\n\t 4 . SECTION : ";/*gets(students[i].section);*/cin>>students[i].cls;
  cout<<"\n\t 5 . PERCENTAGE : ";cin>>students[i].percentage;
}
}

void display()
{   char sal[]={"her"};int k=1;
for(int i=0;i<n;i++,k++)
{cout<<setw(5)<<students[i].roll<<setw(15)<<students[i].name<<setw(14)<<students[i].cls<<"\t  "<<students[i].gender<<setw(15)<<students[i].percentage<<setw(15)<<k;Design();}
if(students[0].gender=='m'||students[0].gender=='M')
strcpy(sal,"his");
cout<<"\n\n\tCONGRATULATIONS to "<<students[0].name<<" for "<<sal<<" splendid performance .";
}  // end of display function..

void arrange()
{   for(int i=0;i<n-1;i++)
      {	 for(int j=0;j<n-i-1;j++)
	 { if(students[j].percentage<students[j+1].percentage)
	      {
		temp=students[j];
		students[j]=students[j+1];
		students[j+1]=temp;
	      } //  if
	 } // for j
      }  // for i
}

void mlist()
{ clrscr();    cout<<"\n\n\t\t\t\tMERIT LIST "; line();
cout<<setw(10)<<"ROLL NO."<<setw(10)<<"NAME"<<setw(15)<<"CLASS"<<setw(10)<<"GENDER"<<setw(15)<<setprecision(3)<<"PERCENTAGE"<<setw(15)<<"RANK";line();
arrange(); // arranges the merit list categorily
display();
}

void main()
{ clrscr();
input();
mlist();
getch();
}

