#include "shape.h"

int main()
{
    circle c(10, 10);
    triangle t(10, 10);
    square s(10, 10);
    reqtangle r(10, 10);

    if (t==s)
    {
        std::cout << "equal" << std::endl;
    }
    else
    {
        std::cout << "not equal" << std::endl;
        if (t<s)
        {
            std::cout << "smaller" << std::endl;
        }
        else
        {
            std::cout << "bigger" << std::endl;
        }
    }

}
