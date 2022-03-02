#include<iostream.h>
#include<fstream.h>
#include<ctype.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<iomanip.h>

struct date
      {
       int dd,mm,yy;
      };

struct services
      {
       char hk,rs,sp,spa,gym,clubh,cr;
      };

char suitedetails()
    {
     char s;
     cout<<"A- Presidential Suite:----------"<<endl;
     cout<<"   * Cost per night: Dhs1000"<<endl;
     cout<<"   * Max Occupancy:  8"<<endl;
     cout<<"   * The Best of the Best- Enjoy the hotel best oceanside view."<<endl;
     cout<<"B- Regal Suite:-----------------"<<endl;
     cout<<"   * Cost per night: Dhs750"<<endl;
     cout<<"   * Max Occupancy:  6"<<endl;
     cout<<"   * Finished with a fully-equipped kitchen."<<endl;
     cout<<"C- Family 2-Bedroom Suite:------"<<endl;
     cout<<"   * Cost per night: Dhs500"<<endl;
     cout<<"   * Max Occupancy:  5"<<endl;
     cout<<"   * Ideal for big families."<<endl;
     cout<<"D- Single Suite:----------------"<<endl;
     cout<<"   * Cost per night: Dhs250"<<endl;
     cout<<"   * Max Occupancy:  2"<<endl;
     cout<<"   * Complete with king sized bed suitable for individuals."<<endl;
     cout<<endl;
     cout<<"Enter preferred suite: ";
     cin>>s;
     return s;
    }

class CUSTOMER
	{
	 public:
	 char suite[20],guname[40],gunat[30],ap;
	 services custom;
	 int tota,totc,rno,flno,ccn,pin,tno;
	 long contact;
	 date ci,co,pi;
	 float bill;
	 CUSTOMER()
	 {
	  strcpy(guname,"Anamika");
	  strcpy(gunat, "Unknown");
	  tota=totc=flno=ccn=pin=tno=bill=contact=0;
	  ci.dd=1;
	  pi.dd=27;
	  co.dd=15;
	  ci.mm=pi.mm=co.mm=1;
	  ci.yy=pi.yy=co.yy=2019;
	  custom.hk='n';
	  custom.rs='n';
	  custom.sp='n';
	  custom.spa='n';
	  custom.gym='n';
	  custom.cr='n';
	  custom.clubh='n';
	 }
	 void getdata();
	 void eshowdata();
	 void cshowdata();
	};

void CUSTOMER::getdata()
    {
     clrscr();
     cout<<"Booking:"<<endl;
     cout<<"---DATES---"<<endl;
     cout<<"Check-in: "<<endl;
     cout<<"dd: ";
     cin>>ci.dd;
     cout<<"mm: ";
     cin>>ci.mm;
     cout<<"yy: ";
     cin>>ci.yy;
     cout<<"Check-out: "<<endl;
     cout<<"dd: ";
     cin>>co.dd;
     cout<<"mm: ";
     cin>>co.mm;
     cout<<"yy: ";
     cin>>co.yy;
     cout<<"---TOTAL NUMBER OF---"<<endl;
     cout<<"Adults: ";
     cin>>tota;
     cout<<"Children (under 12): ";
     cin>>totc;
     cout<<"Rooms reqd: ";
     cin>>tno;
     cout<<"---SUITE SELECTION---"<<endl;
     for(int i=0;i<tno;i++)
     {
      cout<<"=> For ROOM #"<<i+1<<" :-"<<endl;
      suite[i]=suitedetails();
      toupper(suite[i]);
      cout<<endl;
     }
     cout<<"---GUEST INFO---"<<endl;
     cout<<"Name:  ";
     gets(guname);
     cout<<"Nationality: ";
     cin>>gunat;
     cout<<"Contact number: ";
     cin>>contact;
     cout<<"Airport pickup reqd? (additional Dhs50): ";
     cin>>ap;
     if(ap=='y'||ap=='Y')
	{ cout<<"Enter your airport details:-  ";
	  cout<<"Flight no: ";
	  cin>>flno;
	  cout<<"~~~Thank you for the details. We will confirm your pickup soon.~~~"<<endl;
	  cout<<endl;
	}
     cout<<"---PAYMENT INFO---"<<endl;
     cout<<"Credit Card No: ";
     cin>>ccn;
     cout<<"Expiry date: "<<endl;
     cout<<"dd: ";
     cin>>pi.dd;
     cout<<"mm: ";
     cin>>pi.mm;
     cout<<"yy: ";
     cin>>pi.yy;
     cout<<"Security pin: ";
     cin>>pin;
     cout<<"---BOOKING COMPLETE---";
     }

