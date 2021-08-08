#include <iostream>

using namespace std;

void Fibonacci_seq(int arr[], int n);

int main()
{
   int arr[20] = {0, 1};
   Fibonacci_seq(arr, 20);
   for(int i = 0; i < 20; i++)
      cout << arr[i] << " ";
   cout << endl;
   return 0;
}

void Fibonacci_seq(int arr[], int n)
{
   for(int i = 2; i < n; i++)
      arr[i] = arr[i-2] + arr[i-1];
}
