#include <iostream>

int main()
{
    struct bitpattern {
        unsigned lightback:1;
        unsigned lightfrontleft:1;
        unsigned lightfrontright:1;
        unsigned doorbackleft:1;
        unsigned doorbackright:1;
        unsigned doorfrontright:1;
        unsigned doorfrontleft:1;
        unsigned windowbackleft:1;
        unsigned windowbackright:1;
        unsigned windowfrontleft:1;
        unsigned windowfrontright:1;
        unsigned seatbeltbackleft:1;
        unsigned seatbeltbackmiddle:1;
        unsigned seatbeltbacktright:1;
        unsigned seatbeltfrontleft:1;
        unsigned seatbeltfrontright:1;
    };
    
    union inputBits
    {
        uint16_t input;
        bitpattern bit;
    };
    

    inputBits a;
    a.input=0b1011101001011010;

    if (a.bit.seatbeltfrontright==1){
        std::cout<<"seatbelt front right attached"<<std::endl;
    } 
    else
    {
        std::cout<<"seatbelt front right not attached"<<std::endl;
    }
    if (a.bit.seatbeltfrontleft==1){
        std::cout<<"seatbelt front left attached"<<std::endl;
    } 
    else
    {
        std::cout<<"seatbelt front left not attached"<<std::endl;
    }
    if (a.bit.seatbeltbacktright==1){
        std::cout<<"seatbelt back right attached"<<std::endl;
    } 
    else
    {
        std::cout<<"seatbelt back right not attached"<<std::endl;
    }
    if (a.bit.seatbeltbackmiddle==1){
        std::cout<<"seatbelt back middle attached"<<std::endl;
    } 
    else
    {
        std::cout<<"seatbelt back middle not attached"<<std::endl;
    }
    if (a.bit.seatbeltbackleft==1){
        std::cout<<"seatbelt back left attached"<<std::endl;
    } 
    else
    {
        std::cout<<"seatbelt back left not attached"<<std::endl;
    }
    if (a.bit.windowfrontright==1){
        std::cout<<"window front right open"<<std::endl;
    } 
    else
    {
        std::cout<<"window front right closed"<<std::endl;
    }
    if (a.bit.windowfrontleft==1){
        std::cout<<"window front left open"<<std::endl;
    } 
    else
    {
        std::cout<<"window front left closed"<<std::endl;
    }
    if (a.bit.windowbackright==1){
        std::cout<<"window back right open"<<std::endl;
    } 
    else
    {
        std::cout<<"window back right closed"<<std::endl;
    }
    if (a.bit.windowbackleft==1){
        std::cout<<"widnow back left open"<<std::endl;
    } 
    else
    {
        std::cout<<"window back left closed"<<std::endl;
    }
    if (a.bit.doorfrontright==1){
        std::cout<<"door front right open"<<std::endl;
    } 
    else
    {
        std::cout<<"door front right closed"<<std::endl;
    }
    if (a.bit.doorfrontleft==1){
        std::cout<<"door front left open"<<std::endl;
    } 
    else
    {
        std::cout<<"door front left closed"<<std::endl;
    }
    if (a.bit.doorbackright==1){
        std::cout<<"door back right open"<<std::endl;
    } 
    else
    {
        std::cout<<"door back right closed"<<std::endl;
    }
    if (a.bit.doorbackleft==1){
        std::cout<<"door back left open"<<std::endl;
    } 
    else
    {
        std::cout<<"door back left closed"<<std::endl;
    }
    if (a.bit.lightfrontright==1){
        std::cout<<"lights front right on "<<std::endl;
    } 
    else
    {
        std::cout<<"lights front right off "<<std::endl;
    }
    if (a.bit.lightfrontleft==1){
        std::cout<<"lights front left on "<<std::endl;
    } 
    else
    {
        std::cout<<"lights front left off "<<std::endl;
    }
    if (a.bit.lightback==1){
        std::cout<<"lights back on "<<std::endl;
    } 
    else
    {
        std::cout<<"lights back off "<<std::endl;
    }
}