void CUSTOMER::eshowdata()
    {
     cout<<"Name: "<<guname<<endl;
     cout<<"Nationality: "<<gunat<<endl;
     cout<<"Contact: "<<contact<<endl;
     cout<<"Number of Rooms: "<<tno<<"      Adults: "<<tota<<"      Children: "<<totc<<endl;
     cout<<"Date of Check in: "<<ci.dd<<"/"<<ci.mm<<"/"<<ci.yy<<"       Check Out: "<<co.dd<<"/"<<co.mm<<"/"<<co.yy<<endl;
     cout<<"Services Requested: "<<endl;
     if(ap=='y')
	cout<<"  *  Airport Pickup Service"<<endl;
     if(custom.hk=='y')
	cout<<"  *  House-keeping "<<endl;
     if(custom.rs=='y')
	cout<<"  *  Restaurant"<<endl;
     if(custom.sp=='y')
	cout<<"  *  Swimming Pool"<<endl;
     if(custom.spa=='y')
	cout<<"  *  Spa"<<endl;
     if(custom.gym=='y')
	cout<<"  *  Gym"<<endl;
     if(custom.cr=='y')
	cout<<"  *  Conference Room"<<endl;
     if(custom.clubh=='y')
	cout<<"  *  Club House"<<endl;
    }

void CUSTOMER::cshowdata()
    {
     cout<<"Name: "<<guname<<endl;
     cout<<"Date of Check in: "<<ci.dd<<"/"<<ci.mm<<"/"<<ci.yy<<"       Check Out: "<<co.dd<<"/"<<co.mm<<"/"<<co.yy<<endl;
     cout<<"Room Number: "<<rno<<endl;
     cout<<"Services Requested: "<<endl;
     if(ap=='y')
	cout<<"  *  Airport Pickup Service"<<endl;
     if(custom.hk=='y')
	cout<<"  *  House-keeping "<<endl;
     if(custom.rs=='y')
	cout<<"  *  Restaurant"<<endl;
     if(custom.sp=='y')
	cout<<"  *  Swimming Pool"<<endl;
     if(custom.spa=='y')
	cout<<"  *  Spa"<<endl;
     if(custom.gym=='y')
	cout<<"  *  Gym"<<endl;
     if(custom.cr=='y')
	cout<<"  *  Conference Room"<<endl;
     if(custom.clubh=='y')
	cout<<"  *  Club House"<<endl;
    }

void map()
    {
     clrscr();
     cout<<"_______________________________________________________________"<<endl;
     cout<<"|        |            |                 |                      |"<<endl;
     cout<<"|        |            |                 |                      |"<<endl;
     cout<<"| SINGLE |   FAMILY   |      REGAL      |     PRESIDENTIAL     |"<<endl;
     cout<<"|        |            |                 |                      |"<<endl;
     cout<<"|________|____________|_________________|______________________|"<<endl;
     cout<<"|   R    |        |                          |                 |"<<endl;
     cout<<"|   E    |        |                          |     SWIMMING    |"<<endl;
     cout<<"|   S    |  SPA   |                          |       POOL      |"<<endl;
     cout<<"|   T    |   &    |                          |_________________|"<<endl;
     cout<<"|   A    |  GYM   |                          |                 |"<<endl;
     cout<<"|   U    |________|           LAWN           |                 |"<<endl;
     cout<<"|   R    |        |                          |    CONFERENCE   |"<<endl;
     cout<<"|   A    |  CLUB  |                          |       ROOM      |"<<endl;
     cout<<"|   N    |  HOUSE |                          |                 |"<<endl;
     cout<<"|   T    |        |                          |                 |"<<endl;
     cout<<"|________|________|__________________________|_________________|"<<endl;
     cout<<"|                 |  ______________________  |                 |"<<endl;
     cout<<"|                 | |                      | |      STAFF      |"<<endl;
     cout<<"|   RECEPTION     | |       ENTRANCE       | |     QUARTERS    |"<<endl;
     cout<<"|_________________|_|______________________|_|_________________|"<<endl;
    }

