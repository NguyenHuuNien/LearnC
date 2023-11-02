#pragma once
#include "Person.h"
using namespace std;

class Adult : public Person
{
public:
	Adult();
	Adult(string name, int age, string add, vector<Book> vb) :Person(name, age, add,  vb) {};
	long moneyPay() {
		vector<Book> vb = this->getVB();
		return vb.size() * 10000;
	}
	void display() {
		cout << "Doc gia Nguoi lon" << endl;
		Person::display();
	}
private:

};

Adult::Adult()
{
}
