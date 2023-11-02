#pragma once
#include<vector>
#include<string>
#include<set>
#include "Book.h"

using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age, string add, vector<Book> vb);
	string getName();
	string getAdd();
	int getAge();
	vector<Book> getVB();
	virtual long moneyPay() = 0;
	virtual void display();
	static void sortPersonAge(vector<Person*>& vt);
	static vector<int> getListAge(vector<Person*> vt);
	static vector<Book> getMaxBorrowed(vector<Person*> vp, vector<Book> vB);
private:
	string name;
	string add;
	int age;
	vector<Book> vb;
};

Person::Person()
{
}
Person::Person(string name, int age, string add, vector<Book> vb) {
	this->name = name;
	this->age = age;
	this->add = add;
	this->vb = vb;
}
string Person::getName() {
	return this->name;
}
int Person::getAge() {
	return this->age;
}
string Person::getAdd() {
	return this->add;
}
vector<Book> Person::getVB() {
	return this->vb;
}
void Person::display() {
	cout << "Name: " << this->name << endl;
	cout << "Age: " << this->age << endl; 
	cout << "Add: " << this->add << endl;
	cout << "List Book Borrowed" << endl;
	for (int i = 0;i < this->vb.size();i++) {
		cout << "Cuon sach " << i + 1 << ":" << endl;
		vb[i].display();
	}
}

void Person::sortPersonAge(vector<Person*> &vt) {
	for (int i = 0;i < vt.size() - 1;i++) {
		for (int j = i + 1;j < vt.size();j++) {
			if (vt[i]->age > vt[j]->age) {
				Person* tmp = vt[i];
				vt[i] = vt[j];
				vt[j] = tmp;
			}
		}
	}
}

vector<int> Person::getListAge(vector<Person*> vt) {
	set<int> s;
	for (int i = 0;i < vt.size();i++) {
		s.insert(vt[i]->age);
	}
	vector<int> agePerson;
	for (int i : s) {
		agePerson.push_back(i);
	}
	return agePerson;
}
vector<Book> Person::getMaxBorrowed(vector<Person*> vp, vector<Book> vB) {
	int max=0;
	vector<Book> vReturn;
	vector<int> countB(vB.size(), 0);
	for (int i = 0;i < vp.size();i++) {
		vector<Book> vBofP = vp[i]->getVB();
		for (int j = 0;j < vBofP.size();j++) {
			for (int k = 0;k < vB.size();k++) {
				if (vBofP[j].getNameBook() == vB[k].getNameBook()) {
					countB[k]++;
				}
			}
		}
	}
	for (int i = 0;i < countB.size();i++) {
		if (max < countB[i]) max = countB[i];
	}
	for (int i = 0;i < vB.size();i++) {
		if (max == countB[i]) {
			vReturn.push_back(vB[i]);
		}
	}
	return vReturn;
}