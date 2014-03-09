#include <iostream>
using namespace std;
 // Въвежда се двуцифрено число и програмата извежда единиците и на десетиците му
int main()
{
    int chislo;

    cout << "Vuvedi chislo ot 10 do 99 " << endl;
    cin >> chislo;

    cout << "Edinicite my " << chislo%10 << endl;
    cout << "Desetticite my " << chislo/10 << endl;

    return 0;
}
