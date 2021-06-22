//Header files used
#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>

int glob=0;
int global=10;

class d_booking    //defining class d_booking
{
protected:
int pnr;
char f_d[50],toja[7],tojd[7];
long int doj;
int choice,src,dest;
public:
void d_pnr()
{
glob++;
pnr=glob;
}
int j_detail()
{
{
cout<<"\nEnter Date of Journey(DDMMYY):";
cin>>doj;
cout<<"\n";
cout<<"1.Calicut \t2.Chennai \t3.Delhi \t4.Kolkata" <<"\n\n";
cout<<"Enter Source: ";
cin>>src;
cout<<"\n";
cout<<"Enter destination: ";
cin>>dest;
cout<<"\n";
if((src==1 && dest==2) || (src==2 && dest==1))
{
cout << "\t \t \tFlights Found\n\n";
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Air India\t08:00\t\t11:05\t\tRs.5000\n";
cout << "2.Spicejet\t14:00\t\t17:05\t\tRs.5500\n";
cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6000\n";
}

else if((src==1 && dest==3) || (src==3 && dest==1))
{
cout << "\t \t \tFlights Found\n\n";
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Air India\t08:00\t\t11:05\t\tRs.5000\n";
cout << "2.Spicejet\t14:00\t\t17:05\t\tRs.5500\n";
cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6000\n";
}

else if((src==1 && dest==4) || (src==4 && dest==1))
{
cout << "\t \t \tFlights Found\n\n";
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Air India\t08:00\t\t11:05\t\tRs.4000\n";
cout << "2.Spicejet\t14:00\t\t17:05\t\tRs.4250\n";
cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6100\n";
}

else if((src==2 && dest==3) || (src==3 && dest==2))
{
cout << "\t \t \tFlights Found\n\n";
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Air India\t08:00\t\t11:05\t\tRs.5400\n";
cout << "2.Spicejet\t14:00\t\t17:05\t\tRs.2500\n";
cout << "3.Vistara\t19:00\t\t22:05\t\tRs.2890\n";
}

else if((src==2 && dest==4) || (src==4 && dest==2))
{
cout << "\t \t \tFlights Found" << endl << endl;
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Air India\t08:00\t\t11:05\t\tRs.5000\n";
cout << "2.Spicejet\t14:00\t\t17:05\t\tRs.4500\n";
cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6000\n";
}
else if((src==3 && dest==4) || (src==4 && dest==3))
{
cout << "\t \t \tFlights Found" << endl << endl;
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Air India\t08:00\t\t11:05\t\tRs.5800\n";
cout << "2.Spicejet\t14:00\t\t17:05\t\tRs.5508\n";
cout << "3.Vistara\t19:00\t\t22:05\t\tRs.6050\n";
}
else if(src==dest)
{
cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
return j_detail();
}
else
{
cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
return j_detail();
}

}
}
int  select_flight()
{
cout << "\nEnter your choice" << endl;
cin>>choice;
switch(choice)
{
case 1:
cout << "\nFlight selected:"<<endl;
cout << "Air India"<<endl;
strcpy(f_d,"Air India");
cout << "Departure Time : 08:00"<<endl;
cout<<"Arrival Time: 11:05"<<endl;
strcpy(tojd,"8:00");
strcpy(toja,"11:05");
break;
case 2:
cout << "\nFlight selected:"<<endl;
cout << "Spicejet"<<endl;
strcpy(f_d,"Spicejet");
cout << "Departure Time : 14:00"<<endl;
cout<<"Arrival Time: 17:05"<<endl;
strcpy(tojd,"14:00");
strcpy(toja,"17:05");
break;
case 3:
cout << "\nFlight selected:" << endl;
cout << "Vistara" << endl;
strcpy(f_d,"Vistara");
cout << "Departure Time : 19:00" << endl;
cout<<"Arrival Time: 22:05" << endl;
strcpy(tojd,"19:00");
strcpy(toja,"22:05");
break;
default:
cout << "Wrong input entered.\nTry again" << endl;
return select_flight();
}
}
};

