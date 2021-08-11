#ifndef ACC_H
#define ACC_H
#include <string>

class Account
{
   public:
      void Input();
      double Deposit(double amount);
      double withDraw(double amountToWithDraw);
      void Output();
      void setAccNumber(long _acc_number);
      void setName(std::string _name);
      void setType(char _type);
      void setBalance(double _balance);
   
      long getAccNum();
      std::string getName();
      char getType(); 
      double getBalance();
   
   private:
      long acc_number;
      std::string name;
      char type;
      double balance;
};
#endif
