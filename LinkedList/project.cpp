#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
static int p = 0;

class BusReservation
{
 char busnumber[10], driver[10], arrival[5], depart[5], from[10], to[10], seat[8][4][10];
	  public:
		void install();
		void seatAllotment();
		void empty();
		void show();
		void busAvail();
		void position(int i);
}
bus[10];
void vline(char ch)
{
	for (int i=80;i>0;i--)
	{
	cout<<ch;	
	}
}
void BusReservation::install()
{
	cout<<"Enter Bus No: ";
	cin>>bus[p].busnumber;
	cout<<"\nEnter Driver's Name: ";
	cin>>bus[p].driver;
	cout<<"\nArrival Time: ";
	cin>>bus[p].arrival;
	cout<<"\nDeparture Time: ";
	cin>>bus[p].depart;
	cout<<"\nFrom: \t\t\t";
	cin>>bus[p].from;
	cout<<"\nTo: \t\t\t";
	cin>>bus[p].to;
	bus[p].empty();
	p++;
}
void BusReservation::seatAllotment()
{
	int seat;
	char number[5];
	top:
	cout<<"Bus no: ";
	cin>>number;
	int n;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n].busnumber, number)==0)
		break;
	}
	while(n<=p)
	{
		cout<<"\nSeat Number: ";
		cin>>seat;
		if(seat>32)
		{
			cout<<"\nThere are only 32 seats available in this bus.";
		}
		else
		{
		if (strcmp(bus[n].seat[seat/4][(seat%4)-1], "Empty")==0)
			{
				cout<<"Enter passanger's name: ";
				cin>>bus[n].seat[seat/4][(seat%4)-1];
				break;
			}
		else
			cout<<"The seat no. is already reserved.\n";
			}
			}
		if(n>p)
		{
			cout<<"Enter correct bus no.\n";
			goto top;
		}
	}

void BusReservation::empty()
{
	for(int i=0; i<8;i++)
	{
		for(int j=0;j<4;j++)
		{
			strcpy(bus[p].seat[i][j], "Empty");
		}
	}
}
void BusReservation::show()
{
	int n;
	char number[5];
	cout<<"Enter bus no: ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n].busnumber, number)==0)
		break;
	}
while(n<=p)
{
	vline('*');
	cout<<"\nBus no: \t"<<bus[n].busnumber
	<<"\nDriver: \t"<<bus[n].driver<<"\t\tArrival time: \t"
	<<bus[n].arrival<<"\tDeparture time:"<<bus[n].depart
	<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t"<<
	bus[n].to<<"\n";
	vline('*');
	bus[0].position(n);
	int a=1;
	for (int i=0; i<8; i++)
	{
		for(int j=0;j<4;j++)
		{
			a++;
			if(strcmp(bus[n].seat[i][j],"Empty")!=0)
			cout<<"\nThe seat no "<<(a-1)<<" is reserved for "<<bus[n].seat[i][j]<<".";
		}
	}
	break;
	}
	if(n>p)
		cout<<"Enter correct bus no: ";
}
void BusReservation::position(int l)
{
	int s=0;p=0;
	for (int i =0; i<8;i++)
	{
		cout<<"\n";
		for (int j = 0;j<4; j++)
		{
			s++;
			if(strcmp(bus[l].seat[i][j], "Empty")==0)
				{
					cout.width(5);
					cout.fill(' ');
					cout<<s<<".";
					cout.width(10);
					cout.fill(' ');
					cout<<bus[l].seat[i][j];
					p++;
				}
				else
				{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[l].seat[i][j];
				}
			}
		}
	cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busnumber;
	}
void BusReservation::busAvail()
{

	for(int n=0;n<p;n++)
	{
		vline('-');
		cout<<"\nBus no: \t"<<bus[n].busnumber<<"\nDriver: \t"<<bus[n].driver
		<<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"
		<<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"
		<<bus[n].to<<"\n";
		vline('-');cout<<"\n";
		
	}
}
int main()
{
int ch;
while(1)
{
	cout<<"\n\n\n\n\n";
	cout<<"\n\n\nMode By Prashant jha\n\n";
	cout<<"\t\t\t1.Install\n\t\t\t"
	<<"2.Reservation\n\t\t\t"
	<<"3.Show\n\t\t\t"
	<<"4.Buses Available \n\t\t\t"
	<<"5.Exit";
	cout<<"\n\t\t\tEnter your choice:-> ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			cout<<"\n\n\n";
			bus[p].install();
			break;
		case 2: 
			cout<<"\n\n\n";
			bus[p].seatAllotment();
			break;
		case 3: 
			cout<<"\n\n\n";
			bus[0].show();
			break;
		case 4: 
			cout<<"\n\n\n";
			bus[0].busAvail();
			break;
		case 5:	exit(0);
	}
}
}