class i_booking   //defining class i_booking
{
protected:
int pnri;
char f_i[50],tojai[7],tojdi[7];
long int doji;
int srci,desti,choicei;
public:
void i_pnr()
{
global++;
pnri=global;
}

int j_detaili()
{
cout << "Enter DateOfJourney(DDMMYY): ";
cin >> doji;
cout<<"\n";
cout << "1.New York 2.Dubai 3.France 4.Singapore 5.Germany\n\n";
cout << "Enter Source: ";
cin >> srci;
cout<<"\n";
cout << "Enter destination: ";
cin >> desti;
cout<<"\n";
cout << "\t \t \tFlights Found" << endl << endl;

if((srci==1 && desti==3) || (srci==3 && desti==1))
{
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Qatar Airways\t10:00\t\t14:05\t\tRs.25000\n";
cout << "2.Etihad Airways14:00\t\t18:05\t\tRs.21500\n";
cout << "3.Fly Emirates\t18:00\t\t22:05\t\tRs.24000\n";
}

else if((srci==1 && desti==4) || (srci==4 && desti==1))
{
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Qatar Airways\t10:00\t\t14:05\t\tRs.25500\n";
cout << "2.Etihad Airways14:00\t\t18:05\t\tRs.21300\n";
cout << "3.Fly Emirates\t18:00\t\t22:05\t\tRs.24650\n";
}

else if((srci==1 && desti==5) || (srci==5 || desti==1))
{
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Qatar Airways\t10:00\t\t14:05\t\tRs.52500\n";
cout << "2.Etihad Airways14:00\t\t18:05\t\tRs.59420\n";
cout << "3.Fly Emirates\t18:00\t\t22:05\t\tRs.64892\n";
}

else if((srci==2 && desti==3) || (srci==3 && desti==2))
{
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Qatar Airways\t10:00\t\t14:05\t\tRs.17800\n";
cout << "2.Etihad Airways14:00\t\t18:05\t\tRs.14900\n";
cout << "3.Fly Emirates\t18:00\t\t22:05\t\tRs.18700\n";
}

else if((srci==2 && desti==4) || (srci==4 && desti==2))
{
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Qatar Airways\t10:00\t\t14:05\t\tRs.32000\n";
cout << "2.Etihad Airways14:00\t\t18:05\t\tRs.38500\n";
cout << "3.Fly Emirates\t18:00\t\t22:05\t\tRs41259\n";
}

else if(srci==2 && desti==5 || (srci==5 && desti==2))
{
cout << "Airline:\tDeparture:\tArrival:\tPrice:\n";
cout << "1.Qatar Airways\t10:00\t\t14:05\t\tRs.82500\n";
cout << "2.Etihad Airways14:00\t\t18:05\t\tRs.87550\n";
cout << "3.Fly Emirates\t18:00\t\t22:05\t\tRs81478\n";

}
else if(srci==desti)
{
cout << "wrong input entered.\nTry again\n\n\n"<< endl;
return j_detaili();
}
else
{
cout << "Wrong input entered.\nTry again\n\n\n";
return j_detaili();
}

}

int select_flighti()
{
cout << "\nEnter your choice" << endl;
cin >> choicei;
switch(choicei)
{
case 1:
cout << "\nFlight selected:" <<endl;
cout << "Qatar Airways" << endl;
strcpy(f_i,"Qatar Airways");
cout << "Departure Time: 10:00" << endl;
cout << "Arrival Time: 14:05" << endl;
strcpy(tojdi,"10:00");
strcpy(tojai,"14:05");
break;
case 2:
cout << "\nFlight selected:" << endl;
cout << "Etihad Airways" << endl;
strcpy(f_i,"Etihad Airways");
cout << "Departure Time: 14:00" << endl;
cout << "Arrival Time: 18:05" << endl;
strcpy(tojdi,"14:00");
strcpy(tojai,"18:05");
break;
case 3:
cout << "\nFlight selected:" << endl;
cout << "Fly Emirates" << endl;
strcpy(f_i,"Fly Emirates");
cout << "Departure Time : 18:00" << endl;
cout << "Arrival Time: 22:05" << endl;
strcpy(tojdi,"18:00");
strcpy(tojai,"22:05");
break;
default:
cout << "Wrong input entered" << endl;
return select_flighti();
}
}
};

