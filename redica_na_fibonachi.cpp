#include <iostream>
using namespace std;
// Редицата на Фибоначи (1,1,2,3,5,8,13)
// До 1000

int main()
{
    int a,b;
    a = 1;
    b = 1;

    while(b<=1000)
    {
        int c = a+b;
        a = b;
        b = c;
        cout << c << endl;
    }

  return 0;
}
