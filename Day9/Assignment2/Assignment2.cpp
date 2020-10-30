#include "shape.h"

void test1()
{
    circle x (10,10);
    triangle y (10, 6);
    std::cout << "area x = " << x.area() << std::endl;
    std::cout << "area y = " << y.area() << std::endl;
    std::cout << "x>y"<< std::endl;

    if (x>y)
    {
        std::cout << "Test1 Pass"<<std::endl;
    }
    else
    {
        std::cout<<"Test1 Fail"<<std::endl;
    }
    std::cout << std::endl;
}

void test2()
{
    circle x (0,10);
    triangle y(10, 6);
    std::cout << "area x = " << x.area() << std::endl;
    std::cout << "area y = " << y.area() << std::endl;
    std::cout << "x<y"<< std::endl;

    if (x<y)
    {
        std::cout << "Test2 Pass"<<std::endl;
    }
    else
    {
        std::cout<<"Test2 Fail"<<std::endl;
    }
    std::cout << std::endl;
}
void test3()
{
    circle x (20,20);
    triangle y(10, 6);
    std::cout << "area x = " << x.area() << std::endl;
    std::cout << "area y = " << y.area() << std::endl;
    std::cout << "x>y"<< std::endl;

    if (x>y)
    {
        std::cout << "Test3 Pass"<<std::endl;
    }
    else
    {
        std::cout<<"Test3 Fail"<<std::endl;
    }
    std::cout << std::endl;
}
void test4()
{
    circle x (99999,9999999);
    triangle y(999999, 999999);
    square z (999999, 99999);
    reqtangle a (99999, 999999);
    std::cout <<"Area overflow"<<std::endl;
    std::cout<< x.area()<<std::endl;
    std::cout<< y.area()<<std::endl;
    std::cout<< z.area()<<std::endl;
    std::cout<< a.area()<<std::endl;
    if ((x.area()<0 || y.area()<0 || z.area()<0 || a.area() <0))
    {
        std::cout << "Test3 fail"<<std::endl;
    }
    else
    {
        std::cout<<"Test3 pass"<<std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    test1();
    test2();
    test3();
    test4();


}