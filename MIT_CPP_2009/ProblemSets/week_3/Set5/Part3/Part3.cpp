#include <iostream>
#include "Account.h"
using namespace std;

void new_accounts(Account acc1, Account acc2);


int main()
{
   Account acc;
   acc.Input();
   acc.Output();
   return 0;
};

void new_accounts(Account acc1, Account acc2)
{
  cout << "First acc: ";
  acc1.Input();
  cout << "Sec acc: ";
  acc2.Input();
}
