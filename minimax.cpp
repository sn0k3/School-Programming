#include <iostream>
using namespace std;
 // Страница 70 / задача Минимакс ( Протелен турнир, Ямбол 2003, зад D2)
int main()
{
    int minimalna_stoinost = 1;
    int maximalna_stoinost = 30000;
    int m;
    while(m > 0)
    {
        cin >> m;
        if(m>minimalna_stoinost)
        {
            maximalna_stoinost = m;
        }
        if(m<maximalna_stoinost)
        {
            minimalna_stoinost = m;
        }
    }
    cout << "Min: " << minimalna_stoinost << " Max:" << maximalna_stoinost << endl;
    return 0;
}
