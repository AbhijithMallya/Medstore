/*                            ASSIGNMENT 14

TOPIC : Arrays
Description : Searching an element with duplication
D.O.S : 05-1-2019
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void main()
{char search,choice;
int Num[50],temp,n,count=0,item,mem;

	clrscr();
	cout<<"\n\t\t\t\tSearching an element\n\t\t\t\t"
	    <<"--------------------\n\n\t\t\Enter how  many  Numbers : ";
	cin>>n;
	cout<<"\n\n\t\t\tEnter "<<n<<" Numbers\n\t\t\t---------------\n\t";
	for (int i=0;i<n;i++)
		{cout<<"\n\tEnter Num["<<i+1<<"]:";
		cin>>Num[i];}
	count=0;
	cout<<"\n\tEnter the element to be searched for: ";
	cin>>item;
	for (i=0;i<n;i++)
	{	if  (Num[i]==item)
		{   cout<<"\n\t\t"<<item<<"  is  found  at  "<<i+1;
		    cout<<"  Position";
		    count++;
		}
	}

	if(count==0)
	{ cout<<"\n\n\t\t Item not found";}
	getch();
     if(count>1)
     cout<<"\n\n\t\t"<<item<<" is duplicated "<<count-1<<" time(s)";

}

