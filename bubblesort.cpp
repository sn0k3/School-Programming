// Най-сетне..Успях да сортирам масив..
// чрез метода на мехурчето (bubblesort)
// ако 1 < 5 swap(1,5)
//  5<7 swap(5,7)
// 7<3 swap(7,3) 
// .....

#include <iostream>
using namespace std;

int main()
{
 int masiv[5] = {1, 5, 7, 3, 2}; // Масивът, който ще сортирам

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
