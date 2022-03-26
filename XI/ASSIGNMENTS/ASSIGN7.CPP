/*                               ASSIGNMENT 7
TOPIC : IF else if ladder
DESCRIPYION : Classifying Triangles based on sides
DATE OF SUBMISSION  :  14 - 09 - 2018           */
#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
clrscr();
int a,b,c,x;
cout<<"\n\n\t\t\tENTER THE SIDES OF THE TRIANGLE : ";
cout<<"\n\t\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*";
cout<<"\n\n\tFIRST SIDE (in cm) : ";cin>>a;
cout<<"\n\n\tSECOND SIDE (in cm) : ";cin>>b;
cout<<"\n\n\tTHIRD SIDE (in cm) : ";cin>>c;
if(a+b>c&&a+c>b&&b+c>a)
  { if(a==b&&a==c&&b==c)
      cout<<"\n\n\t\t\tTHE GIVEN TRIANGLE IS EQUILATERAL TRIANGLE";
      else
       if(a==b||a==c||b==c)
	 cout<<"\n\n\t\t\tTHE GIVEN TRIANGLE IS ISOSCELES TRIANGLE";
	 else
	  cout<<"\n\n\t\t\tTHE GIVEN TRIANGLE IS SCALENE TRIANGLE";}
else
cout<<"\n\n\n\n\t\t\t\tTRIANGLE CANNOT BE FORMED";
getch();
}