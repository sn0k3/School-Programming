#include <iostream>
#include <iomanip>
using namespace std;
 // Таблицата за умножение, написана чрез цикъл
int main()
{
    int i=1;
    for(i;i<11;i++)
    {
        for(int j=1;j<11;j++)
        {
            cout << setw(8) << i*j;
        }
    }
    return 0;
}
