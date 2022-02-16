#include "../include/Location.h"
#include "../include/Metro.h"
#include "../include/Bus.h"
Location::Location(string arg_location_code,int arg_days)
{
    locationCode=arg_location_code;
    days=arg_days;
}

Location* Location::create_service(FrameType ftype,string arg_location_code,int arg_days)
{
    if(ftype==Metro)
    {
        return new MetroFrames(arg_location_code,arg_days);
    }
    else if(ftype==Bus)
    {
        return new BusFrames(arg_location_code,arg_days);
    }
    else
    {
        return NULL;
    }
}