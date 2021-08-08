#include <iostream>

using namespace std;

int get_avg(int arr[], const int n);
void get_set_avg(int arr[][5], int arr2[], const int row);

int main()
{
   int studentGrades[6][5] = { {97, 75, 87, 56, 88}, {76, 84, 88, 59, 99},
                               {85, 86, 82, 81, 88}, {95, 92, 97, 97, 44},
			       {66, 74, 82, 60, 85}, {82, 73, 96, 32, 77} };
   int size = 6;
   int avg_arr[size];
   get_set_avg(studentGrades, avg_arr, 6);
   return 0;
}

int get_avg(int arr[], const int n)
{
   int summ = 0;
   for(int i = 0; i < n; i++)
   {
      summ+= arr[i];
   }
   return summ/n;
}

void get_set_avg(int studentGrades[][5], int arr2[], const int row)
{
   for(int i = 0; i < row; i++)
   {
      arr2[i] = get_avg(studentGrades[i], 5);
      cout << arr2[i] << " ";
   }
   cout << endl;
}
