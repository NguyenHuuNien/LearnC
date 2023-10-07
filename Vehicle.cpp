#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include "Vehicle.h"
using namespace std;


bool Vehicle::needCheck(string a) {
	int cur_m = 10, cur_y = 2023;
	istringstream iss(a);
	string s;
	getline(iss, s, '/');
	int m = stoi(s);
	getline(iss, s, '/');
	int y = stoi(s);
	int check;
	if (cur_y - y > 1) return true;
	else if (cur_y > y) {
		m = 12 - m;
		if (m + cur_m > 12) {
			return true;
		}
		else {
			return false;
		}
	}
	else if(cur_y-y<=0){
		return false;
	}
}

ostream& operator << (ostream& out, Vehicle& xe) {
	out << xe.id << " " << xe.name << " " << xe.type << " " << xe.brand << " " << xe.year << " " << xe.owner;
	return out;
}

int main() {
	Vehicle a(1, "Honda Civic", "4 banh", "Honda", "01/2023", "HyuNie");
	a.display();
	if (a.needCheck("05/2024")) {
		cout << "Sua xe thoi" << endl;
	}
	else {
		cout << "Tu tu hay sua" << endl;
	}
	cout << a << endl;
	a += 13;
	cout << a << endl;
	return 0;
}