#include <iostream>
#include <string>

using namespace std;


int main()
{
    int i, x;
    string key;
    for(;;)
    {
        cout << "Enter key (0-26):";
        cin >> x;
        if (x<27)
            break;
    }
    cout << "Enter Password:";
    cin >> key;
    i= key.length();
    for(int y=0; y<i; y++)
    {
        if ((key[y]-x)<65)
        {
            key[y]=key[y]-x + 26;
        }
        else
        {
            key[y]=key[y]-x;
        }
        
    }
    cout << key << endl;
}