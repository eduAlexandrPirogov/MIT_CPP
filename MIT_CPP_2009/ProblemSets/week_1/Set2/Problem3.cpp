#include <iostream>

using namespace std;

int main()
{
   int sum = 0;
   for(int i = 0; i < 10; i++)
   {
      int user_int;
      cin >> user_int;
      if(user_int == 0)break;
      if(user_int == 1)continue;
      user_int *= -1;
      sum += user_int;
   }
   cout << sum;
   return 0;
}
