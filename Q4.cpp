#include <iostream>

using namespace std;

int main()

{
	char vehicle;
	int days;
	int mpd=10;
	int cpd=20;
	int bpd=30;
	cout<<"Enter vehicle type";
	cin>>vehicle;
	if(vehicle=='M'){cout<<"Enter numberof days";
	cin>>days;
	cout<<"Parking Price is "<<days*mpd;
	}else if(vehicle=='C'){cout<<"Enter numberof days";
	cin>>days;
	cout<<"Parking Price is "<<days*cpd;
	}else if(vehicle=='B'){cout<<"Enter numberof days";
	cin>>days;
	cout<<"Parking Price is "<<days*bpd;
	} else
	cout<<"Invalid choice";
}
