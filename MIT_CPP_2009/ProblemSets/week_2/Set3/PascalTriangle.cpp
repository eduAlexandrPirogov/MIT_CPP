
#include <iostream>

using namespace std;

void print_pascal_triangle(int n);
int pascal_get_i(int n, int i);
int factorial(int n);

int main()
{
   int n;
   int i;
   cin >> n;
   print_pascal_triangle(n);
   return 0;
}

int factorial(int n)
{
   if(n <= 0)return 1;
   return (n * factorial(n-1));
}

int pascal_get_i(int n, int i)
{
  int numenator = factorial(n);
  int denominator = factorial(n-i)*factorial(i);
  return numenator/denominator;
}

void print_pascal_triangle(int n)
{
     for (int i = 0; i <= n; i++)
         cout << pascal_get_i(n, i) << " ";
}
