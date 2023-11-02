#include "account.h"

Account::Account(int number, string holder, double initialBalance)
{
    this->id = number;
    this->accountHolder = holder;
    this->balance = initialBalance;
}

void Account::deposit(double amount)
{
    this->balance += amount;
    this->transaction_history.push_back(Transaction(rand(), "", amount, to_string(rand())));
}
void Account::withdraw(double amount)
{
    if (amount > this->balance)
    {
        cout << "Loi" << endl;
        return;
    }
    this->balance -= amount;
    this->transaction_history.push_back(Transaction(rand(), "", -amount, to_string(rand())));
}

void Account::send(Account a, double amount)
{
    if (amount > this->balance)
    {
        cout << "Loi" << endl;
        return;
    }
    withdraw(amount);
    a.deposit(amount);
    
}

void Account::displayBalance()
{
    cout << this->balance << endl;
}

void Account::displayTransactionHistory()
{
    for (Transaction a : transaction_history)
    {
        a.display();
        cout << endl;
    }
}