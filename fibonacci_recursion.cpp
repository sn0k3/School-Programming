#include <iostream>
using namespace std;

long long fibonachi(int n)
{
    if(n <= 2)
        return 1;

   return fibonachi(n-1) + fibonachi(n-2);
}

int main()
{
    int number;
    cout << "Type a number: ";
    cin >> number;
    cout << fibonachi(number) << endl;
    return 0;
}