char homepage()
    {
     clrscr();
     char ch;
     cout<<endl;
     cout<<"                        WELCOME TO HOTEL PALM DUBAI"<<endl;
     cout<<"                  ~~~~Maximize the fun with Palm Dubai!~~~~"<<endl;
     cout<<endl;
     cout<<"Our Luxury Hotel includes:"<<endl;
     cout<<" * Family Friendly Facilities          * Fitness Centre & Health Club"<<endl;
     cout<<" * 4 Mega Luxury Suites                * 3000 sq metres Conference Room"<<endl;
     cout<<" * Swimming Pool With Rides            * Clubhouse with Sports Facilities"<<endl;
     cout<<" * High-end Restaurant Chain           * Award-winning Spa Resort"<<endl;
     cout<<endl;
     cout<<"Contact Us:-"<<endl;
     cout<<" * Tel: 04-6677880"<<endl;
     cout<<" * Email: palm_dubai@cpp.com"<<endl;
     cout<<" * Website: www.palmdubai.ae"<<endl;
     cout<<" * Headquarters: "<<endl;
     cout<<"    Jumeirah"<<endl;
     cout<<"    Saadiyat Island"<<endl;
     cout<<"    Dubai"<<endl;
     cout<<endl;
     cout<<"View Hotel Map and facilities (Y/N): ";
     cin>>ch;
     if(ch=='Y'||ch=='y')
       map();
     cout<<endl;
     cout<<"Impressed? BOOK NOW!! (Y/N): ";
     cin>>ch;
     return ch;
    }

void precreate()
    {
     fstream f;
     f.open("customer.dat",ios::out|ios::binary);
     f.close();
    }

int create()
    {
     static int k=100;
     fstream f;
     CUSTOMER c;
     c.getdata();
     c.rno=k;
     f.open("customer.dat", ios::app|ios::binary);
     f.write((char*)&c,sizeof(c));
     f.close();
     k++;
     return k-1;
    }

void edisplayall()
    {
     fstream fin("customer.dat",ios::in|ios::binary);
     CUSTOMER c;
     cout<<"---GUEST DETAILS---"<<endl;
     while(fin.read((char*)&c,sizeof(c)))
	  {
	   c.eshowdata();
	   cout<<"-------------------"<<endl;
	  }
     fin.close();
    }

void roomsearch()
    {
     CUSTOMER c;
     int room,pin,flag=0;
     fstream fin("customer.dat",ios::in|ios::binary);
     fin.seekg(0);
     cout<<"Enter the room number: ";
     cin>>room;
     cout<<"As a security check, please enter your security pin: ";
     cin>>pin;
     while(fin.read((char*)&c,sizeof(c)))
	  {
	   if(room==c.rno)
	     {
	      flag=1;
	      break;
	     }
	  }
     if(pin==c.pin)
      {
       if(flag==1)
	 {
	  cout<<"---GUEST DETAILS---"<<endl;
	  c.cshowdata();
	}
       else
	cout<<"Room not found"<<endl;
      }
     else
      cout<<"Incorrect pin. Access Denied."<<endl;
     fin.close();
    }

