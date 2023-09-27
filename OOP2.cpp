#include<iostream>
#include<vector>
using namespace std;

class Student {
private:
	int id;
	string name;
	const string sex;
	double GPA;
	double cao;
	int nang;
public:
	Student();
	Student(int _id, string _name, string _sex, double _GPA, double _cao, int _nang);
	Student(const Student &a);
	void display();
	double bmi();
	Student& operator = (const Student& a) {
		this->name = a.name;
		this->id = a.id;
		this->GPA = a.GPA;
		this->cao = a.cao;
		this->nang = a.nang;
		return *this;
	}
};

Student::Student(const Student &a) : sex(a.sex) {
	this->id = a.id;
	this->name = a.name;
	this->GPA = a.GPA;
	this->cao = a.cao;
	this->nang = a.nang;
}

double Student::bmi() {
	return this->nang / (this->cao * this->cao);
}

void Student::display() {
	cout << this->id << " " << this->name << " " << this->sex << " " << this->GPA << " " << this->cao
		<< " " << this->nang << endl;
	cout << "BMI = " << bmi();
}

Student::Student() {
}

Student::Student(int _id, string _name, string _sex, double _GPA, double _cao, int _nang) :id(_id), name(_name), sex(_sex),
GPA(_GPA), cao(_cao), nang(_nang) {

}

int main() {
	Student a(1244,"Nien","nam",3.0,1.70,68);
	Student b(1333, "HyuNie", "Nu", 3.18, 1.68, 68);
	b = a;
	vector<Student> ds;
	ds.em
	Student c(a);
	c.display();
	return 0;
}