#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
   Complex complex1;
   Complex complex2{2, 3.4};
   complex1.Output();
   complex2.Output();

   complex1.Add(complex2);
   complex1.Output();
   return 0;
};
