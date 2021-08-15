#ifndef acc_h
#define acc_h
#include <iostream>

using namespace std;

class Account
{
   public:
      Account(double init_balance);
      void Credit(double amount);
      bool Debit(double amount);
      double getBalance();
   protected:
      double balance;
};

Account::Account(double init_balance)
{
   init_balance <  0 ? balance = 0.0 : balance = init_balance;
};

void Account::Credit(double amount)
{
   balance += amount;
};

bool Account::Debit(double amount)
{
   if(amount > balance)
   {
      cout << "You can't withdraw more money than you have!\n";
      return false;
   } else {
      balance -= amount;
   }
   return true;
};

double Account::getBalance()
{
   return balance;
};

#endif
