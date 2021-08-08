#include <iostream>

using namespace std;

int main()
{
   bool input;
   int a;
   cin >> input >> a;
   char *choice = ( input ? "Hello World!" : "I love C++!");
   if ( (input ? a > 1 : a < 1) ) {
      cout << "Why did you pick \"" << choice << "\"?" << endl;
   } else {
      cout << "Yay, you picked " << choice;
   }
return 0;
}
