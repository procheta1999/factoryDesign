#ifndef METRO
#define METRO
#include "../include/Location.h"
class MetroFrames:public Location
{
    public:
        static map<string,int> MetroPrices;
        MetroFrames(string arg_location_code,int arg_days);
        void setPrice();
        void calculateBill();
};
#endif