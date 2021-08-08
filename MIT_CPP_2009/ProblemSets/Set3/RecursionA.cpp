#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
   int n;
   while(cin >> n)
   {
      cout << factorial(n) << endl;
   }
   return 0;
}

int factorial(int n)
{
   if(n == 0)return 1;
   return (n * factorial(n-1));
}
