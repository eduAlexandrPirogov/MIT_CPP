#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int x, n;
   cin >> x >> n;
   int sum = 0;
   for(int i = 0; i < n; i++)
   {  
      int k = x;
      for(int j = 1; j <= i; j++)
      {
         k += pow(x, j+1);
         cout << "k = " << k << endl;
      }
     sum += k;
     cout << sum << endl; 
   }
   cout << sum;
   return 0;
}
