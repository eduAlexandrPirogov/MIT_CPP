#ifndef checkAcc_h
#define checkAcc_h
#include "Account.h"

class CheckingAccount : public Account
{
   public:
      CheckingAccount(double init_fee, double init_balance);
      void Credit(double amount);
      bool Debit(double amount);
   protected:
      double fee;
};

CheckingAccount::CheckingAccount(double init_fee, double init_balance) : Account(init_balance)
{
  init_fee < 0 ? fee = 0 : fee = init_fee;
};

void CheckingAccount::Credit(double amount)
{
   Account::Credit(amount);
   Account::Debit(amount * 0.05); 
};

bool CheckingAccount::Debit(double amount)
{
   if(Account::Debit(amount))
      if(Account::Debit(amount * 0.05))
         return true;
   return true;
};


#endif
