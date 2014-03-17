#include <iostream>
#include <string>
// http://stackoverflow.com/questions/1085134/why-is-c-relatively-harder-to-use-bad-choice-for-a-beginner
// http://www.math.bas.bg/infos/files/2009-01-25-D1.pdf
using namespace std;

long long code(string s)
{
    long long c=0;
    for(int i=0, k=1;i<=s.size();i++, k*2)
    {
        c+=(s[i]-'a'+1)*k;
    }
    return c;
}

int main()
{
    string s;
    cin >> s;
    if(code(s)%2 == 0)
    {
        cout << "Yes" << code(s) << endl ;

    }
    else
    {
        cout << "No ";
        cout << code(s);
    }

    return 0;
}
