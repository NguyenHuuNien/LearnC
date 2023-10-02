#include<iostream>
#include<vector>

using namespace std;

class Animal {
protected:
	int id;
	string name;
	int age;
public:
	virtual void display() {
		cout << this->id << " " << this->name << endl;
	}
	Animal() {

	}
	Animal(int id, string name, int age) {
		this->id = id;
		this->name = name;
		this->age = age;
	}
	void operator-=(int x) {
		this->age -= x;
	}

	bool operator >= (int x) {
		return this->age >= x ? true : false;
	}

	bool operator <= (int x) {
		return this->age <= x ? true : false;
	}
	
	void operator << (string s) {
		cout << this->name << " ";
		cout << s << endl;
	}
};

class Dog : public Animal {
public:
	Dog() {

	}
	Dog(int id, string name, int age) : Animal(id,name,age) {
	}
	void display() {
		cout << "DOG: " << endl;
	}
};

class Cat : public Animal {
public:
	Cat() {

	}
	Cat(int id, string name,int age) : Animal(id,name,age) {
	}
	void display() {
		cout << "CAT: " << endl;
	}
};

int main() {
	Dog d1(1,"O",4);
	Cat c1(2, "a",5);
	Dog d2(3, "n",3);
	Cat c2(4, "h",5);

	c2 << " An cut";
	
	return 0;
}