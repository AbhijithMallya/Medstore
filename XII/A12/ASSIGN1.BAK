/*                              ASSIGNMENT 1
TOPIC : Classes and Objects
DESCRIPTION : Scoreboard for world cup
D.O.S :  13 - 6 - 2019
*/

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>

void header()
{
clrscr();
cout<<"\n\n\n\t\t\tWorld Cricket - 2019\n\t\t\t--------------------\n";
}
void line()
{for(int i=0;i<79;i++)cout<<"-";cout<<"\n";}

void header1()
{
header();
line();
cout<<setw(10)<<"Country No."<<setw(10)<<"TEAM"<<setw(15)<<"CAPTAIN"<<setw(13)<<"M/W/L/D"<<setw(15)<<"T.POINT"<<setw(15)<<"T.RUNS\n";
line();
}


class wcricket
{
	int cno,match,win,lost,draw,tpoint,trun;
	char cname[20],captain[20];

	public:

	void input();
	int search(char name[20]);
	int semifinal();
	int update(char country[20]);
	void list();
	void display();

};


void wcricket::input()
{ header();
cout<<"\n\tEnter the country number :: ";cin>>cno;
cout<<"\n\tEnter the country name :: ";gets(cname);
cout<<"\n\tEnter the country captain :: ";gets(captain);
cout<<"\n\tEnter the number of matches won :: ";cin>>win;
cout<<"\n\tEnter the number of matches lost :: ";cin>>lost;
cout<<"\n\tEnter the number of matches draw :: ";cin>>draw;
cout<<"\n\tEnter the total runs scored :: ";cin>>trun;
tpoint=(5*win)+draw;match=win+lost+draw;
}

void wcricket::display()
{
cout<<setw(5)<<cno<<setw(18)<<cname<<setw(15)<<captain<<setw(5)<<match<<"\/"<<win<<"\/"<<lost<<"\/"<<draw<<setw(13)<<tpoint<<setw(15)<<trun<<"\n";
}

int wcricket::search(char name[20])
{
	 if(strcmpi(captain,name)==0)
	 {
	 display();
	 return 0;
	 }
	 else return 1;
}

int wcricket::update(char country[20])
{
   char op;  int rn;
   if(strcmpi(cname,country)==0)
   {	cout<<"\n\n\tChoose the status (W/L/D) :: ";op=getche();
	    switch(op)
	    {
	     case 'w':
	     case 'W': win++;break;
	     case 'l':
	     case 'L': lost++;break;
	     case 'd':
	     case 'D': draw++;break;
	    }
	   cout<<"\n\n\n\tEnter the runs scored :: ";cin>>rn;
	   trun+=rn;
	   tpoint=(5*win)+draw;
	   match=win+lost+draw;
     return 0;
   }
   else
	return 1;
}


int wcricket::semifinal()
{
	return tpoint;
}


void main()
{
int n,pt,flag,flag2;
wcricket team[15],temp;
char op,dname[20],dcountry[20];
header();
cout<<"\n\n\t\tEnter the number of teams :: ";cin>>n;
for(int i=0;i<n;i++)
{
 team[i].input();
}

do{
	header();
	cout<<"\n\n\n\t1. Search for a team"
	    <<"\n\t2. Match update"
	    <<"\n\t3. Semifinal List"
	    <<"\n\t4. SCOREBOARD"
	    <<"\n\t5. EXIT";
	op=getch();

if(op=='1')
{
	       clrscr();
	       cout<<"\n\n\t\tEnter the name of the captain :: ";gets(dname);
	       int flag=1;  header1();

	       for(int i=0;i<n;i++)
	       {
		flag=team[i].search(dname);
		if(flag==0)
		break;
	       }getch();
	       if(i==n){cout<<"\n\n\tThe team is yet to enter the season";getch();}

}

else if (op=='2')
{
	 clrscr();
	 cout<<"\n\n\t\tEnter the name of the country : ";gets(dcountry);
	  int flag2=1;
	  header();
	  for(int i=0;i<n;i++)
	  {
	   flag2=team[i].update(dcountry);
	   if(flag2==0)
	   break;
	  }getch();
	  if(i==n)
	  {::header();cout<<"\n\n\tThe team is yet to enter the season";getch();}

}

else if (op=='3')
{

 for(int i=0;i<n-1;i++)
  {
   for(int j=0;j<n-i-1;j++)
   if(team[j].semifinal()<team[j+1].semifinal())
    { temp=team[j];
      team[j]=team[j+1];
      team[j+1]=temp;
    }
  }
 header1();
 for(int k=0;k<n;k++)
 {cout<<endl;
 team[k].display();
 if(k==3)
 cout<<"\nTHE ABOVE TEAMS ARE ELIGIBLE FOR - S E M I  F I N A L S\n\n\n";
 }
 getch();
}
else if (op=='4')
{
 header1();
 for(int k=0;k<n;k++)
 {cout<<endl;
 team[k].display();
 }
 getch();
}
else if(op=='5')
exit(0);
}while(1);

}