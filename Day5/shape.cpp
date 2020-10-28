#include "shape.h"
#include "functiontemplate.h"

shape::shape(int a, int b) { width=a; height=b;}
bool shape::operator== (shape &a)
{
    return this->area() == a.area() && this->perimeter() == a.perimeter();
}
bool shape::operator< (shape &a)
{
    return this->area() < a.area();
}

bool shape::operator> (shape &a)
{
    return this->area() > a.area();
}


int circle::area()
{
    return (width/2)*(width/2)*3;
}

int circle::perimeter()
{
    return 3*height;
}

int triangle::area()
{
    return width*height/2;
}

int triangle::perimeter()
{
    return width*3;
}

int reqtangle::area()
{
    return height*width;
}

int reqtangle::perimeter()
{
    return width*2+height*2;
}

int square::area()
{
    return height*width;
}

int square::perimeter()
{
    return width*4;
}