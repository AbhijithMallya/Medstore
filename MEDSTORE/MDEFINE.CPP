
#define graph() int gdriver = DETECT, gmode;initgraph(&gdriver,&gmode,"")
#define oxy outtextxy
//--Products
#define Prod_openin() pfile.open("e:\\MEDSTORE\\Prd.dat",ios::in | ios::binary )
#define Prod_openapp() pfile.open("e:\\MEDSTORE\\Prd.dat",ios::app| ios::binary )
#define Prod_openout() pfile.open("e:\\MEDSTORE\\Prd.dat",ios::out | ios::binary)
#define Prod_openio() pfile.open("e:\\MEDSTORE\\Prd.dat",ios::out | ios::in | ios::binary)
#define Prod_read() pfile.read((char*)&med, sizeof(med))
#define Prod_write() pfile.write((char*)&med, sizeof(med))
//--Billing Products
#define TProd_openin() tpfile.open("e:\\MEDSTORE\\tPrd.dat",ios::in | ios::binary )
#define TProd_openapp() tpfile.open("e:\\MEDSTORE\\tPrd.dat",ios::app| ios::binary )
#define TProd_openout() tpfile.open("e:\\MEDSTORE\\tPrd.dat",ios::out | ios::binary)
#define TProd_openio() tpfile.open("e:\\MEDSTORE\\tPrd.dat",ios::out | ios::in | ios::binary)
#define TProd_read() tpfile.read((char*)&med, sizeof(med))
#define TProd_write() tpfile.write((char*)&med, sizeof(med))
//--Customers
#define Cust_openin() cfile.open("e:\\MEDSTORE\\Cst.dat",ios::in | ios::binary )
#define Cust_openapp() cfile.open("e:\\MEDSTORE\\Cst.dat",ios::app| ios::binary )
#define Cust_openout() cfile.open("e:\\MEDSTORE\\Cusomer.dat",ios::out | ios::binary)
#define Cust_openio() cfile.open("e:\\MEDSTORE\\Cst.dat",ios::out | ios::in | ios::binary)
#define Cust_read() cfile.read((char*)&cust, sizeof(cust))
#define Cust_write() cfile.write((char*)&cust, sizeof(cust))
//--Deleting
#define Temp_openin() temp.open("e:\\MEDSTORE\\temp.dat",ios::in | ios::binary )
#define Temp_openout() temp.open("e:\\MEDSTORE\\temp.dat",ios::out| ios::binary )
#define Temp_openapp() temp.open("e:\\MEDSTORE\\temp.dat",ios::app| ios::binary )
#define Temp_openio() temp.open("e:\\MEDSTORE\\temp.dat",ios::in | ios::out| ios::binary)
#define Temp_read() temp.read((char*)&med, sizeof(med))
#define Temp_write() temp.write((char*)&med, sizeof(med))
//--Sales History
#define Hist_openin() hfile.open("e:\\MEDSTORE\\Hst.dat",ios::in | ios::binary )
#define Hist_openapp() hfile.open("e:\\MEDSTORE\\Hst.dat",ios::app| ios::binary )
#define Hist_openout() hfile.open("e:\\MEDSTORE\\Hst.dat",ios::out | ios::binary)
#define Hist_openio() hfile.open("e:\\MEDSTORE\\Hst.dat",ios::out | ios::in | ios::binary)
#define Hist_read() hfile.read((char*)&invoice, sizeof(invoice))
#define Hist_write() hfile.write((char*)&invoice, sizeof(invoice))
//--Temp for CART
#define H_temp_openin() htp.open("e:\\MEDSTORE\\htp.dat",ios::in | ios::binary )
#define H_temp_openout() htp.open("e:\\MEDSTORE\\htp.dat",ios::out| ios::binary )
#define H_temp_openapp() htp.open("e:\\MEDSTORE\\htp.dat",ios::app| ios::binary )
#define H_temp_openio() htp.open("e:\\MEDSTORE\\htp.dat",ios::in | ios::out| ios::binary)
#define H_temp_read() htp.read((char*)&invoice, sizeof(invoice))
#define H_temp_write() htp.write((char*)&invoice, sizeof(invoice))



//-------GRAPHICS-------------GRAPHICS-------------GRAPHICS-------------GRAPHICS------
//-------BEGIN--------------BEGIN--------------BEGIN--------------BEGIN-------
//*****D-A-T-E**********D-A-T-E**********D-A-T-E**********D-A-T-E**********D-A-T-E*****
struct dates
{
int D;
int M;
int Y;
};

	//   cust[n].details[cust[n].q_id].purchase=date();
void showdate()
{struct date d;
getdate(&d); int da=d.da_day,ma=d.da_mon,ya=d.da_year;
cout<<da<<"\/"<<ma<<"\/"<<ya;

}


/*void date( int n, int l )
{
struct date d;
getdate(&d);
cust[n].details[l].purchase.D=d.da_day;
cust[n].details[l].purchase.M=d.da_mon;
cust[n].details[l].purchase.Y=d.da_year;
} */
//*****D-A-T-E**********D-A-T-E**********D-A-T-E**********D-A-T-E**********D-A-T-E*****

int rand_balance()
{ randomize();
  int amt=random(200 - 150 + 1) + 150;
return amt;
}


void logo()
{setcolor(GREEN);setfillstyle(SOLID_FILL,WHITE);bar(15,5,105,95);circle(60, 50, 45);setfillstyle(SOLID_FILL,GREEN);bar(15,49,105,58);bar(55,5,65,95);setfillstyle(SOLID_FILL,WHITE);bar(540,5,630,95);circle(585, 50, 45);setfillstyle(SOLID_FILL,GREEN);bar(540,49,630,58);bar(580,5,590,95);setcolor(RED);}

