#include <iostream>

using namespace std;

class member
{
   int memberNum = 25;
   float memberPay;
   public:
      void Input();
      void Output();
};

void member::Output()
{
   cout << memberNum << " " << memberPay << endl;
};

void member::Input()
{
  cin >> memberNum >> memberPay;
};

int main()
{
   member mem;
   mem.Input();
   mem.Output();
   return 0;
};
