#include <iostream>
// ot 10tichna v dvoichna
// dec2bin.cpp
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=0;
    int a[i];

    while(n != 0)
    {
        a[i++] = n%2;
        n = n/2;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout << a[j];
    }

    return 0;
}