class passenger: public d_booking,public i_booking  //defining class passenger
{
protected:
char f_name[20],l_name[20],email[50];
int age,gender;
long int c_no;
public:
void p_detail(int x)
{   if(x==1)
{ j_detail();
select_flight();
}
else
{  j_detaili();
select_flighti();
}
clrscr();
cleardevice();
cout << "\n\n\nEnter passenger details";
cout << "\nFirst Name:";
cin >> f_name;
cout << "Last Name:";
cin >> l_name;
}
int gender_check()
{
cout << "\nGender:\n1.Male::2.Female::3.Others";
cout<<"\nChoose one: ";
cin >> gender;
if(gender>3)
{
cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
return gender_check();
}
}
void more_details()
{
cout << "Age:";
cin >> age;
cout << "Email Id:";
cin >> email;
cout << "Contact number :";
cin >> c_no;
cout << "\n\nDetails Entered:\n";
cout << "Name:" << f_name << " " << l_name << endl;
cout << "Gender:" << gender << endl;
cout << "Age:" << age << endl;
cout << "Email id:" << email << endl;
cout << "Contact No.:" << c_no << endl;
}
int getpnr()
{
return pnr;
}
int getpnri()
{
return pnri;
}

void disp()
{
cout<<"PNR:" << pnr << endl;
cout<<"Flight:" << f_d << endl;
cout<<"Name:" << f_name << " " << l_name << endl;
cout<<"DOJ:" << doj << endl;
cout<<"Departure Time:" << tojd << endl;
cout<<"Arrival Time:" << toja<<endl;
cout<<"\nWish you a safe and happy journey \1";
}

void dispi()
{
cout<<"PNR:" << pnri << endl;
cout<<"Flight:" << f_i << endl;
cout<<"Name:" << f_name << " " << l_name << endl;
cout<<"DOJ:" << doji << endl;
cout<<"Departure Time:" << tojdi << endl;
cout<<"Arrival Time:" << tojai<<endl;
cout<<"\nWish you a safe and happy journey \1";
}
};

class payment         //defining class payment
{
protected:
long int choice1,bank,card,date,cvv,user_id;
char password[10];
public:
void pay_detail()
{ 
clrscr();
cleardevice();
cout << "\n\n\nHow would you like to pay?:\n";
cout << "\n1.Debit Card \n2.Credit Card \n3.Net Banking";
cout << "\n\nEnter your choice: ";
cin >> choice1;
switch(choice1)
{
case 1:
cout << "\nEnter card no.:";
cin >> card;
cout << "\nEnter expiry date:";
cin >> date;
cout << "\nEnter CVV no.:";
cin >> cvv;
cout<<"\nPlease wait...";
delay(1000);
cout << "\nTransaction Successful\n";
break;
case 2:
cout << "\nEnter card no.:";
cin >> card;
cout << "\nEnter expiry date:";
cin >> date;
cout << "\nEnter password:";
cin >> password;
cout<<"\nPlease wait...";
delay(1000);
cout << "\nTransaction Successful\n";
break;
case 3:
cout << "Banks Available:\n1.State Bank of India\n2.Punjab National Bank\n3.Federal Bank\n4.South Indian Bank\n5.Others";
cout << "\nSelect your bank:";
cin >> bank;
cout << "\nYou have selected:" << bank;
cout << "\nEnter user id:";
cin >> user_id;
cout << "\nEnter password:";
cin >> password;
cout<<"\nPlease wait...";
delay(1000);
cout << "\nTransaction Successful\n";
break;
default:
cout << "\nWrong input entered.\nTry again\n\n";
getch();
}
}

};

void createfile(passenger p)
{  
ofstream fin("domestic.txt",ios::binary|ios::app);
fin.write((char*)&p,sizeof(p));
fin.close();
}


