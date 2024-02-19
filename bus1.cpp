#include<stdio.h>
#include<iostream>
#include<windows.h>
using namespace std;
static int p=0;
class a{
	char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
	public:
		void install();
		void allotment();
		void show();
		void empty();
		void avail();
		void position();
		
	
	
}
bus[10];
void vline(char ch)

{

  for (int i=80;i>0;i--)

  cout<<ch;

}

void a::install(){
	cout<<"the bus no is: ";
	cin>>bus[p].busn;
	cout<<"\nEnter Driver's name: ";

  cin>>bus[p].driver;

  cout<<"\nArrival time: ";

  cin>>bus[p].arrival;

  cout<<"\nDeparture: ";

  cin>>bus[p].depart;

  cout<<"\nFrom: \t\t\t";

  cin>>bus[p].from;

  cout<<"\nTo: \t\t\t";

  cin>>bus[p].to;

  bus[p].empty();

  p++;
}
void a::allotment(){
	int seat;
	char number[5];
	int n;
	top:
		
	cout<<"enter the bus no: ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
	
		
		if(strcmp(bus[n].busn,number)==0)
		break;
		
	}
	while(n<=p)
	{
		cout<<"enter the seat number: ";
		cin>>seat;
		if(seat>32)
		{
			cout<<"there are only 32 seats available in the bus\n";
			
		}
		else
		{
			if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"empty")==0)
			{
				cout<<"enter the passengers name: ";
				cin>>bus[n].seat[seat/4][(seat%4)-1];
				break;
			}
			else
			cout<<"the seat is already reserved.";
		}
	}
	if(n>p)
	{
		cout<<"enter the correct bus no.\n";
		goto top;
	}
	
				
			
		}
void a::empty(){
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<4;j++)
		{
			strcmp(bus[p].seat[i][j],"empty");
		}
	}
}
void a::show()
{
	int n;
	char number[5];
	cout<<"enter the bus no.: ";
	cin>>number;
	for(n=0;n<=p;n++)
	{
		if(strcmp(bus[n].busn,number)==0)
		break;
	}
	while(n<=p)
	{
		 vline('*');

  cout<<"Bus no: \t"<<bus[n].busn

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
void a::position(int l)

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

  cout<<"\n\nThere are "<<p<<" seats empty in Bus No: "<<bus[l].busn;

  }

void a::avail()

{


  for(int n=0;n<p;n++)

  {

    vline('*');

    cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver

    <<"\t\tArrival time: \t"<<bus[n].arrival<<"\tDeparture Time: \t"

    <<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"

    <<bus[n].to<<"\n";

    vline('*');

    vline('_');

  }

}

int main()

{

system("cls");

int w;

while(1)

{

    //system("cls");

  cout<<"\n\n\n\n\n";

  cout<<"\t\t\t1.Install\n\t\t\t"

  <<"2.Reservation\n\t\t\t"

  <<"3.Show\n\t\t\t"

  <<"4.Buses Available. \n\t\t\t"

  <<"5.Exit";

  cout<<"\n\t\t\tEnter your choice:-> ";

  cin>>w;

  switch(w)

  {

    case 1:  bus[p].install();

      break;

    case 2:  bus[p].allotment();

      break;

    case 3:  bus[0].show();

      break;

    case 4:  bus[0].avail();

      break;

    case 5:  exit(0);

  }

}

return 0;

}
}
	}
	
}
