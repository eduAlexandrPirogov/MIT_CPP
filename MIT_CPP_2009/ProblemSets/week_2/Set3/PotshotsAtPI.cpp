#include <iostream>
#include <ctime>

using namespace std;

void EvaluatePI(int dartsInCircle);

int main()
{
   EvaluatePI(50000000);
   return 0;
};

void EvaluatePI(int throws)
{
   int r  =1;
   int d = 2*r;
   int square_area = d*d;
   int totalDartsInCircle = 0;
   for(int i = 0; i < throws; i++){
      double x = rand()/static_cast<double>(RAND_MAX);
      double y = rand()/static_cast<double>(RAND_MAX);
//      cout << x * x << " " << y * y << endl;
      if(x*x + y * y <= r*r)totalDartsInCircle++;
   
   }
  // cout << totalDartsInCircle << endl;

   double pi = double(totalDartsInCircle)/double(throws);
   cout << pi*4;
};
