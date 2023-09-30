#include<iostream>

using namespace std;

class Animal {
protected:
	int id;
	string name;
	const string sex;
	int age;
	string owner;
	string breed;
	string color;
public:
	Animal();
	Animal(int id, string name, string sex, int age, string owner, string breed, string color, string ear);
	Animal& operator = (Animal& orther);
	display();
};

Animal::Animal() {

}

Animal::Animal(int id, string name, string sex, int age, string owner, string breed, string color) : sex(sex) {
	this->id = id;
	this->name = name;
	this->age = age;
	this->owner = owner;
	this->breed = breed;
	this->color = color;
}

Animal& Animal::operator = (Animal& other) {
	this->id = other.id;
	this->name = other.name;
	this->age = other.age;
	this->owner = other.owner;
	this->breed = other.breed;
	this->color = other.color;
	return *this;
}

Animal::display() {
	cout << "Animal: ";
	cout << this->id << " " << this->name << " " << this->sex << " " << this->age << " "
		<< this->owner << " " << this->breed << " " << this->color << endl;
}

class Cat : public Animal {
private:
	string ear;
public:
	Cat(int id, string name, string sex, int age, string owner, string breed, string color, string ear) :
		Animal(id, name, sex, age, owner, breed, color) {
		this->ear = ear;
		cout << "Cat created" << endl;
	}
	void display() {
		cout << "Cat: ";
		cout << this->id << " " << this->name << " " << this->sex << " " << this->age << " "
			<< this->owner << " " << this->breed << " " << this->color << " " << this->ear <<endl;
	}
};

int main() {
	Cat mew(1, "Oan", "famale", 19, "Nie", "Muop", "black", "Dai");
	mew.display();
	return 0;
}