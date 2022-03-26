/*                            ASSIGNMENT 15
TOPIC : Arrays , swapping
Description : Descending order
D.O.S : 10-01-2019
*/

#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int temp,position,i,A[50],n;

cout<<"\n\t\t\t\tDescending order\n\t\t\t\t----------------";
cout<<"\n\n\t\tEnter the number of elements (max 50) : ";cin>>n;

for(i=0;i<n;i++)
{cout<<"\n\tEnter ["<<i+1<<"] number : ";cin>>A[i];}

for(i=0;i<n-1;i++)
{
  for(int j=0;j<n-1-i;j++)
  { if(A[j]<A[j+1])
     {position=i;
      temp=A[j];
      A[j]=A[j+1];
      A[j+1]=temp;
     }//if
  }//j
}//i

cout<<"\n\n\t\t\tRESULT\n\t\t\t------\n\n\t";

for(i=0;i<n;i++)
{ if(i==n-1)
  cout<<A[i];
  else
  {
  cout<<A[i]<<",";
  }

}

getch();
}