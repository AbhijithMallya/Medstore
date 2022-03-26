/*                              ASSIGNMENT 9
TOPIC : Data Structures
DESCRIPTION : Implementing Stack As Array
D.O.S :  5 - 12- - 2019
*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
const size=5;
class stack
{
int st[size];
int top;
public :
	stack()
	{ top=-1; }
	void push(int item)
	{ if(top==size-1)
	  cout<<"\n\n\tSTACK OVERLOAD";
	  else
	  st[++top]=item;
	}

	void pop()
	{ if(top==-1)
	  cout<<"\n\n\tSTACK UNDERFLOW";
	  else
	  cout<<"\n\n\t\" "<<st[top--]<<" \" is POPPED OUT ";
	}

	void display()
	{
	 if(top==-1)
	 cout<<"\n\n\tSTACK UNDERFLOW";
	 else
	  { int temp=top;
	    cout<<"\n\n\tTHE STACK IS ::\n\t\t";
	    while(temp!=-1)
	     {
	     cout<<st[temp--]<<"\n\t\t";
	     }
	  }
	}
};


void main()
{
char op; int i;
stack obj;

do{ clrscr();
cout<<"\n\tSTACK AS AN ARRAY \n\t-----------------";
cout<<"\n\t1. PUSH AN ELEMENT "
    <<"\n\t2. POP AN ELEMENT"
    <<"\n\t3. DISPLAY STACK"
    <<"\n\t4. EXIT";

    op=getch();
    switch(op)
    {
     case '1' : cout<<"\n\tEnter the number to be inserted :: ";
		cin>>i;
		obj.push(i);break;
     case '2' : obj.pop();getch();break;
     case '3' : obj.display();getch();break;
     case '4' : exit(0);
   }
   }while(1);
}
