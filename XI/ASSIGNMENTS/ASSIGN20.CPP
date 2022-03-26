/*				ASSIGNMENT 20

TOPIC : 2d ARRAYS
DESCRIPTION : Finding the company chiefs of respective comapnies
D.O.S : 13 - 02 - 2019
*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip.h>
#include<stdio.h>

char company[][20]={"APPLE",
		    "MICROSOFT",
		    "YAHOO",
		    "WHATSAPP",
		    "FACEBOOK",
		    "INFOSYS",
		    "ALPHABET",
		    "GOOGLE",
		    "SKYPE",
		    "ROBOSOFT"};
char chief[][20]={"Tim Cook",      //apple
		  "Satya Nadella",      //microsoft
		  "Marissa Mayer",			// yahoo
		  "Brin Page",                   //whatsapp
		  "Mark Zuckerbag",                 //facebook
		  "Salil Parekh",                 //infosys
		  "Larry page",              //alphabet
		  "Sunder Pichai",              //google
		  "Tony Bates",             // skype
		  "Ravi Teja" }	;	   //  robosoft


void main()
{

char choice,CN[20],CEO[20],retry;
int i,flag;
do{
	clrscr();
	cout<<"\n\n\t\t\tCOMPANY AND ITS C.E.O ' S\n\t\t\t-------------------------\n\n\n"
	    <<"\t\t1 - Search for founder\n\t\t2 - Search for Company\n\t\t3 - Display List\n\t\t4 - Exit"
	    <<"\n\n\t\tCHOICE : ";choice=getche();
	if(choice=='1')  // search for founder
		{                   flag=0;
		   cout<<"\n\n\t\tEnter the Name of Company : ";gets(CN);
		   for(i=0;i<10;i++)
		     { if(strcmpi(company[i],CN)==0)
			{ cout<<"\n\n\t\tThe CEO is : ";
			  cout<<chief[i];    flag=1;break;
			}
		     }
		   if(flag==0) cout<<"\n\n\t\tThe Company name is not registered.";
		 }

	if(choice=='2')  // search for company
		{                       flag=0;
		   cout<<"\n\n\t\tEnter the Name of C.E.O : ";gets(CEO);
		   for(i=0;i<10;i++)
		     { if(strcmpi(chief[i],CEO)==0)
			{ cout<<"\n\n\t\tThe Company is : ";
			  cout<<company[i];flag=1;break;
			}
		     }
		      if(flag==0)    cout<<"\n\n\t\tThe C.E.O is not registered.";

		 }

	if(choice=='3')
		{
		   clrscr();
		   cout<<setw(20)<<"COMAPANY"<<setw(40)<<"C.E.O"<<"\n\n";
		   for(i=0;i<=25;i++)cout<<"(*)";cout<<"\n\n";
		   for(i=0;i<10;i++)
		   cout<<setw(20)<<company[i]<<setw(40)<<chief[i]<<endl;
		}

	if(choice=='4')
		exit(0);
getch();
}while(1);
}
