#include <iostream>

using namespace std;

int main()
{
    int max=128, min=1;
    char y;
    cout << "think of a number between 1-128...is it greater than 64?" << endl << "y/n?" << endl;
    for(int i=0; i<6; i++)
    {
        for(;;)
        {
            cin >> y;
            if (y=='y')
            {
                min=(max-min)/2+min;
                break;
            }
            if (y=='n')
            {
                max=max - (max-min)/2;
                break;
            }
            cout << "wrong input, answer again";
        }
        if(i<5)
        {
            cout << "is it greater than " << min+(max-min)/2 << "?" << endl;
        }
    }
    cout << "Is the number " << min+(max-min)/2 << "?";   

}