/*                                  ASSIGNMENT 5
				    ------------
TOPIC : Pointer
DESCRIPTION : 1d- 2-d
D.O.S :   13-9-2019
*/
#include<iostream.h>
#include<conio.h>

void main()
{ long int n;
clrscr();
cout<<"\n\t\t1-D  to  2-D \n\t\t------------\n\n";
cout<<"\tHOW MANY NUMBERS : ";cin>>n;
int *A= new int[n];
int*B=new int[n*n];
for(int i=0;i<n*n;i++)
{B[i]=0;}

for( int m=0;m<n;m++)
{cout<<"\n\tElement "<<m+1<<" :: ";cin>>A[m];}

for(i=0;i<n;i++)    //row
{
	for( long int j = n-1-i,k =n-1 ;j<=n-1; j++,k-- )        // col of 2d
		  B[i*n+j]=A[k] ;
}
cout<<"\n\n\t\tOUTPUT\n\t\t------\n\n\t\t";
for(  i=0 ;i<n; i++)
{
	for( long int j=0 ;j<n; j++)
	    cout<<B[i*n+j]<<"  ";
	    cout<<"\n\t\t";

}
 delete[] A;
 delete[] B;
getch();

}