void servicesearch()
    {
     CUSTOMER c;
     int room,flag=0,ch,pin;
     char ch1,ch2;
     fstream fin("customer.dat", ios::in|ios::binary);
     fstream fout("temp.dat", ios::out|ios::binary);
     cout<<"-----WELCOME TO THE HOTEL HELPDESK!!-----"<<endl;
     cout<<"Enter your room number: ";
     cin>>room;
     cout<<"As a security check, please enter your security pin: ";
     cin>>pin;
     while(fin.read((char*)&c,sizeof(c)))
	  {
	   if(room==c.rno)
	     {
	      flag=1;
	      break;
	     }
	   else
	     fout.write((char*)&c,sizeof(c));
	  }
     if(flag==1)
       {
	if(pin==c.pin)
	  {
	   do
	    {
	     cout<<endl;
	     cout<<"The services we offer are: "<<endl;
	     cout<<"1. Housekeeping"<<endl;
	     cout<<"2. Swimmimg pool"<<endl;
	     cout<<"3. Restaurants"<<endl;
	     cout<<"4. Conference room"<<endl;
	     cout<<"5. Spa"<<endl;
	     cout<<"6. Gym"<<endl;
	     cout<<"7. Clubhouse"<<endl;
	     cout<<"Enter your request: ";
	     cin>>ch;
	     switch(ch)
		   {
			 case 1:c.custom.hk='y';
				break;
			 case 2:c.custom.sp='y';
				break;
			 case 3:c.custom.rs='y';
				break;
			 case 4:c.custom.cr='y';
				break;
			 case 5:c.custom.spa='y';
				break;
			 case 6:c.custom.gym='y';
				break;
			 case 7:c.custom.clubh='y';
				break;
			 default: cout<<"Invalid Choice";
		   }
	     cout<<"Do you want to request for another service?(Y/N): ";
	     cin>>ch1;
	    }while(ch1=='y'||ch1=='Y');
	    cout<<"View Hotel Map and facilities (Y/N): ";
	    cin>>ch2;
	    if(ch2=='Y'||ch2=='y')
	       map();
	  }
	else
	 cout<<"Incorrect pin. Access Denied."<<endl;
       }
     if(flag==0)
	cout<<"Room not found"<<endl;
     fout.write((char*)&c,sizeof(c));
     while(fin.read((char*)&c,sizeof(c)))
	  {
	   fout.write((char*)&c,sizeof(c));
	  }
     fin.close();
     fout.close();
     remove("customer.dat");
     rename("temp.dat","customer.dat");
    }

void calc_bill(int rno)
    {
     CUSTOMER c;
     int tot_no_of_days, x, flag=0;
     fstream fin("customer.dat",ios::in|ios::out|ios::binary);
     while(fin.read((char*)&c,sizeof(c)))
	  {
	   if(rno==c.rno)
	    {
	     flag=1;
	     break;
	    }
	  }
     if(flag==1)
      {
       c.bill=0;
       cout<<endl;
       cout<<"      PALM DUBAI HOTEL"<<endl;
       cout<<"       Tel:04-6677880 "<<endl;
       cout<<"________TAX INVOICE__________"<<endl;
       cout<<"  Room no:        "<<c.rno<<endl;
       cout<<"  Check-In:       "<<c.ci.dd<<"/"<<c.ci.mm<<"/"<<c.ci.yy<<endl;
       cout<<"  Check Out:      "<<c.co.dd<<"/"<<c.co.mm<<"/"<<c.co.yy<<endl;
       if(c.ci.mm==c.co.mm)
	  {
	   tot_no_of_days=c.co.dd-c.ci.dd+1;
	  }
       else
	 {
	  if(c.ci.mm==9||c.ci.mm==4||c.ci.mm==6||c.ci.mm==11)
	     x=30;
	  else if(c.ci.mm==2)
		  x=28;
	       else
		  x=31;
	  tot_no_of_days=c.co.dd+(x-c.ci.dd)+1;
	 }
       cout<<"  Tot no of days: "<<tot_no_of_days<<endl;
       cout<<endl;
       cout<<"SNO   SUITE   RATE    AMOUNT"<<endl;
       cout<<"____________________________"<<endl;
       for(int i=0;i<c.tno;i++)
	  {
	   switch(c.suite[i])
	     {
	      case 'A':c.bill+=1000;
		       c.bill=c.bill*tot_no_of_days;
		       cout<<" "<<i+1<<"      "<<c.suite[i]<<"     1000    "<<c.bill<<endl;
		       break;
	      case 'B':c.bill+=750;
		       c.bill=c.bill*tot_no_of_days;
		       cout<<" "<<i+1<<"      "<<c.suite[i]<<"     750     "<<c.bill<<endl;
		       break;
	      case 'C':c.bill+=500;
		       c.bill=c.bill*tot_no_of_days;
		       cout<<" "<<i+1<<"      "<<c.suite[i]<<"     500     "<<c.bill<<endl;
		       break;
	      case 'D':c.bill+=250;
		       c.bill=c.bill*tot_no_of_days;
		       cout<<" "<<i+1<<"      "<<c.suite[i]<<"     250     "<<c.bill<<endl;
		       break;
	     }
	  }
       cout<<"___________SERVICES__________"<<endl;
       if(c.ap=='y')
	 {
	  cout<<"* Airport Pickup Service - 50"<<endl;
	  c. bill+=50;
	 }
       if(c.custom.hk=='y')
	 {
	  cout<<"* House-keeping ---------- 50"<<endl;
	  c. bill+=50;
	 }
       if(c.custom.rs=='y')
	 {
	  cout<<"* Restaurant ------------ 100"<<endl;
	  c. bill+=100;
	 }
       if(c.custom.sp=='y')
	 {
	  cout<<"* Swimming Pool ---------- 50"<<endl;
	  c. bill+=50;
	 }
       if(c.custom.spa=='y')
	 {
	  cout<<"* Spa ------------------- 100"<<endl;
	  c. bill+=100;
	 }
       if(c.custom.gym=='y')
	 {
	  cout<<"* Gym -------------------- 50"<<endl;
	  c. bill+=50;
	 }
       if(c.custom.cr=='y')
	 {
	  cout<<"* Conference Room -------- 50"<<endl;
	  c. bill+=50;
	 }
       if(c.custom.clubh=='y')
	 {
	  cout<<"* Club House ------------- 50"<<endl;
	  c. bill+=50;
	 }
       cout<<"TOTAL BILL:           Dhs"<<c.bill<<endl;
       fin.write((char*)&c, sizeof(c));
      }
     fin.close();
    }

