/*                              ASSIGNMENT 7
TOPIC : Array
DESCRIPTION : Implementing Selection and Insertion Sort for a array
D.O.S :  5 - 12 - 2019
*/
#include<dos.h>
#include<process.h>
#include<iostream.h>
#include<conio.h>
#include<limits.h>

class sort
{
int A[20],n;

public :

void input()
{ clrscr();

cout<<"\n\t Enter the number of elements :: ";cin>>n;
for(int i=0;i<n;i++)
{cout<<"ELEMENT ["<<i+1<<"] :: ";cin>>A[i];}

}

void output()
{ clrscr();
cout<<"\n\tOUTPUT\n\t------\n\n";
for(int i=0;i<n;i++)
cout<<A[i]<<" ";getch();
}

void selection_sort()
{int small,Pos;
 for(int i=0;i<n;i++)
 {small=A[i]; Pos=i;
   for(int j=i+1;j<n;j++)
   {if(A[j]>small)
    {small=A[j];Pos=j;}
    }// for j
  A[Pos]=A[i];
  A[i]=small;
 }// for i
cout<<"\n\t Selection Sorting ......";delay(1000);
output();
}

void insertion_sort()
{  int B[20];
int temp,ptr;
for(int k=0;k<n;k++)
{B[k+1]=A[k];}
B[0]=INT_MAX;
for(int i=2;i<=n;i++)
 {  temp=B[i];
    ptr=i-1;
    while(temp>B[ptr])//  try ti cchange to >
    { B[ptr+1]=B[ptr];
      ptr--;
    }// while
    B[ptr+1]=temp;
 }  // for i

cout<<"\n\t Insertion Sorting ......";delay(1000);
clrscr();
cout<<"\n\tOUTPUT\n\t------\n\n";
for( i=1;i<=n;i++)
  cout<<B[i]<<" ";getch();
for( k=0;k<n;k++)
{A[k]=B[k+1];}

}

};

void main()
{
do{
sort object;
clrscr();
cout<<"\n\t\t\t*-SORTING-*\n\t\t\t-----------\n"
    <<"\n\t1. Input Data"
    <<"\n\t2. Output Data"
    <<"\n\t3. Selection Sort"
    <<"\n\t4. Insertion Sort"
    <<"\n\t5. Exit";
char ch=getch();
 switch(ch)
 {
  case '1' : object.input();break;
  case '2' : object.output();break;
  case '3' : object.selection_sort();break;
  case '4' : object.insertion_sort();break;
  case '5' : exit(0);
 }


   }while(1);
}