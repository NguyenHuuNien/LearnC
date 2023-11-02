#pragma once

#include "bits/stdc++.h"
using namespace std;

class Transaction {
public:
    int transaction;
    string description, date;
    double amount;

    Transaction(int id, string desc, double amount, string date);
    void display();
};