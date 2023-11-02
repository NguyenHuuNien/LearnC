#pragma once
#include "Person.h"
using namespace std;

class Children : public Person
{
public:
	Children();
	Children(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb) {};
	long moneyPay() {
		vector<Book> vb = this->getVB();
		return vb.size() * 5000;
	}
	void display() {
		cout << "Doc gia Tre em" << endl;
		Person::display();
	}
private:

};

Children::Children()
{
}
