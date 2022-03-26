#include<fstream.h>
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<ctype.h>
#include<iomanip.h>
#include "e:\MEDSTORE\MDEFINE.cpp"

//-------PRODUCT-CS---------------PRODUCT-CS---------------PRODUCT-CS--------
//-------BEGIN------------BEGIN------------BEGIN------------BEGIN------------BEGIN-----
struct date d;
char dnamed[20],flag;
class product
{    int pnum;char pname[30];	int quantity;	float cost;

   public :

 void Add_Product() //pnum,pname,quantity,cost
     { HEADING();settextstyle(7,0,4);setcolor(BLUE);oxy(170,130,"Product Entry");setfillstyle(SOLID_FILL,BLUE);bar(170,170,410,173);settextstyle(4,0,2);setcolor(RED);oxy(150,200,"1. Product Code : ");gotoxy(42,14);cin>>pnum;oxy(150,230,"2. Product Name : ");gotoxy(42,16);gets(pname);oxy(150,260,"3. Quantity : ");gotoxy(36,18);cin>>quantity;oxy(150,292,"4. Cost : ");gotoxy(32,20);cin>>cost;
     }

float rcost()
{ return cost; }

char* rpname()
{
	return pname ;
}

 char search(char name[20])
 {  if(strcmpi(name,pname)==0)
      {  return 'y'; }
    else return 'n';
 }

 void pdetails()
{
    HEADING();settextstyle(4,0,4);setcolor(BLUE);oxy(185,115,"Product Details");setfillstyle(SOLID_FILL,5);bar(185,155,390,158);setcolor(RED);settextstyle(7,0,3);oxy(190,165,"Code : ");gotoxy(36,12);cout<<pnum;oxy(190,198,"Name : ");gotoxy(37,14);cout<<pname;oxy(190,228,"Quantity : ");gotoxy(41,16);cout<<quantity;oxy(190,261,"Cost : ");gotoxy(34,18);cout<<cost;setcolor(BLUE);int y=165;rectangle(179,y+140,482,y+235);setfillstyle(SOLID_FILL,BLUE);bar(180,y+141,481,y+233);
    setfillstyle(SOLID_FILL,GREEN);
    for(int o=y+170,k=1;k<=2;k++,o+=30){bar(180,o,480,o+1);}bar(230,y+141,231,y+235);settextstyle(8,0,2); setcolor(WHITE);k=155;
    oxy(200,k+150,"1 - Edit details");oxy(200,k+180,"2 - Delete Product");oxy(200,k+210,"3 - Back");
}


 void plist()
   { cout<<"\n"<<setw(8)<<pnum<<setw(30)<<pname<<setw(20)<<quantity<<setw(18)<<cost;
   }


void pedit( int q )
{
 quantity = q ;
}

void pedit()
{
	char op;
	do
	{product_header();plist();
	cout<<"\n\n\n\n\t\t\tEdit the Following\n\n\n\t1 . Product Name\n\t2 . Quantity\n\t3 . Cost\n\t4 . Back";
	op=getch();
       if(op=='1'){Heading();cout<<"\n\tEnter new name : ";gets(pname);}
	  else if(op=='2'){Heading();cout<<"\n\tEnter new Quantity : ";cin>>quantity;}
	 else if(op=='3'){Heading();cout<<"\n\tEnter Revised Cost (Rupees) : ";cin>>cost;}
	}while(op!='4');
}

 int rquantity()
 {return quantity;}

 int rpnum(){ return pnum;}


}med; // END OF CLASS && declare a object med in the void main;
//-----END-----END-----END-----END-----END-----END-----END-----END-----END-----END
//----PRODUCT-CS----PRODUCT-CS----PRODUCT-CS----PRODUCT-CS----PRODUCT-CS----PRODUCT-CS

//*****CUSTOMER CLASS******//*****CUSTOMER CLASS******//*****CUSTOMER CLASS******
//***** BEGIN ********** BEGIN ********** BEGIN ********** BEGIN ********** BEGIN *****


