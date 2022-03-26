/*                                  ASSIGNMENT 2
                                    ------------
TOPIC : Using class's constructor and destructor
DESCRIPTION : library management
D.O.S : 14 - 7- 2019
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip.h>


void heading()
{
clrscr();cout<<"\n\n\n\t\t\tLIBRARY MANAGEMENT\n\t\t\t------------------\n\n\n";
}

void book_header()
{
heading();
for(int i=0;i<79;i++){cout<<"-";}
cout<<"\n"<<setw(8)<<"Acc.No"<<setw(12)<<"TITLE"<<setw(18)<<"Author"<<setw(19)<<"Publication"<<setw(11)<<"Copies"<<setw(12)<<"Status\n";
for(int j=0;j<79;j++){cout<<"-";}
}

//char choice;

class library
{
int ano;
char title[20];
char author[20];
char publication[20];
int copies;
char status[2];// B or R // ie Borrowed or Returned

 public:

int rano() { return ano; }

char* rstatus() { return status; }

  library()
 { ano=0;
   strcpy(title,"\0");
   strcpy(author,"\0");
   strcpy(publication,"\0");
   copies=0;
   strcpy(status,"R\0");
   cout<<"\n\n\t\tObject created";//getch();
 }

 void add_book()
 { heading(); cout<<"\n\t Enter the Access number :: ";cin>>ano;
   cout<<"\n\t  Title of book :: ";gets(title);
   cout<<"\n\t  Author of book :: ";gets(author);
   cout<<"\n\t  Publicator of book :: ";gets(publication);
   cout<<"\n\t  Total copies of book :: ";cin>>copies;
 }

 void display_book()
 {                                                                                                           // do from here
 cout<<"\n"<<setw(8)<<ano<<setw(12)<<title<<setw(18)<<author<<setw(19)<<publication<<setw(11)<<copies<<setw(10)<<status<<"\n";
 }

 void borrow_book()
 {   char choice; int flag;
   do{ heading();         flag=0;
      cout<<setw(30)<<"\n\n\tAccess Number :: "<<ano;
      cout<<setw(30)<<"\n\t\tBook :: "<<title;
      cout<<setw(30)<<"\n\t\tAuthor :: "<<author;
      cout<<setw(30)<<"\n\t\tTotal copies of book :: ";cout<<copies;
      cout<<setw(30)<<"\n\n\n\tDO  YOU  WANT  TO  BORROW  (Y/N) :: ";
      choice=getch();
      if(choice=='y'||choice=='Y')
      { strcpy(status,"B\0");flag=1;}
      if(choice=='n'||choice=='N')
      {flag=1;}
      } while(flag!=1);
 }

 void return_book()
 { char choice; int flag;
   do{ heading();       flag=5;
      cout<<setw(30)<<"\n\n\tAccess Number :: "<<ano;
      cout<<setw(30)<<"\n\t\tBook :: "<<title;
      cout<<setw(30)<<"\n\t\tAuthor :: "<<author;
      cout<<setw(30)<<"\n\t  Total copies of book :: ";cout<<copies;
      cout<<setw(30)<<"\n\n\n\tDO  YOU  WANT  TO  RETURN  (Y/N) :: ";
      choice=getch();
       if(choice=='y'||choice=='Y')
      { strcpy(status,"R\0");;flag=1;}
      if(choice=='n'||choice=='N')
      {flag=1;}
      } while(flag!=1);
}
 ~library()
 {
  cout<<"\n\n\tD E S T R U C T E D";
 }

};

void main()
{ heading();library book[20];getch(); char choice;  int dano,n,flag=0;
heading(); cout<<"\n\n\t\tNumber of books :: ";cin>>n;
	for(int i=0;i<n;i++)
	{    book[i].add_book();  }
   do{ heading();
	cout<<"\n\n\t\t1. ADD NEW BOOK "
	    <<"\n\n\t\t2. DISPLAY ALL BOOKS "
	    <<"\n\n\t\t3. BORROW A BOOK "
	    <<"\n\n\t\t4. RETURN BOOK "
	    <<"\n\n\t\t5. EXIT ";
	choice=getch();
	switch(choice)
	{
	 case '1' : book[n++].add_book();break;

	 case '2' : book_header();
		    for (int j=0;j<n;j++)
		      {  book[j].display_book();  }
		    getch();  break;

	 case '3' : heading();flag=0;
		    cout<<"\n\t\t\tBORROW BOOK\n\t\t\t-----------\n";
		    cout<<"\n\n\n\tEnter the Acc. No. :*: ";cin>>dano;
		     for(int a=0;a<n;a++)
		      {  if(book[a].rano()==dano && strcmpi(book[a].rstatus(),"R\0")==0)
			  {flag=1;book[a].borrow_book();break;}
		      }
		    if(flag==0)
		    {cout<<"\n\n\t\t\t\tBook unavailable";getch();}
		    break;
	case '4'  : heading();flag=0;
		    cout<<"\n\t\t\tRETURN BOOK\n\t\t\t-----------\n";
		    cout<<"\n\n\n\tEnter the Acc. No. :*: ";cin>>dano;
		     for(int b=0;b<n;b++)
		      {  if(book[b].rano()==dano && strcmpi(book[b].rstatus(),"B\0")==0)
			  {flag=1;book[b].return_book();break;}
		      }
		    if(flag==0)
		     {cout<<"\n\n\t\t\t\tBook not borrowed";getch();}
		    break;
	} // End of switch
     }while(choice!='5'); // End of do while
heading();
}   //  End of Void main