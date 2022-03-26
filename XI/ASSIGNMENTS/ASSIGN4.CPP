/*ASSIGNMENT 4
TOPIC : DIVISION AND MODULUS OPERATOR
DESCRIPTION : TO FIND SUM OF 2 TIMINGS
DATE OF SUBMISSION :25/8/2018
STUDENT : ABHIJITH MALLYA	XI C	     4462*/
#include<iostream.h>
#include<conio.h>
#include <iomanip.h>
void main()
{  clrscr();
   long int h1,h2,h3,h4,m1,m2,m3,m4,s1,s2,s3,s4,d1;
   cout<<setw(45)<<"TIME CALCULATOR";
   cout<<"\n"<<setw(45)<<"";
   gotoxy(25,8);
   cout<<"HOURS\t\tMINUTES\t\tSECONDS";
   gotoxy(5,11);
   cout<<"ENTER 1st TIMING";
   gotoxy(25,11);cin>>h1;
   gotoxy(43,11);cin>>m1;
   gotoxy(59,11);cin>>s1;
   gotoxy(5,14);
   cout<<"ENTER 2nd TIMING";
   gotoxy(25,14);cin>>h2;
   gotoxy(43,14);cin>>m2;
   gotoxy(59,14);cin>>s2;
   s3=(s1+s2)%60;
   m3=((s1+s2)/60+(m1+m2))%60;
   h3=(((((s1+s2)/60)+(m1+m2))/60)+h1+h2)%24;
   d1=(((((s1+s2)/60)+(m1+m2))/60)+h1+h2)/24;
   gotoxy(5,20);     cout<<"TOTAL TIME : ";   gotoxy(20,20);
   cout<<d1<<"DAYS\t  "<<h3<<" HOURS\t  "<<m3<<" MINUTES\t  "<<s3<<" SECONDS";
   getch();
}






