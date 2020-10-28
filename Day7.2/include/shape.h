#include <iostream>

class shape
{
public:
    int width, height;
    shape(int a, int b);
    virtual int area()=0;
    virtual int perimeter()=0;
    bool operator== (shape &a);
    bool operator< (shape &a);
    bool operator> (shape &a);
//    virtual bool operator==()=0;
};

class circle: public shape
{
public:
    circle(int a, int b) : shape(a,b) {}
    int area();
    int perimeter();
};

class triangle: public shape
{
public:
    triangle(int a, int b) : shape(a,b) {}
    int area();
    int perimeter();
};

class reqtangle: public shape
{
public:
    reqtangle(int a, int b) : shape(a,b) {}
    int area();
    int perimeter();
};

class square: public shape
{
public:
    square(int a, int b) : shape(a,b) {}
    int area();
    int perimeter();
};
