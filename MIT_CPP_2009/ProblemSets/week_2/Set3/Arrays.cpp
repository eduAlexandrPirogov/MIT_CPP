#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void check_array();

int main()
{
   char array[10];
   for(int i = 0; i < 10; i++)
   {
      cin >> array[i];
   }
   for(int i = 0; i < 10; i++)
   {
      isalnum(array[i]) != 0? cout << array[i] << " is num" << endl : cout <<array[i] << " is not num "<< endl;
   }
   return 0;
}
