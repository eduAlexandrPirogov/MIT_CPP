#include <iostream>
#include <ctime>
using namespace std;

int randomInRange(int min, int max);
double randomInRange(double min, double max);

int main()
{
   srand(time(0));
   cout << randomInRange(1, 10) << endl;
   cout << randomInRange(1.0, 10.0) << endl;
   return 0;
};

int randomInRange(int min, int max)
{
//  int range = max - min + 1;
  return rand()%max+min;
}

double randomInRange(double min, double max)
{
   double ran = rand()/static_cast<double>(RAND_MAX);
   return ran * max + min;
}
