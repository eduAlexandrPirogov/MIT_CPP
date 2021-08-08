#include <iostream>

using namespace std;

int maximum(int a, int b);

int main()
{
   int a, b;
   cin >> a >> b;
   cout << maximum(a, b) << endl;
   return 0;
}

int maximum(int a, int b)
{
   return a > b ? a : b;
}
