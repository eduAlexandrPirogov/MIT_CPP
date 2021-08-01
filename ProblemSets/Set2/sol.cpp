#include <iostream>

// For the second possibility below:

#include <cmath>

using namespace std;

int main()

{

int n;

float sum = 0, denom = 1;

cout << "Enter the number of terms of the series:" << endl;

cin >> n;

for (int i = 1; i<=n; i++, denom += 2)

{

if( i % 2 == 0 )

sum += 1 / (denom * denom );

else

sum -= 1 / (denom * denom );

}

// or sum += pow(-1.0, i) * 1/( term * term)

// Also, instead of adding to denom each time, the denominator can be

// calculated as (2 * i – 1)

cout<<"The sum is:"<<sum<<endl;

return 0;

}
