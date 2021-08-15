#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include <iostream>

using namespace std;

int main()
{
   Account acc{100};
   SavingsAccount save_acc{150};
   CheckingAccount check_Acc{200};
   acc.Credit(250);
   cout << "Account balance: " << acc.getBalance() << endl;

   save_acc.Credit(300);
   cout << "SavingsAccount balance: " << save_acc.getBalance() << endl;

   check_Acc.Credit(450);
   cout << "CheckingAccount Balance: " << check_Acc.getBalance() << endl;
   return 0;
};
