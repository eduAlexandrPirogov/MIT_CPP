#include <iostream>

using namespace std;

double average(int arr[], const int n);

int main()
{
   int arr[10];
   for(int i = 0; i < 10; i++)
      cin >> arr[i];
   cout << average(arr, 10);
   return 0;
}

double average(int arr[], const int n)
{
   int sum = 0;
   for (int i = 0; i < n; i++)
   {
      sum += arr[i];
   }
   return sum/n;
}
