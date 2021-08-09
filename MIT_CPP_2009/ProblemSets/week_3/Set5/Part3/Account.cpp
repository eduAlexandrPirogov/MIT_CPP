#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

class Account;

void Account::Input()
{
   cout << "Input please an acc_number: ";
   cin >> acc_number;
   cout << "Input please a name:";
   cin >> name;
   cout << "Choose a type (\'S\' or \'C\'): ";
   cin >> type;
   cout << "Input please an balance: ";
   cin >> balance;
};

double Account::Deposit(double amount)
{
   return this->balance += amount;
};

double Account::withDraw(double amountToWithDraw)
{
   return this->balance - amountToWithDraw < 500 ? 0 : this->balance -= amountToWithDraw;
};

double Account::getBalance()
{
   return this->balance;
};

void Account::Output()
{
   cout << "Acc number: " << acc_number << endl;
   cout << "Name: " << name << endl;
   cout << "Type: " << type << endl;
   cout << "Balance: " << balance << endl;
};
