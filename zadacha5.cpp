#include <iostream>
using namespace std;
 // Дадено е число n, aко числото е нечетно и след удвояването
 // му не надминава 30 000, го удвоете
 // иначе го оставете без изменение
int main()
{
    int n;
    cin >> n;
    if(n%2 == 1 &&  (n*2) <= 30000)
    {
        cout << n*2 << endl;
    }
    else
    {
        cout << n << endl;
    }

  return 0;
}
