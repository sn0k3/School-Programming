#include <iostream>
using namespace std;
 // Да се намерят и отпечатат всички числа от 1 до 100, които се делят на 7

int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%7 == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
