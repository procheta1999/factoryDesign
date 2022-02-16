#ifndef CLIENT
#define CLIENT
#include "../include/Location.h"
#include "../include/Metro.h"
#include "../include/Bus.h"
class Client
{
    private:
       Location *loc;
    public:
       Client(FrameType ftype,string arg_location_code,int arg_days);
       Location* getLocation();

};
#endif