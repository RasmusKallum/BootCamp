#include "record.h"

void printrecord(record h)
{
    payment_S p;
    std::cout<< h.getDate()<< std::endl;
    std::cout<< h.getService()<< std::endl;
    std::cout<< h.getParts()<< std::endl;
    p=h.getPayment();
    std::cout<< p.amount << std::endl<< p.type << std::endl;
}

int main()
{
    record hej;
    //ServicePersonal a("Rasmus", 1337);
    printrecord(hej);
    hej.setDate(21102020);
    hej.setParts("tyres");
    hej.setService("standard");
    hej.setPayment(100, card);
    printrecord(hej);


}