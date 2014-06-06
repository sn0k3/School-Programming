   #include <iostream>
   #include <stack>
   #include <string>

   using namespace std;

   int main()
   {
      stack<int> s;
      int n;

      cout << "Vuvedi chislo: ";
      cin >> n;

      while(n != 0)
      {
         s.push(n%2);
         n = n/2;
      }
        while(!s.empty())
        {
        cout << s.top();
         s.pop();
        }

      return 0;
   }