class people
{
 char cname[25],gender,password[20];
 int age,balance;

public :
int rbalance()
{return balance;}
char* rcname()
{ return cname;}

char* rpassword()
{return password; }

void Add_Customer()
		{  HEADING();settextstyle(7,0,4);setcolor(BLUE);oxy(170,130,"Customer Data");	 setfillstyle(SOLID_FILL,BLUE);    bar(170,170,410,173); settextstyle(4,0,2);setcolor(RED);    oxy(150,200,"1. Name : ");gotoxy(33,14);gets(cname);oxy(150,230,"2. Gender (m/f) : ");gotoxy(41,16);cin>>gender;if(islower(gender)==1) gender=toupper(gender);oxy(150,260,"3. Age : ");gotoxy(31,18);cin>>age;Heading();oxy(147,213,"Enter Passcode  : ");gotoxy(48,15);for(int i=0; ; i++){password[i]=getch();if(password[i]=='\r'){password[i]='\0'; break;}else cout<<"*";}
		   balance=rand_balance();gotoxy(40,15);cout<<"\n\n\n\t\tCONGRATULATIONS .......\n\n\n\t\tYou have just recived Rs. "<<balance<<" \/-";getch();
		}

void clist()
		{ cout<<setw(20)<<cname<<setw(16)<<gender<<setw(22)<<age<<setw(20)<<balance<<endl;
		}

void cdetails()//  1. change password   2.delete record     3.back
{    	HEADING();settextstyle(4,0,4);
	setcolor(BLUE);
	oxy(185,115,"Customer Details");
	setfillstyle(SOLID_FILL,5);
	bar(185,150,410,153);
	setcolor(RED);
	settextstyle(7,0,3);
	oxy(190,165,"Name : ");
	gotoxy(38,12);cout<<cname;
	oxy(190,198,"Gender : ");
	gotoxy(39,14);cout<<gender;
	oxy(190,228,"Age : ");
	gotoxy(34,16);cout<<age;
	oxy(190,261,"Balance : ");
	gotoxy(41,18);cout<<balance;
	setcolor(BLUE);int y=170;
	rectangle(179,y+140,482,y+265);
	setfillstyle(SOLID_FILL,BLUE);
	bar(180,y+141,481,y+263);
	setfillstyle(SOLID_FILL,GREEN);
	for(int i=y+170,k=1;k<=3;k++,i+=30)
	{bar(180,i,480,i+1);}
	bar(230,y+141,231,y+265);
	settextstyle(8,0,2);
	setcolor(WHITE);
	k=160;
	oxy(200,k+150,"1 - Add Balance");
	oxy(200,k+180,"2 - Delete Record");
	oxy(200,k+210,"3 - Purchase List");
	oxy(200,k+240,"4 - Back");
}

void cbalance()
{int amt;
Heading(); cout<<"\n\n\t\tEnter the amount to be added : ";cin>>amt;
		     balance+=amt;
cout<<"\n\n\t\t\tBalance added successful";getch();

}

void cedit_balance( int b)
{balance=b;}

void cedit_password()
{ char pcode1[20],pcode2[20];
Heading();
cout<<"\n\n\n\n\n\t\tENTER NEW PASSWORD : ";
			for(int i=0; ; i++)
			   {pcode1[i]=getch();
			     if(pcode1[i]=='\r') {pcode1[i]='\0';break;}
			       else cout<<"*";
			   }
cout<<"\n\n\t\tENTER NEW PASSWORD : ";
			for(int j=0 ; ; j++)
			   {pcode2[j]=getch();
			     if(pcode2[j]=='\r') {pcode2[j]='\0';break;}
				 else cout<<"*";
			   }

if(strcmpi(pcode1,pcode2)==0)
{cout<<"\n\n\t\t-------:: Passworsd changed ::---------";strcpy(password,pcode1);}
else
{cout<<"\n\n\t\t-------:: Passworsd Mismatch ::---------";}
getch();
}

} cust;
//****** END ************* END ************* END ************* END *******
//****** CUSTOMER ************ CUSTOMER ************ CUSTOMER ************


