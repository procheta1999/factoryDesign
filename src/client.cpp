#include "../include/client.h"

Client::Client(FrameType ftype,string arg_location_code,int arg_days)
{
    loc=Location::create_service(ftype,arg_location_code,arg_days);
}

Location* Client::getLocation()
{
    return loc;
}