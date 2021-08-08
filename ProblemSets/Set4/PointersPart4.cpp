#include <iostream>

using namespace std;

int main()
{
   char *oddOrEven = "Never odd or even";

   cout << "4th character: " << oddOrEven[3] << endl;
   char* nthCharPtr = &oddOrEven[3];
   cout << "nthCharPtr: " << *nthCharPtr << endl;
   for(int i = 0; i < 3; i++)
         nthCharPtr++;
   cout << "nthCharPtr after increment " << *nthCharPtr << endl;
   char *pointerPtr = nthCharPtr;
   cout << "pointerPTR : " << *pointerPtr << endl;
  
   nthCharPtr++;
   cout << "pointrPTR: " << *pointerPtr << endl;
   int i = 0;
   for(char *j = nthCharPtr; j != oddOrEven;j--)
   { 
      cout << *j << endl;
       i++;
   } 
   cout << "i: " << i << endl;
    return 0;
}
