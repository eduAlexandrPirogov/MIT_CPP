#include <iostream>

using namespace std;

int main()
{
   cout << "How many lines you want to print?\n";
   int n;
   cin >> n;

   cout << "What's number you want to start?\n";
   int number;
   cin >> number;

   for(int lines = 1; lines <= n; lines++)
   {
      for(int i = 0; i < lines; i++)
      {
         cout << number - i << " ";
      }
      cout << endl;
   }
   return 0;
}
