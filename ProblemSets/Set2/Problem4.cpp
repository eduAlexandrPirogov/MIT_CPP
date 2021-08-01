#include <iostream>
using namespace std;
int main()
{
   cout << "Input two variables: ";
   int first_int, sec_int;
   cin >> first_int >> sec_int;
   cout << "Choose option\n 1. Difference\n 2.Quotient\n3.Remainder";
   int option;
   cin >> option;
   switch(option)
   {
   case 1:
       cout << first_int - sec_int << endl;
      break;
   case 2:
      cout << first_int / sec_int << endl;
      break;
   case 3:
      cout << first_int % sec_int << endl;
      break;
   default:
      cout << "None option was choosen";
   }
   return 0;
}
