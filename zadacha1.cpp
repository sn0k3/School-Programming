#include <iostream>
using namespace std;
 // Да се напише програма, която проверява дали дадено число е отрицателно
int main()
{
    int chislo;
    cin >> chislo;
    if(chislo < 0)
    {
        cout << "Chisloto e otricatelno!" << endl;
    }
    else
    {
        cout << "Chisloto e polojitelno!" << endl;
    }
    return 0;
}