//****SALES********SALES********SALES********SALES********SALES********SALES****
//BEGIN__BEGIN__BEGIN_____BEGIN_____BEGIN_____BEGIN_____BEGIN_____BEGIN_____BEGIN________BEGIN_____BEGIN_____BEGIN_____BEGIN_____BEGIN_____BEGIN
class sales :public people, public product
{
 char bcname[20];
 char bpname[20];
 int bqnt;
 int bcost;
 int day,month,year;

public :

char* rbcname()
{return bcname;}

char* rbpname()
{return bpname;}

int rbqnt()
{return bqnt;}

int  rbcost()
{return bcost;}


int rday()
{return day;}

int rmonth()
{return month;}

int ryear()
{return year;}

void sales_list()
{cout<<"\n"<<setw(7)<<day<<"-"<<month<<"-"<<year<<setw(23)<<bpname<<setw(17)<<bcost<<" * "<<bqnt<<setw(17)<<bcost*bqnt;}

void Buy_med_graphics( float cart)
{
setfillstyle(9,WHITE);bar3d(0, 0, 800, 100,1,1);settextstyle(4,0,6);   setbkcolor(6);setfillstyle(10,9);bar(0,100,800,700);setcolor(1);oxy(160,0,"MED STORE");settextstyle(7,0, 3);setcolor(RED);oxy(120,50,"Making  Communities  Healthier");cout<<"\n\n\n\n\n\n";settextstyle(7,0,1);setcolor(BLUE);setfillstyle(SOLID_FILL,YELLOW);bar(0,100,800,115);setcolor(BLUE);oxy(20,95,"USER :: ");setcolor(RED);gotoxy(13,7);cout<<cust.rcname();setcolor(BLUE);oxy(450,95,"BALANCE :: ");setcolor(RED);gotoxy(71,7);cout<<cust.rbalance();setfillstyle(SOLID_FILL,YELLOW);bar(305,100,311,500);setfillstyle(SOLID_FILL,7);bar(10,125,295,460);setfillstyle(SOLID_FILL,YELLOW);bar(0,117,800,123);setfillstyle(SOLID_FILL,7);bar(320,125,630,460);setfillstyle(SOLID_FILL,YELLOW);bar(0,463,800,480);settextstyle(1,0,1); setcolor(RED);logo();
}

void buy_menu(float c)
{
Buy_med_graphics(c);setfillstyle(SOLID_FILL,GREEN);setcolor(YELLOW);bar(150,170,450,400);settextstyle(7,0,3);
oxy(179,200,"1. Buy Product");
oxy(179,230,"2. View Cart");
oxy(179,260,"3. Make Payment");
oxy(179,290,"4. Logout");
}

void Buy(char cust_name[20],long p)
{ fstream cfile,hfile,tpfile,htp;
  char ch,add_cart; int k,qnt;float cart_value=0,value=0;
  long int pos;       int x=330,y=41;

  strcpy(bcname,cust_name);
   int key=1;// I - in the buy // O - out of buy.ie logout or pay over
do {
	buy_menu(cart_value);
	  ch=getch();
	   switch(ch)
	   {
	case '1' :Buy_med_graphics(cart_value);
		settextstyle(7,0,3);setcolor(BLUE);oxy(20,120,"PRODUCT  PURCHASE");setfillstyle(SOLID_FILL,BROWN);bar(15,146,290,148);settextstyle(7,0,1); setcolor(4);
		oxy(15,155,"Prod. Name :: ");gotoxy(20,11);gets(bpname);
		TProd_openio();
		if(!tpfile)
		{oxy(15+x,215,"Product Unavailable");getch();break;}
		else
		{ TProd_read();
			  while(!tpfile.eof())
			   {
			       if(strcmpi(med.rpname(),bpname)==0)
				  {  settextstyle(7,0,3);setcolor(BLUE);
				     oxy(20+x,120,"PRODUCT  DETAILS");
				     setfillstyle(SOLID_FILL,BROWN);
				     bar(15+x,146,290+x,148);
				     settextstyle(7,0,1); setcolor(4);
				     oxy(15+x,155,"Prod. Name :: ");gotoxy(21+y,11);cout<<med.rpname();
   /*Display details*/   	     oxy(15+x,185,"Quantity    :: ");gotoxy(21+y,13);cout<<med.rquantity();
				     oxy(15+x,217,"Cost         :: ");gotoxy(21+y,15);cout<<med.rcost()<<" Rs";
				     oxy(15,185,"Quantity    :: ");gotoxy(20,13);cin>>bqnt;
/* I/P Quantity */                   value=bqnt*med.rcost();
				     if(bqnt<=med.rquantity())
				      { bcost=med.rcost();

				      cart_value+=bqnt*bcost;

					if(cart_value<=cust.rbalance())
					{
					 oxy(15,217,"Add To Cart (Y/N) :: ");gotoxy(30,15);add_cart=getche();
						if(add_cart=='Y'||add_cart=='y')
						  { if(bqnt!=0)
						   {

						    getdate(&d);						    day=d.da_day;
						    month=d.da_mon;
						    year=d.da_year;
						    H_temp_openapp();
						    H_temp_write();
						    htp.close();
						    }
						    pos=tpfile.tellg();

						    med.pedit(med.rquantity()-bqnt);
						    tpfile.seekp(pos-sizeof(med)) ;
						    TProd_write();tpfile.close();
						    oxy(15,255," Product added to Cart ");getch();
						  }

					} // cost and balance
					else
					{oxy(15,255,"Cart Value EXCEEDS Balance ");getch();}
				      }//   qnt
				     else
				     {oxy(15,255,"No Sufficient Stocks ");getch();}
				   break;
				  }//   if product matches                                                  2
			       TProd_read();
			     }//  !fle.eof()
			     if(tpfile.eof())
			     {oxy(15,255,"Product Unavailable ");getch();}


		} tpfile.close();break;

	case '2':   H_temp_openin();
		  Buy_med_graphics(cart_value);
		setfillstyle(SOLID_FILL,BROWN);
		bar(30,140,610,450);
		settextstyle(1,0,1);
		setcolor(YELLOW);
		oxy(47,145,"PRODUCT");
		oxy(270,145,"QUANTITY");
		oxy(470,145,"COST( Rs/unit )");
		setfillstyle(SOLID_FILL,RED);
		bar(30,170,610,175);
		settextstyle(11,0,BROWN);
		k=11;
		if(!htp)
			{gotoxy(33,14);cout<<"CART  EMPTY ";}
		else{
			H_temp_read();
			while(!htp.eof())
			{ k++;
			gotoxy(8,k);cout<<invoice.bpname;
			gotoxy(38,k);cout<<invoice.bqnt;
/*   CART  */    	gotoxy(61,k);cout<<invoice.bcost;
			H_temp_read();
			}
			gotoxy(30,k+2);cout<<"TOTAL COST : ";
			gotoxy(43,k+2);cout<<cart_value;        ;

		    }
		     htp.close();
		     getch();
		     break;





	 case '3' :  H_temp_openin();char pay;
			Buy_med_graphics(cart_value);
			setfillstyle(SOLID_FILL,BROWN);
			bar(30,140,610,450);
			settextstyle(1,0,1);
			setcolor(YELLOW);
			oxy(47,145,"PRODUCT");
			oxy(270,145,"QUANTITY");
			oxy(470,145,"COST( Rs/unit )");
			setfillstyle(SOLID_FILL,RED);
			bar(30,170,610,175);
			settextstyle(11,0,BROWN);k=11;
			if(!htp)
			{gotoxy(33,14);cout<<"CART  EMPTY ";getch();}
			else
			{
				H_temp_read();
				while(!htp.eof())
				{ k++;
				gotoxy(8,k);cout<<invoice.bpname;
				gotoxy(38,k);cout<<invoice.bqnt;
	/*   MAKE PAYEMENT  */  gotoxy(61,k);cout<<invoice.bcost;
				H_temp_read();
				}
			   gotoxy(10,k+3);cout<<"TOTAL COST : ";
			   gotoxy(24,k+3);cout<<cart_value;        ;
			   gotoxy(10,k+5);cout<<"CONFIRM PAYEMENT ( Y/N ) :: ";
			   gotoxy(44,k+5);pay=getche();
			   if(pay=='Y'||pay=='y')
			   {
				   Cust_openio();
				   cfile.seekg(p-sizeof(cust));
				   Cust_read();
				   cust.cedit_balance(cust.rbalance()-cart_value);
				   cfile.seekp(p-sizeof(cust));
				   Cust_write();
				   cfile.close();
				   key=0; hfile.close();htp.close();
				   H_temp_openin();
				   Hist_openapp();
				   H_temp_read();
				   while(!htp.eof())
				   {
				   Hist_write();
				   H_temp_read();
				   }
				   hfile.close();
				   htp.close();
				   remove("e:\\MEDSTORE\\htp.dat");
				   remove("e:\\MEDSTORE\\Prd.dat");
				   rename("e:\\MEDSTORE\\tPrd.dat","e:\\MEDSTORE\\Prd.dat");


			   }
			   else {htp.close();}
			  } break;
	       case '4' : remove("e:\\MEDSTORE\\htp.dat");remove("e:\\MEDSTORE\\tPrd.dat");key=0;
}

}while(key!=0);
}

}invoice;   //  end  of  class

