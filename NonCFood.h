#pragma once
#include<vector>
#include "Food.h"
using namespace std;

class NonCFood : public Food {
private:
	double weight;
public:
	NonCFood(){}
	NonCFood(string name, double price, double weight) : Food(name, price) {
		this->weight = weight;
	}
	void display() {
		cout << "Name: " << this->getName() << endl;
		cout << "Price: " << this->getPrice() << endl;
		cout << "Weight: " << this->weight << endl;
	}
	void setWeight(double new_weight) {
		this->weight = new_weight;
	}
	double getWeight() {
		return this->weight;
	}
	static void sortWeight(vector<NonCFood>& vt) {
		for (int i = 0;i < vt.size() - 1;i++) {
			for (int j = i + 1; j < vt.size(); j++) {
				if (vt[i].weight > vt[j].weight) {
					NonCFood tmp = vt[i];
					vt[i] = vt[j];
					vt[j] = tmp;
				}
			}
		}
	}
};