#pragma once
#include<iostream>
using namespace std;

class Food {
private:
	string name;
	double price;
public:
	Food(){}
	Food(string name, double price) {
		this->name = name;
		this->price = price;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	void setPrice(double price){
		this->price = price;
	}
	double getPrice() {
		return this->price;
	}
};