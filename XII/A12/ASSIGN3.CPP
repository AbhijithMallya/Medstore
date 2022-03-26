/*                                  ASSIGNMENT 3
				    ------------
TOPIC : File operations
DESCRIPTION : Data Bank - Teacher
D.O.S : 13-09-2019
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<iomanip.h>
#include<stdlib.h>
#define tread() tfile.read((char*)&teacher,sizeof(teacher))
#define twrite() tfile.write((char*)&teacher,sizeof(teacher))
#define tfile_in()  tfile.open("h:\\XII\\A12\\LRT.dat",ios::in | ios::binary )
#define tfile_app() tfile.open("h:\\XII\\A12\\LRT.dat",ios::app| ios::binary )
#define tfile_out() tfile.open("h:\\XII\\A12\\LRT.dat",ios::out | ios::binary)
#define tfile_io()  tfile.open("h:\\XII\\A12\\LRT.dat",ios::in | ios::out | ios::binary )
#define tempwrite() temp.write((char*)&teacher,sizeof(teacher))
#define temp_out() temp.open("h:\\XII\\A12\\TEMP.dat",ios::out | ios::binary)


void line()
{cout<<"\n";for(int i=1;i<80;i++){cout<<"*"; }cout<<"\n";}

void heading()
{clrscr();cout<<"\n\t\t\t  TEACHER MANAGEMENT\n\t\t\t  ------------------\n\n";}

void tlist_header()
{line();
cout<<setw(5)<<"T.No"<<setw(10)<<"T.Name"<<setw(10)<<"Sub"<<setw(9)<<"Class"<<setw(9)<<"Desgn"<<setw(10)<<"Grade"<<setw(10)<<"Gender"<<setw(15)<<"Salary(Rs)";
line();}
class teach
{
       int tnum;
      char tname[30];
      char sub[30];
       int standard;
      char designation[10];
      char grade;
      char gender;
  long int salary;

 public :

  char* rsub()
   { return sub; }

  char* rtname()
   { return tname; }

  char check_grade_salary(long int sal,char gd )
   {
     if(gd=='A'&&sal>50000)
     return 'Y' ;
     else if(gd=='B'&&sal>=30000&&sal<50000)
     return 'Y' ;
     else if(gd=='C'&&sal>=25000&sal<30000)
     return 'Y' ;
     else if(gd=='D'&&sal>=10000&sal<25000)
     return 'Y' ;
     else
     return 'N' ;
   }


  void edit()
  {              long int sal;
   heading();char ch;
   cout<<"\n\t\t\EDIT  TEACHER  DETAILS \n\t\t-----------------------";
   cout<<"\n\t\t1. Update CLASS (Y/N) ::  ";ch=getche();
    if(ch=='Y'||ch=='y')
     {cout<<"\n\t\tCLASS :: ";cin>>standard;}
   cout<<"\n\t\t2. Update Salary (Y/N) ::  ";ch=getche();
    if(ch=='Y'||ch=='y')
    { {cout<<"\n\t\tSALARY :: ";cin>>sal;}
    if(sal<10000)
    {cout<<"\n\n\t\tSalary less than minimum wages";getch();}
    else
    {salary=sal;
     if(salary>50000)
     grade='A';
     else if(salary>=30000&&salary<50000)
     grade='B' ;
     else if(salary>=25000&&salary<30000)
     grade='C' ;
     else if(salary>=10000&salary<25000)
     grade='D';
    }
    }
  }



  char input_details()
  {
   heading(); char flag;
   cout<<"\n\t\t\ADD  TEACHER  DETAILS \n\t\t---------------------\n";
   cout<<"\n\t1.  Teacher No. : ";cin>>tnum;
   cout<<"\n\t2.  Teacher Name : ";gets(tname);
   cout<<"\n\t3.  Subject : ";gets(sub);
   cout<<"\n\t4.  Class (1-12) : ";cin>>standard;
   cout<<"\n\t5.  Designation : ";gets(designation);
   cout<<"\n\t6.  Grade (A/B/C/D) : ";cin>>grade;      grade=toupper(grade);
   cout<<"\n\t7.  Gender : ";cin>>gender;    gender=toupper(gender);
   cout<<"\n\t8.  Salary : ";cin>>salary;
   flag=check_grade_salary(salary,grade);
   if(flag=='Y')
   return 'Y';
   else
   { cout<<"\n\n\t\t\Grade and salary not matching";
     cout<<"\n\n\n\t\t\tFile cannot be added";getch();
     return 'N';
   }

   }

  void output_details()
  {
   cout<<"\n\t\t\TEACHER  DETAILS \n\t\t-----------------\n";
   cout<<"\n\t1.  Teacher No. : ";cout<<tnum;
   cout<<"\n\t2.  Teacher Name : ";cout<<tname;
   cout<<"\n\t3.  Subject : ";cout<<sub;
   cout<<"\n\t4.  Class : ";cout<<standard;
   cout<<"\n\t5.  Designation : ";cout<<designation;
   cout<<"\n\t6.  Grade : ";cout<<grade;
   cout<<"\n\t7.  Gender : ";cout<<gender;
   cout<<"\n\t8.  Salary : ";cout<<salary;
  }

void tlist( int x)
  {gotoxy(2,x);cout<<tnum;
   gotoxy(11,x);cout<<tname;
   gotoxy(23,x);cout<<sub;
   gotoxy(31,x);cout<<standard;
   gotoxy(40,x);cout<<designation;
   gotoxy(51,x);cout<<grade;
   gotoxy(60,x);cout<<gender;
   gotoxy(72,x);cout<<salary;




  }

  char rgrade()
  {  return grade; }

} teacher;

void add()
{ fstream tfile;
  char flag='N';
  flag=teacher.input_details();
  if(flag=='Y')
  {tfile_app();twrite();tfile.close();}
}
void dis()
{             int i=10,flag=0;
clrscr();heading();
fstream tfile;  tfile_in();

if(!tfile)
  { cout<<"\n\n\t\tFile not  Found"; getch(); }
  else
  { tread();tlist_header();
    while(!tfile.eof())
    {   teacher.tlist(i);i++;
	tread(); flag=1;
    }
    if(flag==0)
    {cout<<"\n\n\t\tNO  TEACHERS  FOUND";      }
  }
 tfile.close();
 getch();

}
void search()
{ heading();   int i=12,flag=0;
  fstream tfile;
  char sub[20];	// dummy subject
  tfile_in();
  if(!tfile)
  { cout<<"\n\n\t\tFile not  Found"; getch(); }
  else
  { cout<<"\n\tEnter Subject :: "; gets(sub);
    tread();tlist_header();
    while(!tfile.eof())
    { if(strcmpi(sub,teacher.rsub())==0)
       {teacher.tlist(i);i++;flag=1;}
	tread();
    }
    if(flag==0)
    {cout<<"\n\n\t\tNO  TEACHERS  FOUND";      }
  }
 tfile.close();
 getch();
}


void del_d()
{
  heading();char ch;
  cout<<"\n\t\tCONFIRM  DELETE (Y/N) :: ";
  ch=getche();
  if(ch=='Y'|| ch=='y')
  {
	  fstream tfile,temp;
	  tfile_io();
	  temp_out();
	  if(!tfile)
	  {cout<<"\n\t\tFILE  MISSING ";}
	  else
	  {tread();
	   while(!tfile.eof())
	    {
	     if(teacher.rgrade()!='D')
	      {tempwrite();}
	     tread();
	    }
	    tfile.close();
	    temp.close();
	    remove("h:\\XII\\A12\\LRT.dat");
	    rename("h:\\XII\\A12\\TEMP.dat","h:\\XII\\A12\\LRT.dat");
	    cout<<"\n\n\t\t**** RECORDS  DELETED  SUCCESSFULLY **** ";

	 }
  getch();
  }
}


void modify ()
{heading();
fstream tfile;char name[20];long pos;
 tfile_io();
if(!tfile)
{  cout<<"\n\t\tFILE  MISSING";}
else
{   cout<<"\n\t\tEnter the name of TEACHER :: ";gets(name);
    tread();
    while(!tfile.eof())
    { pos=tfile.tellg();
      if(strcmpi(name,teacher.rtname())==0)
       {
	teacher.edit();
	tfile.seekg(pos-sizeof(teacher));
	twrite();
	cout<<"\n\t\t***** RECORD  MODIFIED ***** ";
	break;
       }
       tread();
    }
    if(tfile.eof())
    {cout<<"\n\t\t***** RECORD  UNAVAILABLE ***** ";}
    tfile.close();
 }getch();
}

void reset()
{ fstream tfile;
  heading();
  tfile_out();
    if(!tfile)
  {cout<<"\n\n\tFILE  MISSING";}
  else
  { cout<<"\n\n\t*****  FILE RESETTED  *****";
  }
  tfile.close();

  getch();
}

void total()
{ long pos,n;
  fstream tfile;
  tfile_in();
  heading();
  if(!tfile)
  {cout<<"\n\n\tFILE  MISSING";}
  else
  { tfile.seekg(0,ios::end);
    pos=tfile.tellg();
    n=pos/sizeof(teacher);
    cout<<"\n\t\tTotal Teachers :: "<<n;
  }
  tfile.close();
getch();




}
void main()
{
 char ch;

do{
 heading();
 cout<<"\n\n\t1. Add a Record"
     <<"\n\t2. Display All Records"
     <<"\n\t3. Search a Record based on subject "
     <<"\n\t4. Delete Record with 'D' grade"
     <<"\n\t5. Modify a Record"
     <<"\n\t6. Total Number of Teacher"
     <<"\n\t7. Reset File"
     <<"\n\t8. Exit";
  ch=getch();
  switch(ch)
  {
   case '1' : add(); break;
   case '2' : dis();break;
   case '3' : search();break;
   case '4' : del_d(); break;
   case '5' : modify();break;
   case '6' : total(); break;
   case '7' : reset();break;
   case '8' : exit(0);
  //2 case '8' : remove("h:\\XII\\A12\\LRT.dat" );

  }
  }while(1);


}

