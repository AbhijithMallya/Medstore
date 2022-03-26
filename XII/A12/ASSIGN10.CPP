/* ASSIGNMENT NO:- 10
TOPIC:- STACK AS LINKED LIST
DESCRIPTION:- PALINDROME CHECK USING LINKED LIST
D.O.S. :-			 */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
const int size=40;
struct node
{
 char data;
 node *next;
 };
class stack
{
  char Array[size];
  node *top;
  public:
  stack()
  {
  top=NULL;
  }
  void push(char item)
  {
    node *newnode=new node;
    if(newnode==NULL)
    {
     cout<<"\n\t Out of Memory";
     }
     else
      {	 newnode->data=item;
	 if(top==NULL)
	 {
	  newnode->next=NULL;
	  top=newnode;
	 }
	 else
	 {
	  newnode->next=top;
	  top=newnode;
	  }


     }
  }
  char pop()
 {
   if(top==NULL)

    cout<<"\n\t Stack Is Empty";
   else
    {
      char c=top->data;
      cout<<top->data;

     node *t=top;

       top=top->next;
     delete t;

    return c;
     }
    }

    void display();

 }obj;

   void stack::display()
    {
     if(top==NULL)
     cout<<"\n\t Stack Is Empty";
     else
     {  node *t=top;

       while(t!=NULL)
       {
	cout<<t->data<<"\n";
	t=t->next;
	}
     }
    }
   void main()
   {
    clrscr();
    char A[size];
    cout<<"\n\t\t\t PALINDROME CHECKER";
    cout<<endl;
    cout<<"\n\t Enter the string : ";
    gets(A);
    char t[size];
    int k=0;
    int B[50];
    for(int i=0; i<strlen(A); i++)
    {

      if(A[i]!=' ')
      {
       obj.push(A[i]);
       t[k++]=A[i];
      }
    }
    cout<<"\n\t The Reversed String Is :"<<endl;
    obj.display();
    getch();

   for(i=0;i<k; i++)
    {
     if(obj.pop()!=t[i])
     { //cout<<"COMPARE";
      // cout<<obj.pop()<<"  "<<A[i];
      cout<<"\n\n\t Not a palindrome";
       break;
      }
     }
     if(i==k)
     {
      cout<<"\n\n\n\t\t\t Given string is a palindrome";
     }
     getch();
     }