void cancelticket(int x)
{  
passenger p;
int f=0;
ifstream fout("domestic.txt",ios::binary|ios::app);
ofstream fin("domestic1.txt",ios::binary|ios::app);
fout.read((char *)&p,sizeof(p));
while(fout)
{
if(p.getpnr()!=x)
fin.write((char *)&p,sizeof(p));
else
{
p.disp();
delay(500);
cout<<"\nYour Above ticket is being canceled:\n";
delay(1000);
cout<< "Amount refunded: Rs 1000\n";
f++;
}
fout.read((char *)&p,sizeof(p));
}
if(f==0)
cout<<"Ticket not found\n";
fout.close();
fin.close();
remove("domestic.txt");
rename("domestic1.txt","domestic.txt");
}

void checkticket(int x)
{  
passenger p;
int f=0;
ifstream fout("domestic.txt",ios::binary);
fout.read((char *)&p,sizeof(p));
while(fout)
{
if(p.getpnr()==x)
{p.disp();
cout<<"\nYour ticket"<<endl;
f++;
break;
}
fout.read((char *)&p,sizeof(p));

}
fout.close();
if(f==0)
cout<<"Ticket not found"<<endl;
}

void createfilei(passenger p)
{
ofstream fin("international.txt",ios::binary|ios::app);
fin.write((char*)&p,sizeof(p));
fin.close();
}

void cancelticketi(int x)
{  passenger p;
int f=0;
ifstream fout("international.txt",ios::binary|ios::app);
ofstream fin("international1.txt",ios::binary|ios::app);
fout.read((char *)&p,sizeof(p));
while(fout)
{
if(p.getpnri()!=x)
fin.write((char *)&p,sizeof(p));
else
{
p.dispi();
delay(500);
cout<<"Your Above ticket is being deleted:\n";
delay(1000);
cout<<"\nAmount refunded: Rs 1000\n";
f++;
}
fout.read((char *)&p,sizeof(p));
}
if(f==0)
cout<<"\nTicket not found\n";
fout.close();
fin.close();
remove("international.txt");
rename("international1.txt","international.txt");

}
void checkticketi(int x)
{  passenger p;
int f=0;
ifstream fout("international.txt",ios::binary);
fout.read((char *)&p,sizeof(p));
while(fout)
{
if(p.getpnri()==x)
{p.dispi();
cout<<"\nYour ticket"<<endl;
f++;
break;
}
fout.read((char *)&p,sizeof(p));
}
fout.close();
if(f==0)
cout<<"Ticket not found"<<endl;

}

void last() //flight animation
{
int gd=DETECT,gm,i=0;
initgraph(&gd,&gm,"..\\BGI");

for(i;i<600;i++)
{
line(80+i,300-i,250+i,300-i);
line(150+i,340-i,200+i,340-i);
line(150+i,340-i,100+i,400-i);
line(200+i,340-i,100+i,400-i);
line(80+i,380-i,115+i,380-i);
line(132+i,380-i,250+i,380-i);
ellipse(250+i,340-i,270,90,80,40);
line(100+i,270-i,150+i,300-i);
line(100+i,270-i,200+i,300-i);
line(80+i,300-i,65+i,260-i);
arc(80+i,340-i,180,270,40);

line(40+i,340-i,40+i,260-i);
line(40+i,260-i,65+i,260-i);
ellipse(250+i,338-i,10,81,70,30);
line(261+i,333-i,320+i,333-i);
line(261+i,333-i,261+i,310-i);
rectangle(100+i,310-i,120+i,330-i);
rectangle(130+i,310-i,150+i,330-i);
rectangle(160+i,310-i,180+i,330-i);
rectangle(190+i,310-i,210+i,330-i);
rectangle(220+i,310-i,240+i,330-i);

//houses

line(0,459,679,459);

rectangle(510-i,459,550-i,430);
rectangle(550-i,459,610-i,430);
line(530-i,410,550-i,430);
line(530-i,410,510-i,430);
line(590-i,410,610-i,430);
line(590-i,410,530-i,410);


rectangle(430-i,430,490-i,459);
rectangle(390-i,430,430-i,459);
line(410-i,410,430-i,430);
line(410-i,410,390-i,430);
line(410-i,410,470-i,410);
line(470-i,410,490-i,430);

outtextxy(250,465,"...THANK YOU...");
delay(2);

cleardevice();
}
}

