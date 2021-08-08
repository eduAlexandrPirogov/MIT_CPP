#include <iostream>

using namespace std;

void someFunction(int a, char b);
bool cmpAscending(int a, int b);
bool cmpDescending(int a, int b);

void ptr_sort(int arr[], const int n, bool(*comparator)(int, int));
void swap(int arr[], const int n, int a, int b);

void print_arr(int arr[], const int n);

int main()
{
   void (*functionPtr)( int, char) = &someFunction;
   functionPtr(1, 'b');

   bool (*asc_ptr)(int, int) = &cmpAscending;
   bool (*desc_ptr)(int, int) = &cmpDescending;
   
   int arr[] = {5, 6,2 ,7 ,14,2, 6,1, -1};
   ptr_sort(arr, 9, *asc_ptr);

   for(int i = 0; i < 9; i++)
      cout << arr[i] << " ";
   cout << endl;
   return 0;
}

void someFunction(int a, char b)
{
   cout << "SomeFunction" << endl;
}

bool cmpAscending(int a, int b)
{
   return a > b;
}

bool cmpDescending(int a, int b)
{
   return b > a;
}


void ptr_sort(int arr[], const int n, bool(*comparator)(int, int))
{
   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < n-i-1; j++)
      {
          if(comparator(arr[j], arr[j+1]))
          {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }
}


void print_arr(int arr[], const int n)
{
   for(int i = 0; i < n; i++)
      cout << arr[i] << " ";
   cout << endl;
}