//*****END**********END**********END**********END**********END**********END*****
//**** SALES ********* SALES ********* SALES ********* SALES ********* SALES ********* SALES *****



void Product_list()
{fstream pfile,temp;
product_header();Prod_openin();Prod_read();
 if(pfile.eof()||!pfile) { cout<<"\n\n\t\t\tMedicines not Available";}
 else
 {  while(!pfile.eof())
     {med.plist();
     Prod_read();
     }pfile.close();
 }
 getch();
}

void Customer_list()
{fstream cfile;
Heading();
customer_header();Cust_openin();Cust_read();
 if(cfile.eof()||!cfile) { cout<<"\n\n\t\t\tCustomer not Registered";}
 else
 {  while(!cfile.eof())
     {cust.clist();
     Cust_read();
     }cfile.close();
 }
 getch();
}

void transaction(char name[20])
{
fstream hfile;
sales_header();
Hist_openin();
int f=0;
if(!hfile)
{cout<<"\n\n\t\tFile Missing";}
else
{ Hist_read();
  while(!hfile.eof())
   {
     if(strcmpi(name,invoice.rbcname())==0)
      {invoice.sales_list();f=1;}
       Hist_read();
   }
  hfile.close();
  if(f==0)
  {cout<<"\n\n\t\t****** You have not purchased yet ******";}
}
 getch();

}

