// 
// Created by sn0k3
//
#include <iostream>

using namespace std;

int main()
{
    int n;
    int i = 0;
    int ostatuk[30];
    cout << "Type a number, which you want to see in binary: " << endl;
    cin >> n;
    if(n == 0)
    {
        cout << "0";
    }
    else
    {
        while(n != 0)
        {
            ostatuk[i] = n%2;
            i++;
            n = n/2;
        }
        while(i > 0)
        {
            i--;
            cout << ostatuk[i];
        }
    }


    return 0;
}
