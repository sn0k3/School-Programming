#include <iostream>
using namespace std;
// Да се изведът всички цели числа от N до 1, всяко на различен ред.

int main()
{
    int N;
    cin >> N;
    cout << endl;

    for(int i=N;i>=1;i--)
    {
        cout << i << endl;
    }

    return 0;
}
