/*				ASSIGNMENT  23

TOPIC : Functions and arrays
DESCRIPTION : elemts of first array which are absent in the second array
D.O.S : 26 - 02 - 2019

*/

#include<iostream.h>
#include<conio.h>

void check(int A[30],int n,int B[30],int m)
{ int C[30], Count = 0;
   for(int i=0;i<n;i++)
 {
  Count = 0 ;
 for(int j=0;j<m;j++)
    {
	if(A[i]!=B[j])
	   Count++ ;
    }
      if( Count == m)
	 cout<<"\n\t\tElements of 1 which are not in 2 : "<<A[i]<<" ";
 }


 }
void main()
{    clrscr();
     int e1,e2,A[30],B[30];

     cout<<"\n\n\t\t\t\tARRAY 1\n\n\t\tEnter number of elements : ";cin>>e1;
     for(int i=0;i<e1;i++)
     {cout<<"\n\tEnter "<<i+1<<" element : ";cin>>A[i];}

     cout<<"\n\n\n\t\t\t\tARRAY 2\n\n\t\tEnter number of elements :  ";cin>>e2;
     for(i=0;i<e2;i++)
     {cout<<"\n\tEnter "<<i+1<<" element : ";cin>>B[i];}

     check(A,e1,B,e2);
getch();
}







