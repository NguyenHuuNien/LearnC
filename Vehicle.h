#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

class Vehicle {
private:
	int id;
	string name;
	string type;
	string brand;
	string year;
	string owner;
	string check_date;
public:
	Vehicle() {}
	Vehicle(int id, string name, string type, string brand, string year, string owner) {
		this->id = id;
		this->name = name;
		this->type = type;
		this->brand = brand;
		this->year = year;
		this->owner = owner;
		this->check_date = "05/2023";
	}

	bool needCheck(string a);

	void display() {
		cout << this->id << " " << this->name << " " << this->type << " " << this->brand << " " <<
			this->year << " " << this->owner << endl;
	}
	friend ostream& operator << (ostream& out, Vehicle& xe);

	Vehicle& operator += (int x) {
		istringstream iss(year);
		string s;
		getline(iss, s, '/');
		int m = stoi(s);
		getline(iss, s, '/');
		int y = stoi(s);

		int mm = m + x;
		while (mm > 12) {
			mm -= 12;
			y++;
		}
		string p = mm >= 10 ? to_string(mm) : ("0" + to_string(mm));
		this->year = p + "/" + to_string(y);
		return *this;
	}
};