void updates(int rno)
    {
     int flag=0;
     CUSTOMER C;
     fstream fin, fout;
     fin.open("customer.dat",ios::in|ios::binary);
     fout.open("temp.dat",ios::out|ios::binary);
     while(fin.read((char*)&C,sizeof(C)))
	  {
	   if(C.rno==rno)
	     {
	      flag=1;
	      C.getdata();
	      C.rno=rno;
	      fout.write((char*)&C,sizeof(C));
	     }
	   else
	      fout.write((char*)&C,sizeof(C));
	  }
     fout.close();
     fin.close();
     remove("customer.dat");
     rename("temp.dat","customer.dat");
     if(flag==0)
       cout<<"Wrong Room No. entered."<<endl;
    }

void deletes(int rno)
    {
     CUSTOMER C;
     fstream fin, fout;
     fin.open("customer.dat",ios::in|ios::binary);
     fout.open("temp.dat",ios::out|ios::binary);
     while(fin.read((char*)&C,sizeof(C)))
	  {
	   if(C.rno==rno)
	     {
	      cout<<"Details of deletion:---------- "<<endl;
	      C.eshowdata();
	     }
	   else
	     fout.write((char*)&C,sizeof(C));
	  }
     fout.close();
     fin.close();
     remove("customer.dat");
     rename("temp.dat","customer.dat");
    }

void count()
    {
     fstream fin;
     fin.open("customer.dat",ios::in|ios::binary);
     CUSTOMER C;
     int count=0;
     cout<<"The occupied rooms are: ";
     while(fin.read((char*)&C,sizeof(C)))
	  {
	   cout<<C.rno<<"\t";
	   count++;
	  }
     cout<<endl;
     cout<<"The number of rooms occupied is "<<count<<" room(s)."<<endl;
     fin.close();
    }

void searchsuite(char s)
    {
     CUSTOMER C;
     int flag=0;
     fstream fin ("customer.dat",ios::in|ios::binary);
     while(fin.read((char*)&C,sizeof(C)))
	  {
	   for(int i=0;i<C.tno;i++)
	   if(C.suite[i]==s)
	      {
	       if(flag==0)
		  cout<<"---GUEST DETAILS---"<<endl;
	       C.eshowdata();
	       cout<<endl;
	       flag=1;
	      }
	  }
     if(flag==0)
       cout<<"Suite not occupied."<<endl;
     fin.close();
    }

