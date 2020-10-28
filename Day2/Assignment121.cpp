#include <iostream>
//#include <stlib.h>


int main()
{
    
    int UserValue;
    int** *a = new int** [8];
    for(int i=0; i<8; i++)
    {
        a[i] = new int* [9];
        for (int j=0; j<9; j++)
        {
            a[i][j] = new int [11];
        }
        
    }

    srand (time(NULL));
    std:: cout << "Select a number:";
    std:: cin >> UserValue;

    for(int i=0; i<11; i++)
    {
        for(int j=0; j<9; j++)
        {
            for(int k=0; k<8; k++)
            {
                a[k][j][i]=rand() % UserValue;
            }
        }

    }
    
    for (int x=0; x<11; ++x) 
    { 
        std:: cout <<"{";
        for (int y=0; y<9; ++y) 
        { 
            
            for (int z=0; z<8; ++z) 
            { 
                std:: cout << a[z][y][x];
                if (z<7)
                    std:: cout <<", ";
            } 
            if (y<8)
                std:: cout << std::endl;
        }
        std:: cout <<"}" << std::endl << std::endl;  
    }
}
