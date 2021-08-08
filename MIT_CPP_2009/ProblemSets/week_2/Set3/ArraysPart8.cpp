#include <iostream>

using namespace std;

void sort_left(int arr[], const int n, const int fixed_pos);
void sort_right(int arr[], const int n, const int fixed_pos);
void swap(int arr[], int a, int b);

int main()
{
   int arr[10];
   int fixed_pos = 5;
   for(int i = 0; i < 10; i++)
      cin >> arr[i];

   sort_left(arr, 10, fixed_pos);
   sort_right(arr, 10, fixed_pos);

   for(int i = 0; i < 10; i++)
      cout << arr[i] << " ";
   cout << endl;

   return 0;
}

void sort_left(int arr[], const int n, const int fixed_pos)
{
   for(int i = 0; i < fixed_pos; i++)
   {
      for(int j = i; j < fixed_pos-1; j++)
      {
         if(arr[j] > arr[j+1])
         {
            swap(arr, j, j+1);
         }
      }
   }
}

void sort_right(int arr[], const int n, const int fixed_pos)
{
   for(int i = fixed_pos; i < n-1; i++)
   {
      for(int j = i; j < n-1; j++)
      {
         if(arr[j] < arr[j+1])
         {
            swap(arr, j, j+1);
         }
      }
   }
}

void swap(int arr[], int a, int b)
{
   int tmp = arr[a];
   arr[a] = arr[b];
   arr[b] = tmp;
}


