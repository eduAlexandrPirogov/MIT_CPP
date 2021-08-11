#include <iostream>
#include "Account.h"
using namespace std;

void new_accounts(Account &acc1, Account acc2);
Account isGreater(Account &acc1, Account &acc2);

int main()
{
   Account acc;
   Account acc2;
   new_accounts(acc, acc2);
   acc.Output();
   acc2.Output(); 

   Account test_acc = isGreater(acc, acc2);
   test_acc.setBalance(500);
   cout << "Acc Balance after test.setBalance(): " << acc.getBalance() << endl;
   test_acc.Deposit(500);
   cout << endl;
   cout << "Test_acc Output() " << endl;
   test_acc.Output();
   cout << endl;

   cout << "Acc Output() " << endl;
   acc.Output();
   cout << endl;

   cout << "Acc balance after test.Deposit(500): " << acc.getBalance() << endl;
   return 0;
};

void new_accounts(Account &acc1, Account acc2)
{
 // string name;
  cout << "First acc name: ";
  acc1.Input();
  cout << endl;
 // acc1.setName(name);
  cout << "Sec acc name: ";
  acc2.Input();
  cout << endl;
 // acc2.setName(name);
}

Account isGreater(Account &acc1, Account &acc2)
{
  return acc1.getBalance() > acc2.getBalance() ?  acc1 : acc2;
}
