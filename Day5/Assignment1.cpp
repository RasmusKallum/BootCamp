#include "shape.h"
#include "functiontemplate.h"

int main()
{
    circle c(10, 10);
    triangle t(10, 10);
    square s(10, 10);
    reqtangle r(10, 10);

    comp(c, t);
    comp(t,s);
    comp(s,r);

}