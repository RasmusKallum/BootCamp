#include "record.h"
record::record()
{
    date=0;
    service="TBD";
    parts="TBD";
    payment.amount=0;
    payment.type=NA;
}


void record::setDate (int d)
{
    this->date=d;
}


void record::setService (std::string s)
{
    this->service=s;
}


void record::setParts (std::string p)
{
    this->parts=p;
}


void record::setPayment (int money, paymentmethod paytype)
{
    this->payment.amount=money;
    this->payment.type=paytype;
}


int record::getDate()
{
    return(this->date);
}


std::string record::getService()
{
    return(this->service);
}


std::string record::getParts()
{
    return(this->parts);
}


payment_S record::getPayment()
{
    return(this->payment);
}


void ServicePersonal::setName(std::string a)
{
    this->name=a;
}

void ServicePersonal::setCompanyID(int a)
{
    this->companyID=a;
}
