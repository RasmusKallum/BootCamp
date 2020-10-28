#include "record.h"
ServicePersonal::ServicePersonal(std::string a, int b)
{
    this->name=a;
    this->companyID=b;
}

void ServicePersonal::setName(std::string a)
{
    this->name=a;
}

void ServicePersonal::setCompanyID(int a)
{
    this->companyID=a;
}
