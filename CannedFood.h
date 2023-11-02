#pragma once
#include<vector>
#include "Food.h"
using namespace std;

class CannedFood : public Food{
private:
	int numberBox;
public:
	CannedFood() {}
	CannedFood(string name, double price, int numberBox) : Food(name, price) {
		this->numberBox = numberBox;
	}
	void display() {
		cout << "Name: " << this->getName() << endl;
		cout << "Price: " << this->getPrice() << endl;
		cout << "Number box: " << this->numberBox << endl;
	}
	void setNumberBox(int numberBox) {
		this->numberBox = numberBox;
	}
	int getNumberBox() {
		return this->numberBox;
	}
	static void sortNumberBox(vector<CannedFood>& vt) {
		for (int i = 0;i < vt.size() - 1;i++) {
			for (int j = i + 1;j < vt.size();j++) {
				if (vt[i].numberBox > vt[j].numberBox) {
					CannedFood tmp = vt[i];
					vt[i] = vt[j];
					vt[j] = tmp;
				}
			}
		}
	}
};