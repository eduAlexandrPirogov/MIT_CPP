#include <iostream>

using namespace std;

int main()
{
   double sum = 0.0;
   int n;
   cout << "Input n\n";
   cin >> n;
   for(int i = 0; i < n ;i++){
       double term = (1.0/(i*2.0+1.0));
       term *= term;
       if(i % 2 == 0) term *= -1.0;
       cout << term << endl; 
       sum += term;
   }
   cout << sum;
   return 0;
}
