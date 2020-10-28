#include <iostream>
#include <set>

int main()
{
    int a;
    std::set<int> x;
    srand (time(NULL));

    for (int i=0; i<1024; i++)
    {
        int c=rand()%10000;
        x.insert(c);
    }
    a=rand()%10000;
    std::set<int>::iterator low, high;
    high=x.upper_bound(a); 
    low=x.lower_bound(a);
    --low; 

    std::cout << "the lower bound points to: " << *low << '\n';
    
    std::cout << "the upper bound points to: " << *high << '\n';
    std::cout << "the value is: " << a << '\n';




}