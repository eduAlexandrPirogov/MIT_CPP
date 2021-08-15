#include "Array.h"
#include <string>

using namespace std;

int main()
{
   int test[] = {1,2,3,4,5};
   myArray arr{test, 5};
   arr.print("\n");
   
   myArray arr2{arr, arr.getLength()};
   arr2.print("|");
   return 0;
};
