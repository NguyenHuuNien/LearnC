#include<iostream>

using namespace std;

class Animal {
private:
	int id;
	string name;
	const string sex;
	double weight;
public:
	Animal();
	Animal(int id, string name, string sex, double weight);
	Display();
	Animal(Animal& a);
	Animal& operator = (Animal& a);
};

Animal& Animal::operator = (Animal& a) {
	this->id = a.id;
	this->name = a.name;
	this->weight = a.weight;
	return *this;
}

Animal::Animal(Animal& a) : sex(a.sex){
	this->id = a.id;
	this->name = a.name;
	this->weight = a.weight;
}

Animal::Display() {
	cout << this->id << " " << this->name << " " << this->sex << " " << this->weight << endl;
}

Animal::Animal(int id, string name, string sex, double weight) : sex(sex) {
	this->id = id;
	this->name = name;
	this->weight = weight;
}

Animal::Animal() {
}

int main() {
	Animal a(1, "Neko", "male", 1.4);
	Animal b(2, "Inu", "female", 3.5);
	a = b;
	a.Display();
	return 0;
}