int main()
{
int x=150,i,gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"..//BGI");

int t;
for(t=8;t<9;t++)
{
setcolor(8);
settextstyle(6,0,1);
outtextxy(10,20,"S.A.I.L");
settextstyle(t,0,t);
outtextxy(10,20,"FLIGHT");
outtextxy(10,90,"RESERVATION");
outtextxy(10,160,"SYSTEM  ");


}
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(150,420,"LOADING,PLEASE WAIT");

for(i=0;i<300;++i)
{
delay(30);
line(x,416,x,440);
x++;
}
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tPress any key to continue!";

int q;
for(q=8;q<9;q++)
{
setcolor(7);
settextstyle(6,0,1);
outtextxy(10,20,"S.A.I.L");
settextstyle(q,0,q);
outtextxy(10,20,"FLIGHT");
outtextxy(10,90,"RESERVATION");
outtextxy(10,160,"SYSTEM  ");
}
getch();
closegraph();

void printMsg();
class d_booking d1;
class i_booking i1;
class passenger p1;
class payment p2;

int ch,ch1,n;
char input;
do
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"..//BGI");
setbkcolor(0);
int font =4 ;
int direction = 0;
int font_size = 4;
settextstyle(font, direction, font_size);
outtextxy(40, 20, "Welcome to Flight Reservation System");
outtextxy(40,30,"__________________________");
settextstyle(7,0,1);
outtextxy(200,80,"Fly the friendly skies");
settextstyle(5,0,3);
outtextxy(10,120,"1.Book Flights");
outtextxy(10,145,"2.Cancel Flights");
outtextxy(10,170,"3.Check Flights");
outtextxy(10,195,"4.Exit");
outtextxy(10,300,"Please enter your choice: ");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n  ";
cin >> ch;
switch(ch)
{
case 1:
clrscr();
cleardevice();
settextstyle(6,0,3);
outtextxy(10,100,"1.Domestic Flights");
outtextxy(10,130,"2.International Flights");
outtextxy(10,180,"Please enter your option");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
cin >> ch1;
switch(ch1)
{
case 1:
p1.d_pnr();
p1.p_detail(1);
p1.gender_check();
p1.more_details();
p2.pay_detail();
p1.disp();
createfile(p1);
break;
case 2:
p1.p_detail(2);
p1.i_pnr();
p1.gender_check();
p1.more_details();
p2.pay_detail();
p1.dispi();
createfilei(p1);
break;
default:
cout << "Wrong input entered\nTry again\n\n\n" << endl;
return main();
}
break;
case 2:

clrscr();
cleardevice();
settextstyle(6,0,3);
outtextxy(10,100,"1.Domestic Flights");
outtextxy(10,130,"2.International Flights");
outtextxy(10,180,"Please enter your option");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
cin >> ch1;
if(ch1==1)
{
cout << "\nPlease enter your PNR no.:" << endl;
cin>>n;
cancelticket(n);
delay(1000);
return 0;
}
else if(ch1==2)
{  cout << "\nPlease enter your PNR no.:" << endl;
cin>>n;
cancelticketi(n);
delay(1000);
return 0;
}
else
{
cout << "Wrong input entered\nTry again\n\n\n";
return main();
}
break;
case 3:
clrscr();
cleardevice();
settextstyle(6,0,3);
outtextxy(10,100,"1.Domestic Flights");
outtextxy(10,130,"2.International Flights");
outtextxy(10,180,"Please enter your option");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n ";
cin >> ch1;
if(ch1==1)
{
cout << "\nPlease enter your PNR no.:" << endl;
cin>>n;
checkticket(n);
delay(5000);
return 0;
}
else if(ch1==2)
{  cout << "\nPlease enter your PNR no.:" << endl;
cin>>n;
checkticketi(n);
delay(5000);
return 0;
}
else
{
cout << "Wrong input entered.\nTry again\n\n\n";
return main();
}
break;
case 4:
clrscr();


last();
return 0;
default:
cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
return main();
}
cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
cin >> input;
}while(input=='Y' || input=='y');
return 0;
}

