#include <iostream>
using namespace std;
// Метод на мехурчето с масив с дължина 5, стойностите на който се въвеждат от потребителя
int main()
{
 int masiv[5];
for(int m=0;m<5;m++)
{
    cin >> masiv[m];
}

    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
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
