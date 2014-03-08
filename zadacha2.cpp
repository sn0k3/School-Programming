#include <iostream>
using namespace std;
 // Ако а/б е възможно показва резултата, ако не извежда съобщение
int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    if(b != 0)
    {
        cout << a/b << endl;
    }
    else
    {
        cout << "Delene na 0."
    }
    return 0;
}
