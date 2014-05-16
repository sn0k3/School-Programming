// Фактуриел - (с Рекурсия)
#include <iostream>
using namespace std;

long long fact(int n)
{
    if(n == 1) return 1;
    return n*fact(n-1);
}

int main()
{
     int userInput;
    cout << "Type value for !n: "  << endl;

    cin >> userInput;

    cout << fact(userInput);

    return 0;
}
