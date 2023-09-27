#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Dog
{
public:
	Dog();
	Dog(int id, string name, string sex, string birthday, string color, string owner, string breed, string date_tiem);
	~Dog();
	void toString() {
		cout << this->id << " " << this->name << " " << this->sex << " " << this->birthday <<
			" " << this->color << " " << this->owner << " " << this->breed << " " << this->date_tiem;
	}
	int getAge() {
		istringstream iss(birthday);
		string s;
		getline(iss, s, '/');
		int thang = stoi(s);
		getline(iss, s, '/');
		int nam = stoi(s);
		int tuoi = 2023 - nam;
		if ((9 - thang) < 0) tuoi--;
		return tuoi;
	}
private:
	int id;
	string name;
	const string sex;
	string birthday;
	string color;
	string owner;
	string breed;
	string date_tiem;
};


Dog::Dog(int id, string name, string sex, string birthday, string color, string owner, string breed, string date_tiem)
{
	this->id = id;
	this->name = name;
	this->sex = sex;
	this->birthday = birthday;
	this->color = color;
	this->owner = owner;
	this->breed = breed;
	this->date_tiem = date_tiem;
	cout << "Con cho " << this->name << " " << getAge() << " tuoi" << endl;
}

Dog::Dog() {

}


Dog::~Dog()
{
}

int main() {
	Dog a = Dog(1,"Oan","famale","9/2022","black","NA","Weed","6/2023");
	a.toString();
	return 0;
}