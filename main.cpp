#include <bits/stdc++.h>

#include "account.h"
#include "transaction.h"
// g++ main.cpp lib/account.cpp lib/transaction.cpp -o a; ./a;
using namespace std;

int main()
{
    Account a(3, "F", 450.6), b(3, "AF", 435.6);
    a.displayBalance();
    a.deposit(33);
    a.withdraw(50);
    a.send(b,55);

    a.displayTransactionHistory();
    
    cout << endl;
}