void search_menu_cust(char dcnamed[30] ) // after search for "BALANCE" &&  "DELETE"
{ fstream cfile,temp,hfile; long pos;
char ch;
 do{ cust.cdetails();  ch =getch();
	switch(ch)
	  { case '1' :Cust_openio();
	/*balalnce*/  Cust_read();
		      while(!cfile.eof())
		      { pos=cfile.tellg();
			if(strcmpi(cust.rcname(),dcnamed)==0)
			 {
			   cust.cbalance();
			   cfile.seekp(pos-sizeof(cust)) ;
			   Cust_write();
			   cfile.close();
			 break;
			 }
			Cust_read();
		      }break;
	    case '2' :Cust_openin();Temp_openout();
		      Cust_read();
		      while(!cfile.eof())
    /*DELETE*/	      {    if(strcmpi(cust.rcname(), dcnamed ) !=0 )
			   Temp_write();
			   Cust_read();
		      }
		      cfile.close();temp.close();
		      remove("e:\\MEDSTORE\\Cst.dat");
		      rename("e:\\MEDSTORE\\temp.dat","e:\\MEDSTORE\\Cst.dat");Heading();cout<<"\n\n\t\tRecord deleted successfully";
		      getch();
		      ch='4';break;
	    case '3' :transaction(dcnamed);break;

	  }


     }while(ch!='4');
}


void admin_cust() //1.C_LIST	2.C_DETAILS	3.BACK
{fstream cfile;
   char ch,dcnamed[20];
   do{	HEADING();settextstyle(7,0,5);setcolor(RED);oxy(175,115,"Administrator");setfillstyle(SOLID_FILL,5);bar(175,165,475,168);setcolor(BLUE);int y=40;rectangle(179,y+140,482,y+235);setfillstyle(SOLID_FILL,BLUE);bar(180,y+141,481,y+233);setfillstyle(SOLID_FILL,GREEN);for(int i=y+170,k=1;k<=2;k++,i+=30){bar(180,i,480,i+1);}bar(230,y+141,231,y+235);settextstyle(8,0,2); setcolor(WHITE);k=30;
	oxy(200,k+150,"1 - Customers List");oxy(200,k+180,"2 - Customer Details");oxy(200,k+210,"3 - Back");
	ch=getch();
	switch(ch)
	{
	case '1' : Customer_list();break;
	case '2' : Heading();Cust_openin();Cust_read();
		   cout<<"\n\n\n\t\tEnter Customer Name : ";gets(dcnamed);
		      flag='n';
		      while(!cfile.eof())
			{ if(strcmpi(cust.rcname(), dcnamed ) == 0)
				 {  flag='y';cfile.close() ;
			     search_menu_cust(dcnamed );
			     break; }

			 Cust_read();
			}
		       if(flag=='n')
		   {cout<<"\n\n\t\tRecord doesn't exist";cfile.close();}
		   getch();break;
       }//  switch
      }	while(ch!='3');
}

