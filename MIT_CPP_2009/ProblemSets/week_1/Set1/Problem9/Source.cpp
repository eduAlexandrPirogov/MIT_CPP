#include <iostream>

using namespace std;


int main()
{
   const int NUMBER_OF_VARIABLES = 2;
   int x = 100;
   ++x;
   double remainder = NUMBER_OF_VARIABLES/x;
   remainder+=2;
   cout <<remainder;
   return 0;
}
