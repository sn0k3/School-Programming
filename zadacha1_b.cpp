#include <iostream>
using namespace std;
 // б) на задача 1.
 // Напишете програма, която проверява дали дадено число е четно.
int main()
{
    int a;
    cin >> a;
    if(a%2 == 0)
    {
        cout << "Chisloto e chetno!" << endl;
    }
    else
    {
        cout << "Chisloto ne e chetno!" << endl;
    }

    return 0;
}
