#include <iostream>
#include <cmath>
#include <string>

int main()
{
   std::string number;
   std::cin >> number;
   int sum = 0;
   bool isAstro = false;
   char current = number[0];
   for(int i = 0; current != '\0'; current = number[++i])
   {
      int term = current-'0';
      sum += pow(term, 3);
      std::cout << sum << std::endl;         
   }
  std::to_string( sum) == number ? std::cout << "is Astro" : std::cout << "not Astro";
   return 0;
}
