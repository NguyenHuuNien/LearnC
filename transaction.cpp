#include "transaction.h"

Transaction::Transaction(int id, string desc, double amount, string date) {
    this->transaction = id;
    this->description = desc;
    this->amount = amount;
    this->date = date;
}
void Transaction::display() {
    cout << "ID giao dich: " << transaction << endl;
    cout << "Noi dung: " << description << endl;
    cout << "So tien: " << amount << endl;
    cout << "Ngay: " << date << endl;
}