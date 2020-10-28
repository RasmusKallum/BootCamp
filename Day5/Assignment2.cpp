#include <iostream>
#include <map>

void printMap(std::map <int, int> M)
{
    std::multimap<int, int> MM;
    for(std::map<int, int>::iterator it = M.begin(); it != M.end(); it++)
    {
        MM.insert(std::make_pair(it->second, it->first));
    }
    for(std::multimap<int, int>::iterator it = MM.begin(); it != MM.end(); it++)
    std::cout<<it->first<<" :: "<<it->second<<std::endl;

}

int main()
{
    srand (time(NULL));
    std::map <int, int> mapofnumbers;

    for (int i=0;i<10000;i++)
    {
        int c=rand()%34;
        if (mapofnumbers.find(c)!= mapofnumbers.end())
        {
            mapofnumbers[c]++;
        }
        else
        {
            mapofnumbers.insert(std::make_pair(c, 1));
        }
    }
    printMap(mapofnumbers);

}
