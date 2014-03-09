#include <iostream>
using namespace std;
 // Проста програмка, разменяща стойностите на две променливи
int main()
{
    int a,b,t;
    cin >> a;
    cin >> b;
    t = a;
    a = b;
    b = t;

    cout << a << " i " << b;
    return 0;
}
