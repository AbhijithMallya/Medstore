/*		          	ASSIGNMENT 25
TOPIC : Structures
DESCRIPTION : Adding n days to a given date
D.O.S : 28 - 02 - 2019
*/
#include<iostream.h>
#include<conio.h>

monthdays[12];  int l=1 , n , addyears , leftoverdays ;
struct DATE
{
 int d;	int m;	int y;
};
DATE user ;

void  mdays(int k)
{
  for(int i=0;i<12;i++)
  {
   if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
   monthdays[i]=31;
   else if(i==3||i==5||i==8||i==10)
   monthdays[i]=30;
   else if(i==1&&k==1)
   monthdays[1]=29;
   else
  monthdays[1]=28;
  }
}

void main()
{       clrscr(); cout<<"\n\n\t\t\tADD 'n' days to a given Date \n\t\t\t-------------------------";
	cout<<"\n\n\tEnter the date (Valid date is a must) : ";cin>>user.d>>user.m>>user.y;
	if( (user.y%100==0&&user.y%400!=0) || (user.y%100!=0&&user.y%4!=0))
	l=0 ;
	mdays( l );
	cout<<"\n\tEnter the number of days to add : ";	 cin>>n;
	if(l==0)
	{ addyears = n/365;   	leftoverdays = n%365; 	}
	else
	{ addyears = n/366;     leftoverdays = n%366;	}

	user.y += addyears;

	for (int i = 0; i < leftoverdays; i++)
	  {	if (user.d < monthdays [user.m -1])
			user.d ++;
		else if ((user.d == monthdays [user.m-1]) && ( user.m < 12))
		{
		       user.d = 1;
		       user.m ++;
		}
		else if ((user.d == monthdays [user.m-1]) && (user.m == 12))
		{
			user.d = 1;
			user.m = 1;
			user.y ++;
		}
	  }
	cout <<"\n\n\tNEW DATE : " << user.d << "/" << user.m << "/" << user.y << endl;getch();
}

