//* encapsulation means combining data (variables) and the functions that operate on that data inside a class, while restricting direct access to the data.

#include <iostream>
using namespace std;

class BankAccount
{
private:
  double balance; //* Hidden from outside the class

public:
  void setBalance(double amount)
  {
    if (amount >= 0)
    {
      balance = amount;
    }
  }

  double getBalance()
  {
    return balance;
  }
};

int main()
{
  BankAccount account;

  account.setBalance(5000);
  cout << account.getBalance();

  //! account.balance = 5000;  // Error: balance is private
}