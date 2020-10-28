#include <iostream>

enum paymentmethod {cash,card,NA};
struct payment_S {
    int amount;
    paymentmethod type; 
};

class ServicePersonal
{
    friend class record;
    //Attributes
private:
    std::string name;
    int companyID;

    //Methods

public:
    void setName(std::string a);
    void setCompanyID(int a);
};

class record
{
    friend class ServicePersonal;
    //Attributes
private:
    int date;
    std::string service;
    std::string parts;
    payment_S payment;
    ServicePersonal Cashier;

    //Methods
public:
    record();
    void setDate (int d);
    void setService (std::string s);
    void setParts (std::string p);
    void setPayment (int money, paymentmethod paytype);
    int getDate();
    std::string getService();
    std::string getParts();
    payment_S getPayment();
};


