#include "Children.h"
#include "Adult.h"
#include "Book.h"
#include "Person.h"

using namespace std;

int main() {
	vector<Book> vB;
	Book b1 = Book("Nihongo", "Nihonjin", 1);
	Book b2 = Book("HyuNieBook", "HyuNie", 3);
	Book b3 = Book("Dac Nhan Tam", "Pikachu", 6);
	Book b4 = Book("Truyen Kieu", "Nguyen Du", 10);
	Book b5 = Book("Kinh Dich", "HCM", 8);
	vB.push_back(b1);
	vB.push_back(b2);
	vB.push_back(b3);
	vB.push_back(b4);
	vB.push_back(b5);


	vector<Book> vBC;
	vBC.push_back(b2);
	vBC.push_back(b5);
	Children arr_Children[3];

	arr_Children[0] = Children("Hong Anh", 19, "NB", vBC);
	vBC.push_back(b3);
	arr_Children[1] = Children("Huu Nien", 19, "NB", vBC);
	vBC.push_back(b1);
	arr_Children[2] = Children("Hyu Nie", 12, "HN", vBC);


	vector<Book> vBA;
	vBA.push_back(b1);
	vBA.push_back(b3);
	vBA.push_back(b4);
	Adult arr_Adult[2];
	arr_Adult[0] = Adult("Minh Tien", 42, "NB", vBA);
	vBA.push_back(b5);
	arr_Adult[1] = Adult("Tong Linh", 40, "NB", vBA);


	cout << "Display Book: " << endl;
	for (Book o : vB) {
		o.display();
	}
	cout << "Display Children: " << endl;
	for (Children o : arr_Children) {
		o.display();
	}
	cout << "Display Adult: " << endl;
	for (Adult o : arr_Adult) {
		o.display();
	}

	
	vector<Person*> vPointer;
	vPointer.push_back(&arr_Children[0]);
	vPointer.push_back(&arr_Children[1]);
	vPointer.push_back(&arr_Children[2]);
	vPointer.push_back(&arr_Adult[0]);
	vPointer.push_back(&arr_Adult[1]);

	cout << "----------------Sap xep theo tuoi ----------------------" << endl;
	Person::sortPersonAge(vPointer);
	for (auto o : vPointer) {
		o->display();
	}
	cout << "----------------Danh Sach tuoi ----------------------" << endl;
	for (auto o : Person::getListAge(vPointer)) {
		cout << o << endl;
	}
	cout << "----------------Danh sach nhung cuon sach muon nhieu ----------------------" << endl;
	for (auto o : Person::getMaxBorrowed(vPointer, vB)) {
		o.display();
	}
	return 0;
}