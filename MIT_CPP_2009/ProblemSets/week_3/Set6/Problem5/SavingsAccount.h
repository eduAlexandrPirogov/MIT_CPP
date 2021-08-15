#ifndef savAcc_h
#define savAcc_h
#include "Account.h"
#include <cmath>

class SavingsAccount : public Account
{
   public:
      SavingsAccount(double init_balance, double interestRate);
      double calculateInterest(int yearsGoneBy);
   private:
      double interestRate;
};

SavingsAccount::SavingsAccount(double init_balance, double interestRate) : Account(init_balance)
{
   this->interestRate = interestRate;
};

double SavingsAccount::calculateInterest(int yearsGoneBy)
{
  return  balance * pow(1+interestRate, yearsGoneBy);
};
#endif
