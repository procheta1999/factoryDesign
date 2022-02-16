#include <iostream>
#include "../include/client.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
	map<string,FrameType> LocationTypeMap=
{
    {"Metro",Metro},
    {"Bus",Bus}
};
	string locationType;
	FrameType ftype;
	string location_code;
	int days;
	cout<<"Where to put ad"<<endl;
	cin>>locationType;
	cout<<endl;
	cout<<"Location Code: "<<endl;
	cin>>location_code;
	cout<<endl;
	cout<<"Duration: "<<endl;
	cin>>days;
	cout<<endl;
	ftype=LocationTypeMap[locationType];
	Client pclient(ftype,location_code,days);
	Location *locationChosen=pclient.getLocation();
	locationChosen->calculateBill();
}