#ifndef ACC_H
#define ACC_H
#include <string>

class Account
{
   public:
      void Input();
      double Deposit(double amount);
      double withDraw(double amountToWithDraw);
      double getBalance();
      void Output();
   private:
      long acc_number;
      std::string name;
      char type;
      double balance;
};
#endif
