/*                                  ASSIGNMENT 4
				    ------------
TOPIC : Sequential I/P and O/P
DESCRIPTION : Stress interview
D.O.S : 13-09-2019
*/

#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
void heading()
{clrscr();
 cout<<"\n\t\t\t*****> STRESS INTERVIEW <*****"
     <<"\n\t\t\t       ---------------- \n\n\n";
}

void create()
{ heading();
char ch;
fstream sfile;
sfile.open("h:\\XII\\A12\\SRT.txt",ios::out);
if(!sfile)
{cout<<"\n\n\t\tFILE  NOT  CREATED";getch();}
else
{
ch=getche();
 while(ch!=27)
 {
   if(ch=='\r')
   {ch='\n';cout<<ch;}
  sfile.put(ch);
  ch=getche();
 }
 sfile.close();

}

}

void display()
{heading();
char ch;
fstream sfile;
sfile.open("h:\\XII\\A12\\SRT.txt",ios::in);

if(!sfile)
{cout<<"\n\n\t\tFILE  NOT  CREATED";getch();}
else
{ sfile.get(ch);
  while(!sfile.eof())
   {
    cout<<ch;
    sfile.get(ch);
   }
  sfile.close();
}
getch();
}

void cspecial()
{
  char ch;int count=0;
  fstream sfile;
  sfile.open("h:\\XII\\A12\\SRT.txt",ios::in);
  if(!sfile)
  {cout<<"\n\n\t\tFILE  NOT  CREATED";}
  else
  {
   sfile.get(ch);
   while(!sfile.eof())
   {     // \r is also a special character
    if(ch<48||(ch>57&&ch<65)||(ch>90&&ch<97)||ch>122)
     { if(ch!='\n'&&ch!=' ')
       {count++;}
     }
    sfile.get(ch);
   }
  sfile.close();
  cout<<"\n\n\t\tNo. of special characters :: "<<count;
   getch();
  }
}

void replace()
{
  heading();
  char dword[20],word[20],replace[20],ch;int count=0;
  fstream sfile,temp;
  sfile.open("h:\\XII\\A12\\SRT.txt",ios::in| ios:: binary);
   temp.open("h:\\XII\\A12\\SRTT.txt",ios::out | ios:: binary);

  if(!sfile)
  {cout<<"\n\n\t\tFILE  NOT  CREATED";}
  else
  { cout<<"\n\t\tEnter the word ::";gets(dword);
    cout<<"\n\tEnter the word to be displayed :: ";gets(replace);
   sfile.getline(word,18,' ');
   while(!sfile.eof())
    {
       if(strcmpi(dword,word)==0)
	 {count++;
	 temp.write(replace,strlen(replace));
	 temp.write(" ",1);
	 }
       else
	 {
	  temp.write(word,strlen(word));
	 temp.write(" ",1);
	 }
     sfile.getline(word,18,' ');

    }
   sfile.close();
   temp.close();
   remove("h:\\XII\\A12\\SRT.txt");
   rename("h:\\XII\\A12\\SRTT.txt","h:\\XII\\A12\\SRT.txt");

 }
cout<<"\n\n\t\tReplaced the word "<<count<<" times";
getch();
}
void sline()
{
  heading();
  char str[80];
  fstream sfile;
  sfile.open("h:\\XII\\A12\\SRT.txt",ios::in| ios:: binary);

  if(!sfile)
  {cout<<"\n\n\t\tFILE  NOT  CREATED";}
  else
  {cout<<"\n";
   sfile.getline(str,80,'\n');
   while(!sfile.eof())
    {
       if(str[1]==' ')
	 {    cout<<str<<"\n";
	 }
       sfile.getline(str,80,'\n');

    }

    sfile.close();

 }

getch();
}


void main()
{ fstream sfile;
 char op;
 do{
 heading();
 cout<<"\n\t1. Create the file"
     <<"\n\t2. Display the content"
     <<"\n\t3. Count special symbols"
     <<"\n\t4. Replace a word (with no. of times)"
     <<"\n\t5. Lines begining with character"
     <<"\n\t6. Reset the file"
     <<"\n\t7. EXIT";
  op=getch();
  switch (op)
  {
   case '1' : create();break;
   case '2' : display();break;
   case '3' : cspecial();break;
   case '4' : replace();break;
   case '5' : sline();break;
   case '6' : sfile.open("h:\\XII\\A12\\SRT.txt",ios::out);sfile.close();break;
   case '7' : exit(0);break;

  }
 }while(1);

}