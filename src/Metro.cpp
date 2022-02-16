#include "../include/Metro.h"

MetroFrames::MetroFrames(string arg_location_code,int arg_days):Location(arg_location_code,arg_days)
{
    cout<<"Placing Your Order for Metro"<<endl;
    setPrice();
}

map<string,int> MetroFrames::MetroPrices=
{
    {"IM01",350},
    {"OM01",950},
    {"AP01",600}
};

void MetroFrames::setPrice()
{
    price_per_day=MetroPrices[locationCode];
}
void MetroFrames::calculateBill()
{
    if(days>=20)
    {
        cout<<"Bill amount: "<<price_per_day*days<<endl;
    }
    else
    {
        cout<<"Sorry,Minimum booking is 20 days for Metro"<<endl;
    }
}