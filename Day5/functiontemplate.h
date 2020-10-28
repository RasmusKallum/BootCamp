

template <class A, class B>

void comp (A &x, B &y)
{
    if (x==y)
    {
        std::cout<<"equal"<<std::endl;
    }
    else if (x>y)
    {
        std::cout<<"bigger"<< std::endl;
    }
    else
    {
        std::cout<<"smaller"<< std::endl;
    }
    
}