void search_menu_med( int pno ) // after search for "EDIT" &&  "DELETE"
{ fstream pfile,temp; long pos;
char ch;
 do{ med.pdetails();  ch =getch();
	switch(ch)
	  { case '1' :Prod_openio();
	/*EDIT*/      Prod_read();
		      while(!pfile.eof())
		      { pos=pfile.tellg();
			if(med.rpnum()==pno )
			 { med.pedit();
			   pfile.seekg(pos-sizeof(med)) ;
			   Prod_write();
			   pfile.close();
			 break;
			 }
			Prod_read();
		      }
		      break;
	    case '2' :Prod_openin();Temp_openout();//Prod_read();
		      while(!pfile.eof())
    /*DELETE*/	      {    Prod_read();
			   if(med.rpnum()!=pno )
			   Temp_write();
		      }
		      pfile.close();temp.close();
		      remove("e:\\MEDSTORE\\Prd.dat");
		      rename("e:\\MEDSTORE\\temp.dat","e:\\MEDSTORE\\Prd.dat");Heading();cout<<"\n\n\t\tProduct deleted successfully";getch();
		      ch='3';break;
	  }
     }while(ch!='3');
}

void admin_products()  // 1. Add product   2. Searh product  3. Back  9. CLEAR
{ fstream pfile;
 char ch;int pos;
	do{ HEADING();settextstyle(7,0,5);setcolor(RED);oxy(175,115,"Administrator");	setfillstyle(SOLID_FILL,5);bar(175,165,475,168);setcolor(BLUE);int y=40;	rectangle(179,y+140,482,y+235);setfillstyle(SOLID_FILL,BLUE);	bar(180,y+141,481,y+233); setfillstyle(SOLID_FILL,GREEN);for(int i=y+170,k=1;k<=2;k++,i+=30) {bar(180,i,480,i+1);}bar(230,y+141,231,y+235);	settextstyle(8,0,2); setcolor(WHITE);k=30;oxy(200,k+150,"1 - Add Product");	oxy(200,k+180,"2 - Search Product");oxy(200,k+210,"3 - Back");
	ch=getch();
	if(ch=='9'){Prod_openout();pfile.close();}
	else
	if(ch=='1'){Prod_openapp();med.Add_Product();Prod_write();pfile.close();}
	else
	if(ch=='2'){Heading();Prod_openin();Prod_read();
		 cout<<"\n\n\n\t\tEnter Product Name : ";gets(dnamed);
		      flag='n';
		      while(!pfile.eof())
			{ if(strcmpi(med.rpname(), dnamed ) == 0)
				 {  flag='y';pfile.close() ;search_menu_med(med.rpnum() );
			     break;}

			 Prod_read();
			}
		       if(flag=='n')
		       {cout<<"\n\n\t\tProduct doesnt exist";pfile.close();}

		    getch();
		  } // if 2
       }while(ch!='3');

}

void admin_menu()// [ADMINISTRATOR]  1. PRoduct  2. Customers   3. Logout
{  char ch;
    do{ HEADING();
    settextstyle(7,0,5);
    setcolor(RED);
    oxy(175,115,"Administrator");
    setfillstyle(SOLID_FILL,5);
    int y=25;
    bar(175,165,475,168);
    setcolor(BLUE);
    rectangle(179,180,482,292+y);
    setfillstyle(SOLID_FILL,RED);
    bar(180,181,481,290+y);
    setfillstyle(SOLID_FILL,WHITE);

	for(int i=220,k=1;k<=3;k++,i+=30)
	{bar(180,i,480,i+3);}
	bar(230,181,233,291+y);
	settextstyle(8,0,2);
	 setcolor(YELLOW);
	 oxy(200,190,"1 - Products");
	 oxy(200,220,"2 - Customers");
	 oxy(200,250,"3 - Sales");
	 oxy(200,280,"4 - Logout");

	ch=getch();
	switch(ch)
	{case '1' : admin_products();break;
	 case '2' : admin_cust();break;
	}
       }while(ch!='4');

}

