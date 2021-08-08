#include <iostream>
#include <cctype>

using namespace std;

int add_lower_case(char arr[], const int arr_n, char arr2[], const int arr2_n);
void add_upper_case(char arr[], const int arr_n, char arr2[], const int arr2_n, int _i2);

int main()
{
   char arr[10];
   for(int i = 0; i < 10; i++)
      cin >> arr[i];
   cout << endl;
   char final_arr[10];
   int s = add_lower_case(arr, 10, final_arr, 10);
   add_upper_case(arr, 10, final_arr, 10, s);
   for(int i = 0; i < 10; i++)
      cout << final_arr[i] << " ";
   cout << endl;
   return 0;
}

int add_lower_case(char arr[], const int arr_n, char arr2[], const int arr2_n)
{
  int i1 = 0;
  int i2 = 0;
  while(i1 != arr_n)
  {
      if(islower(arr[i1]))
      {
         arr2[i2] = arr[i1];
         i2++;
      } 
      i1++;
 }
   return i2;
}

void add_upper_case(char arr[], const int arr_n, char arr2[], const int arr2_n, int _i2)
{
   int i1 = 0;
   int i2 = _i2;
   while(i1 != arr_n)
   {
      if(isupper(arr[i1]))
      {
         arr2[i2] = arr[i1];
         i2++;
      }
      i1++;
   }
}
