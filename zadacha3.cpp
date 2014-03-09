#include <iostream>
using namespace std;
 // Да се напише програма, която събира или изважда две числа.Въвежда се 'код' на операцията
 // 1 - събиране
 // 2 - изваждане
 // и след това се въвеждат числата.Накрая резултата се извежда на екрана
int main()
{
    int code;
    int chislo1, chislo2;

    cout << "Izberi operaciq 1[subirane] 2[izvajdane]" << endl;
    cin >> code;

    if(code == 1)
    {
        cout << "Vuvedi ednoto chislo ";
        cin >> chislo1;
        cout << "Vuvedi drygoto chislo ";
        cin >> chislo2;
        cout << "Sborut na chislata, koito vuvede e " << chislo1+chislo2 << endl;
    }
    else if(code == 2)
    {
        cout << "Vuvedi ednoto chislo ";
        cin >> chislo1;
        cout << "Vuvedi drygoto chislo ";
        cin >> chislo2;
        cout << "Razlikata na chislata, koito vuvede e " << chislo1-chislo2 << endl;
    }

    return 0;
}
