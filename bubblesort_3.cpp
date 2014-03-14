// Метод на мехурчето, но потребителя въвежда с колко елемента да е масивът a[избрани от вас]
#include <iostream>
using namespace std;

int main()
{
 int duljina;
 cin >> duljina;
 int masiv[duljina];
for(int m=0;m<duljina;m++)
{
    cin >> masiv[m];
}

    for(int i=0;i<duljina;i++)
    {
        for(int j=i;j<duljina;j++)
        {
            if(masiv[i] < masiv[j])
            {
             swap(masiv[i], masiv[j]);
            }
        }

     cout << masiv[i] << endl;
    }

    return 0;
}
