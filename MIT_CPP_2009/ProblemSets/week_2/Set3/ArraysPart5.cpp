#include <iostream>

using namespace std;

void reverse(char arr[], const int n);
void swap(char arr[], int start, int end);
void print_array(char arr[], const int n);

int main()
{
   char arr[10];
   for(int i = 0; i < 10; i++)
      cin >> arr[i];
   reverse(arr, 10);
   print_array(arr, 10);
}

void reverse(char arr[], const int n)
{
  for(int i = 0; i < n/2; i++)
     swap(arr, i, n-i-1); 
}

void swap(char arr[], int start, int end)
{
   char tmp = arr[start];
   arr[start] = arr[end];
   arr[end] = tmp;
}

void print_array(char arr[], const int n)
{
   for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;
}
