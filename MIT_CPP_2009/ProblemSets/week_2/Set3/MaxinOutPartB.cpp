#include <iostream>
#include <climits>

using namespace std;

int maximum(int a, int b);

int maximum(int a, int b, int c);

int maximum(int a, int b, int c, int d);

int maximum(int *array, int n);

int main()
{
   cout << maximum(1,2,3,4)<<endl;
   cout << maximum(4,3,2,1)<<endl;
   cout << maximum(1,4,3,2)<<endl;
   cout << maximum(1,2,4,3) << endl;

   cout << "Input size of array\n";
   int n;
   cin >> n;
   int array[n];
   for(int i = 0; i < n; i++)
   {
      cin >> array[i];
      cout << i << endl;
   }  
   cout << maximum(array, n);
   return 0;
}

int maximum(int *array, int n)
{
   int max = *array;
   for(int i = 1; i < n; i++)
   {
      if(max < array[i])max = array[i];
   }
   return max;
}

int maximum(int a, int b)
{
   return a > b ? a : b;
}

int maximum(int a, int b, int c)
{
   
   return a > b ? (a > c ? a : c) : (b > c ? b : c);
}

int maximum(int a, int b, int c, int d)
{
  return a > b ? ( a > c ? (a > d ? a : d) : (c > d ? c : d)) 
         : (b > c ? (b > d  ? b : d) : (c > d ? c :d));
}
