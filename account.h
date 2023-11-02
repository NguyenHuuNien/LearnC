#pragma once

#include "bits/stdc++.h"
#include "transaction.h"
using namespace std;

class Account {
public:
    int id;
    string accountHolder;
    double balance;
    vector<Transaction> transaction_history;

    Account(int number, string holder, double initialBalance);

    void deposit(double amount);
    void withdraw(double amount);
    void send(Account a, double amount);
    
    void displayBalance();
    void displayTransactionHistory();
};