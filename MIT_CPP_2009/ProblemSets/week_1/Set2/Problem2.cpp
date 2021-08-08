#include <iostream>

int main()
{
   int sum = 0;
   int i  = 0;
   do {
     sum += i;
     i++;
   }while ( i < 5);
   std::cout << sum << std::endl;
   return 0;
}
