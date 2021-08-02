#include <iostream>

using namespace std;

template<class T>
T maximum(T *array,int n);

int main()
{
   char char_arr[] = {'a', 'b', 'c', 'd', 'e'};
   int int_arr[] = {1, 2, 3, 4, 5};
   double double_arr[] = {1.2 ,3.3, 5.4, 2.3, 6.3};
   cout << maximum(char_arr, 5) << endl;
   cout << maximum(int_arr, 5) << endl;
   cout << maximum(double_arr, 5) << endl;
   return 0;
};

template<class T>
T maximum(T *array, int n)
{
   T max = *array;
   for(int i = 0; i < n; i++)
   {
      if(max < array[i])max = array[i];
   }
   return max;
};