void HEADING()
{clrscr();cleardevice();setfillstyle(9,WHITE);bar3d(0, 0, 800, 100,1,1);settextstyle(4,0,6);   setbkcolor(CYAN);setfillstyle(10,9);bar(0,100,800,700);setcolor(1);oxy(160,0,"MED STORE");settextstyle(7,0, 3);setcolor(RED);oxy(120,50,"Making  Communities  Healthier");cout<<"\n\n\n\n\n\n";setfillstyle(SOLID_FILL,YELLOW); bar(0,100,20,700); bar(0,100,800,120); bar(620,120,640,520); bar(0,460,800,480); setfillstyle(SOLID_FILL,RED); bar(8,108,13,470); bar(8,108,632,112); bar(628,112,632,470); bar(8,467,632,473);logo();}

void Heading()
{clrscr();cleardevice();setfillstyle(9,WHITE);bar3d(0, 0, 800, 100,1,1);settextstyle(4,0,6);setbkcolor(8);setcolor(1);oxy(160,0,"MED STORE");settextstyle(7,0, 3);setcolor(RED);oxy(120,50,"Making  Communities  Healthier");cout<<"\n\n\n\n\n\n";logo();}

//new customer , returnig customer, back;
void customer_graphics()
{ HEADING();setcolor(BLUE);
rectangle(179,140,482,252);
setfillstyle(SOLID_FILL,GREEN);
bar(180,141,481,250);
setfillstyle(SOLID_FILL,WHITE);
for(int i=180,k=1;k<=2;k++,i+=30)
{bar(180,i,480,i+3);}
bar(230,141,233,251);
settextstyle(8,0,2);
 setcolor(YELLOW);
 oxy(200,150,"1 - New Customer");
 oxy(200,180,"2 - Returning Customer");
 oxy(200,210,"3 - Back");

}

void Loading()
{HEADING();settextstyle(4,0,4);oxy(200,200,"Loading .  .  .  .  .");settextstyle(5,0,3);for(int i=0;i<600;i+=5){oxy(i,240," * ");delay(5);}}

void Exiting()
{HEADING();settextstyle(4,0,4);oxy(200,200,"Exiting .  .  .  .  .");settextstyle(5,0,3);for(int i=0;i<600;i+=5){oxy(i,240," * ");delay(5);}settextstyle(4,0,5); setcolor(BLUE);oxy(175,280,"THANK  YOU");getch();exit(0);}

void Line()
{for(int a1=1;a1<=79;a1++) cout<<"-";}

// buy med,prod list, my account help desk, ADMIn , about us , exit
void main_menu()
{ HEADING();setcolor(BLUE); rectangle(179,160,471,401); setfillstyle(SOLID_FILL,GREEN);  bar3d(180,161,470,400,4,4);/* inner*/  setfillstyle(SOLID_FILL,BLUE);  for(int i=200,k=1;k<=6;k++,i+=30)  {bar(181,i,469,i+1);}  bar(250,161,251,401);  int x=20;  settextstyle(8,0,3); setcolor(YELLOW);  oxy(220,x+150,"1 - Buy Medicine");oxy(220,x+180,"2 - Product List");  oxy(220,x+210,"3 - My Account");  oxy(220,x+240,"4 - Help Desk");  oxy(220,x+270,"5 - ADMIN");  oxy(220,x+300,"6 - About Us");  oxy(220,x+330,"7 - Exit");}

void product_header()// product code, name , cost  etc..
{Heading();cout<<endl<<endl;Line();textcolor( 8 );cout<<setw(15)<<"Product Code"<<setw(25)<<"Product Name"<<setw(20)<<"Quantity"<<setw(20)<<"M.R.P\n";Line();}

void customer_header()
{cout<<"\n\t\t\t\tCUSTOMERS LIST\n\t\t\t\t--------------\n";cout<<endl;Line();textcolor( 8 );cout<<setw(15)<<" Name "<<setw(25)<<" Gender "<<setw(20)<<" Age "<<setw(20)<<"Balance\n";Line();}



void about_us()
{ HEADING(); setcolor(RED); settextstyle(0,0,2); int x=-20 ; int y=15 ;  oxy(105,135,"Chairman : ABHIJITH MALLYA"); settextstyle(7,0,3);setcolor(BLUE);; oxy(x+100,y+150,"MED STORE, Founded in the Late 2018 's"); oxy(x+100,y+170,"is one of the India leading Health")  ; oxy(x+100,y+190,"care companies with an ever growing"); oxy(x+100,y+210,"number of pharmacy stores.");  setcolor(BROWN); settextstyle(8,0,3); oxy(x+100,y+240,"Head Office : 7 - Lok Kalyan Marg,"); oxy(x+370,y+265,"New Delhi "); oxy(x+150,y+320,"COPYRIGHTS - 2019");  getch();}

void sales_header()
{Heading();cout<<endl<<endl;Line();textcolor( 8 );cout<<setw(20)<<"Dt. of Purchase"<<setw(17)<<"Name"<<setw(20)<<"Cost*Qnt"<<setw(19)<<"Total(Rs)\n";Line();}

//-------END--------------END--------------END--------------END--------------END-------
//-------GRAPHICS-------------GRAPHICS-------------GRAPHICS-------------GRAPHICS------