void disp_roomservice( )
    {
     fstream fin;
     fin.open("customer.dat",ios::in|ios::binary);
     CUSTOMER C;
     int flag=0;
     while(fin.read((char*)&C,sizeof(C)))
	  {
	   if(C.custom.hk=='y')
	      {
	       if(flag==0)
		  cout<<"The rooms that have requested housekeeping are: ";
	       cout<<C.rno<<'\t';
	       flag=1;
	      }
	  }
     fin.close();
    }

void main()
    {
     clrscr();
     precreate();
     int ch, choice1,roomno;
     char identity,choice,choice2,choice3,choice4,choice5;
     char s;
     do
     {
      clrscr();
      cout<<"***********LOGIN PAGE**********"<<endl;
      cout<<"Choose identity:"<<endl;
      cout<<"Customer (C) or Employee (E) -  ";
      cin>>identity;
      //CUSTOMER
      if(identity=='C'||identity=='c')
	{
	  cout<<endl;
	  cout<<"How can we help you?"<<endl;
	  cout<<"  0-View Homepage."<<endl;
	  cout<<"  1-Existing Member"<<endl;
	  cout<<"  2-BOOK NOW!!"<<endl;
	  cout<<"Enter choice: ";
	  cin>>ch;
	  switch(ch)
	       {
		case 1:do
		       {
			cout<<endl;
			cout<<"1 -Search for a room."<<endl;
			cout<<"2 -Request for hotel service."<<endl;
			cout<<"3 -Calculate current bill."<<endl;
			cout<<"4 -Check out."<<endl;
			cout<<"Enter choice: ";
			cin>>choice1;
			switch(choice1)
			{
			  case 1:roomsearch();
				 break;
			  case 2:servicesearch();
				 break;
			  case 3:cout<<"Enter room no: ";
				 cin>>roomno;
				 calc_bill(roomno);
				 break;
			  case 4:cout<<"Enter room no: ";
				 cin>>roomno;
				 deletes(roomno);
				 break;
			  default: cout<<"Invalid choice";
			}
			cout<<endl;
			cout<<"Do you want to continue as existing member?(Y/N): ";
			cin>>choice2;
			}while(choice2=='y'||choice2=='y');
		       break;
		case 0:choice4=homepage();
		       if(choice4=='N'||choice4=='n')
			  break;
		case 2:roomno=create();
		       cout<<endl;
		       cout<<"Your room number is: "<<roomno<<endl;
		       cout<<"Do you wish to make any changes?(Y/N): ";
		       cin>>choice3;
			   if(choice3=='Y'||choice3=='y')
			     {
			      updates(roomno);
			     }
		       break;
		default:cout<<"Wrong option selected."<<endl;
	       }
	}
      //EMPLOYEE
      else if(identity=='E'||identity=='e')
	     {
	      do
	      {
	       cout<<endl;
	       cout<<"1 -Search for guests of certain suites."<<endl;
	       cout<<"2 -Count total number of rooms occupied and display occupied rooms."<<endl;
	       cout<<"3 -Delete certain room number."<<endl;
	       cout<<"4 -Display rooms that have requested housekeeping."<<endl;
	       cout<<"5 -Display details of all occupied rooms."<<endl;
	       cout<<"Enter choice: ";
	       cin>>ch;
	       cout<<endl;
	       switch(ch)
		    {
		     case 1:cout<<"Enter which suite to search for-"<<endl;
			    cout<<"A-Presidential"<<endl;
			    cout<<"B-Regal"<<endl;
			    cout<<"C-Family"<<endl;
			    cout<<"D-Single"<<endl;
			    cout<<"Enter option: ";
			    cin>>s;
			    toupper(s);
			    searchsuite(s);
			    break;
		     case 2:count();
			    break;
		     case 3:cout<<"Enter room no: ";
			    cin>>roomno;
			    deletes(roomno);
			    break;
		     case 4:disp_roomservice();
			    break;
		     case 5:edisplayall();
			    break;
		     default:cout<<"Wrong option selected."<<endl;
		    }
		cout<<"Do you want to continue as an employee?(Y/N): ";
		cin>>choice5;
	       }while(choice5=='y'||choice=='Y');
	     }
      cout<<endl;
      cout<<"Would you like to go back to login page?(Y/N): ";
      cin>>choice;
     }while(choice=='y'||choice=='Y');
     getch();
    }