void admin_login()
	{   HEADING();char pcode[20];settextstyle(7,0,4); int n;setcolor(5);oxy(110,240,"ADMIN KEY : ");
	gotoxy(45,17);for(int i=0; ; i++)
	 { pcode[i]=getch();   if(pcode[i]=='\r'){pcode[i]='\0';break;}
	   else cout<<"";
	 }if(strcmpi("1221",pcode)==0)admin_menu();else
	{Heading();cout<<"\n\n\n\n\n\n\n\t\t\t\tINVALID DETAILS";getch();}
}



void myprofile()// n is c_id
 {
 char option;
do{Heading();
cout<<"\n\n\t\t\t   USER : "<<cust.rcname()<<endl;
cout<<"Your Balance (Rs.) : "<<cust.rbalance()<<" \/-"<<"\t\t\t\t  ";showdate();
cout<<"\n\n\n\t1 . PURCHASE LIST\n\t2 . CHANGE PASSWORD \n\n\tPress L for Logout";
option=getch();
if(option=='1')  {transaction(cust.rcname());}
if(option=='2')  cust.cedit_password();
}while(option!='l'&& option!='L');
}


void myaccount()
{fstream cfile;char pcode[20]; long pos;
 Heading();Cust_openio();Cust_read();  //ask whether io or out
		   cout<<"\n\n\n\t\tEnter Customer Password  : ";
		   for(int i=0;;i++)
		 { pcode[i]=getch();
		   if(pcode[i]=='\r') {pcode[i]='\0';break;}
		   else
		   cout<<"*";
		 }
		   flag='n';
		      while(!cfile.eof())
			{ if(strcmpi(cust.rpassword(), pcode ) == 0)
				 {  flag='y'; pos=cfile.tellg();
				    myprofile();
				    cfile.seekp(pos-sizeof(cust));
				    Cust_write();cfile.close() ;
			     break;
			}
			 Cust_read();
			}
		       if(flag=='n')
		   {cout<<"\n\n\t\tInvalid Details ";cfile.close();}
		   getch();

}

void customer()
{fstream cfile;
   int option;
     do{        customer_graphics();
		option=getch();
		if(option=='1')
		{Cust_openapp();cust.Add_Customer();Cust_write();cfile.close();}
		if(option=='2')
		myaccount();
	}while(option!='3');

}

void check()
{ fstream cfile,pfile,tpfile;
Heading();   long pos,p=0;
char pcode[20];
Cust_openin();
if(!cfile||!pfile) { cout<<"\n\n\n\t\t\tFILE not available";}
else
{Cust_read();
 cout<<"\n\n\t\tEnter your PASSCODE : ";
 for(int i=0; ; i++)
 { pcode[i]=getch();
   if(pcode[i]=='\r'){pcode[i]='\0';break;}
   else cout<<"";
 }
		   while(!cfile.eof())
			{ if(strcmpi(cust.rpassword(), pcode ) == 0)
				 {pos=cfile.tellg();
				  cfile.close() ;
				  Prod_openin();
				  TProd_openout();
				  Prod_read();
				    while(!pfile.eof())
				     { TProd_write();
				       Prod_read();
				     }
				  pfile.close();tpfile.close();
				  invoice.Buy(cust.rcname(),pos);
				  break;
				 }
			   Cust_read();
			}
		       if(cfile.eof())
	   {cout<<"\n\n\t\t*** :: Invalid Passcode :: *** ";}
	   cfile.close();
}
getch();
}
//------voidmain------------voidmain------------voidmain------------voidmain------
//-----BEGIN-----------BEGIN-----------BEGIN-----------BEGIN-----------BEGIN------
void main()
{
product med;
graph();
HEADING();
Loading();char option;
do{ main_menu();
    option=getch();
switch(option)
	{     		case '1' :Loading();check();Loading();break;
			case '2' :Loading();Product_list();Loading();break;
			case '3' :Loading();customer();Loading();break;
		  //	case '4' :Help_line();Loading();break;
			case '6' :Loading();about_us();Loading();break;
			case '5' :Loading();admin_login();Loading();break;
			case '7' :Exiting();break;

	}

  }while(1);
}

