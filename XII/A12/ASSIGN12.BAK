/* ASSIGNMENT NO 12
   TOPIC:- QUEUE AS A LINKED LIST
   DESCRPITON:- Creating Queue as a linked list
   D.O.S. :-
*/

#include<iostream.h>
#include<stdlib.h> 
#include<conio.h> 
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear,*temp;
 
void ins()
{
 temp=new node;
 cout<<"Enter data:";
 cin>>temp->data;
 temp->next=NULL;
	
   if(front==NULL)
        front=rear=temp;
   else
	{rear->next=temp;
          rear=temp;
	}
}
 
void del()
{
	if(front==NULL)
		cout<<"Queue is empty\n";
	else
	{
		temp=front;
		front=front->next;
		cout<<"Deleted node is "<<temp->data<<"\n";
		delete(temp);
	}
}
 
void dis()
{
	if(front==NULL)
		cout<<"Queue is empty\n";
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}		
	}
}
 
void main()
{
 int ch;
 clrscr();
 for(int i=0; i<1000; i++)
{  clrscr();
     cout<<"\n\nMenu "<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit";
     cout<<"\n\nEnter your choice(1-4):";
     cin>>ch;
     cout<<"\n";
     switch(ch)
		{
			case 1: ins();
					break;
			case 2: del();
					break;
			case 3: dis();
					break;
			case 4: exit(0);
					break;
			default: cout<<"Wrong Choice!!!";
		}
	  getch();
	}


}
