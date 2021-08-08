#include <iostream>

using namespace std;

void remove_duplicates(char arr[], const int arr_n, char _char);
void check_duplicates(char arr[], const int arr_n);
int get_size(char arr[], const int arr_n);
void fin_arr (char arr[], const int arr_n, char arr2[], const int arr2_n);

int main()
{
   int arr_n = 20;
   char arr[arr_n];
   for(int i = 0; i < arr_n; i++)
   {
      cin >> arr[i];
   }
  
   check_duplicates(arr, arr_n);
   int s = get_size(arr, arr_n);
   char arr2[s];
   fin_arr(arr, arr_n, arr2, s);
   
   for(int i = 0; i < s; i++)
      cout << arr2[i] << " ";
   cout << endl;
   return 0;
}



void remove_duplicates(char arr[], const int arr_n, char _char)
{
   for(int i = 0; i < arr_n;i++)
   {
      if(arr[i] == _char)arr[i] = '0';
   }
}

void check_duplicates(char arr[], const int arr_n)
{
   int count;
   for(int i = 0; i < arr_n; i++)
   {
      char comparing_char = arr[i];
      count = 0;
      for(int j = 0; j < arr_n; j++)
      {
         if(arr[j] == comparing_char)
         {
            count++;
         }
      }
      if(count > 1)remove_duplicates(arr, arr_n, comparing_char);
      count = 0;
   }
}

int get_size(char arr[], const int arr_n)
{
   int size = 0;
   for(int i = 0; i < arr_n; i++)
   {
      if(arr[i] != '0')size++;
   }
   return size;
}

void fin_arr(char arr[], const int arr_n, char arr2[], const int arr2_n)
{
   int count = 0;
   for(int i = 0; i < arr_n; i++)
   {
      if(arr[i] != '0')
      {
         arr2[count] = arr[i];
         count++;
         if(count == arr2_n)return;
      }
   }
}
