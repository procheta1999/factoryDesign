#include "../include/Bus.h"

BusFrames::BusFrames(string arg_location_code,int arg_days):Location(arg_location_code,arg_days)
{
    cout<<"Placing Your Order for Bus"<<endl;
}

map<string,int> BusFrames::BusPrices=
{
    {"SB01",550},
    {"BB01",800}
};

void BusFrames::setPrice()
{
    price_per_day=BusPrices[locationCode];
}
void BusFrames::calculateBill()
{
    if(days>=15)
    {
        cout<<"Bill amount: "<<price_per_day*days<<endl;
    }
    else
    {
        cout<<"Sorry,Minimum booking is 15 days for Bus"<<endl;
    }
}