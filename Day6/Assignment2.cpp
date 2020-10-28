#include <iostream>
#include <bitset>

bool crashDetection(uint16_t &S, uint16_t &FD, uint16_t &RD, uint16_t &RiD, uint16_t &LD)
{
    bool retval=false;
    if (S>0 && (FD==0 || RD==0 || RiD==0 || LD==0))
    {
        retval=true;
    }
    return retval;
}

int main()
{
    uint16_t Output=0;

    uint16_t Speed=400;
    uint16_t FrontDistance=10000;
    uint16_t RearDistance=300;
    uint16_t RightDistance=800;
    uint16_t LeftDistance=700;

    if (crashDetection(Speed, FrontDistance, RearDistance, RightDistance, LeftDistance))
    {
        std::cout<<"CRASH"<<std::endl;
    }
    else  
    {
        uint16_t *Val=new uint16_t;  
        *Val=Speed/20;
        if (*Val>15){*Val=15;}
        Output|=(0b0000000000001111 & *Val)<<12;
        *Val=FrontDistance/150;
        if (*Val>7){*Val=7;}
        Output|=(0b0000000000000111 & *Val)<<9;
        *Val=RearDistance/150;
        if (*Val>7){*Val=7;}
        Output|=(0b0000000000000111 & *Val)<<6;
        *Val=RightDistance/150;
        if (*Val>7){*Val=7;}
        Output|=(0b0000000000000111 & *Val)<<3;
        *Val=LeftDistance/150;
        if (*Val>7){*Val=7;}
        Output|=(0b0000000000000111 & *Val);

        delete Val;
    }
    


    std::cout<<std::bitset<16>(Output)<< std::endl;





}