/*                              ASSIGNMENT 6
TOPIC : Array
DESCRIPTION : Implementing Binary Search
D.O.S :  5 - 12 - 2019
*/


#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void heading()
{clrscr();
cout<<"\n\tBinary Search\n\t-------------\n\n";

}

class b_search
{
 int A[20],B[20],b,e,m,l;

  public :

 void input()
 {
   heading();
   cout<<"\tEnter number of elements :: ";cin>>l;

   for(int i=0;i<l;i++)
   {cout<<"Enter A["<<i+1<<"] :: ";cin>>A[i];}
 }

 void descend()
 { int t;
  for(int i=0;i<l-1;i++)
   {
    for(int j=0;j<l-1-i;j++)
    {if(A[j]<A[j+1])
      { t=A[j];
       A[j]=A[j+1];
       A[j+1]=t;
      }
    }
   }
 }

 void output()
  { descend();
   heading();cout<<"\n\tOUTPUT\n\t------\n\n";
   for(int i=0;i<l;i++)
   { cout<<A[i];
     if(i<l-1)
     cout<<"-";
   }
   getch();
  }

void bsearch()
{ int item,mid,beg=0,end=l-1;
heading();
cout<<"\n\tEnter the element to be searched :: ";cin>>item;


while(beg<=end)
{  mid=(beg+end)/2;
 if(A[mid]==item)
 {cout<<"\n\t*Search Successfull*\n\tItem found at "<<mid+1<<" position";break;}
 else
 if(A[mid]>item) beg=mid+1;
 else end=mid-1;
}
 if(beg>end) {cout<<"\n\t*Search Unsuccessfull*";}

getch();
}

} ;

void main()
{ b_search b_array;

char op;
do{	heading();
	cout<<"\n\t1. Input elements"
	   <<"\n\t2. Output elements"
	   <<"\n\t3. Search an elelment"
	   <<"\n\t4. Exit";op=getch();
    switch(op)
    {
     case '1':b_array.input();break;
     case '2':b_array.output();break;
     case '3':b_array.bsearch();break;
     case '4':exit(0);
    }
  }while(1);
}