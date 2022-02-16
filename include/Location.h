#ifndef LOCATION
#define LOCATION
#include "../include/frames.h"

class Location
{
    protected:
       string locationCode;
       int price_per_day;
       int days;
    public:
       Location(string arg_location_code,int arg_days);
       static Location* create_service(FrameType ftype,string arg_location_code,int arg_days);
       virtual void setPrice()=0;
       virtual void calculateBill()=0;   
};

#endif