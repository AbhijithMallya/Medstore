/* ASSIGNMENT NO:- 13
TOPIC:- CIRCULAR QUEUE
DESCRIPTION:- stack as a circular queue
D.O.S.:- 			*/
#include<iostream.h>
#include<conio.h>
#include<process.h>
const int size=5;
class stack
{
 int a[size];
 int front;
 int rear;
 public:
  stack()
   {
   front=rear=-1;
   }

  void insert(int item)
  {
    if( (front==0&&rear==size-1) || rear+1==front)
     cout<<"\n\t Queue full ";
    else
     {
      if(rear==-1)
       {
	front=rear=0;
	a[rear]=item;
       }
       else
       {
	if(rear==size-1)
	{
	    rear=0;
	}
	else
	 rear++;
	 a[rear]=item;
	}
	 cout<<a[rear]<<" is inserted";


       }
    getch();
  }
    void Delete()
    {
     if(front==-1)
     cout<<"\n\t Queue is empty";
     else
      {
       cout<<a[front]<<" is deleted";
       if(front==rear)
       front=rear=-1;
       else
	if(front==size-1)
	front=0;
	else front++;
       }
      }
      void display()
      {
       int temp;
       if(front==-1)
       cout<<"Queue is empty";
       else
       temp=front;
       if(temp<=rear)
       {
       while(temp<=rear)
	cout<<a[temp++]<<"  ";
	}
	else
	{
	while(temp<=size-1)
	cout<<a[temp++]<<" ";
	temp=0;
	while(temp<=rear)
       cout<<a[temp++]<<" ";
	}
       }
      };
      stack b;


       void main()
       {
	int choice;
	int item;
       do{	clrscr();
	 cout<<"\n\t MENU \n\t \n\t 1. Insert element \n\t 2. Delete Element \n\t 3. Display \n\t 4. exit";
	 cout<<"\n\t\n Enter your choice : ";
	 cin>>choice;
	switch(choice)
	{
	 case 1: cout<<"\n\t Enter the element to be inserted : ";
		  cin>>item;
		 b.insert(item);
		 break;

	 case 2: b.Delete();
		  break;
	 case 3: b.display();
		 break;
	 case 4: exit(0);
	 default: cout<<"\n\t Enter a valid option";
	 }
	 getch();

	 }while( choice !=4);

	 }



