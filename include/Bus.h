#ifndef BUS
#define BUS
#include "../include/Location.h"
class BusFrames:public Location
{
    public:
        static map<string,int> BusPrices;
        BusFrames(string arg_location_code,int arg_days);
        void setPrice();
        void calculateBill();
};
#endif