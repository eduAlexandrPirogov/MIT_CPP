#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::init()
{
   int count;
   cout << "Input number of coords: " << endl;
   cin >> count;
   x = new double[count];
   y = new double[count];
   cout << "Input x & y coords: " << endl;
   for(int i = 0; i < count; i++)
   {
      cin >> x[i] >> y[i];
   }
}
