#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() {
	string st;
	cin >> st;
	if (st.size() != 8) {
		cout << "sai dinh dang";
		return 0;
	}
	istringstream iss(st);
	string h, m, s;
	getline(iss, h, ':');
	getline(iss, m, ':');
	getline(iss, s, ':');
	if (h.size() != 2 && m.size() != 2 && s.size() != 2) {
		cout << "sai dinh dang";
		return 0;
	}
	if (stoi(h) < 0 || stoi(h) > 24) {
		out << "sai dinh dang";
		return 0;
	}
	else if(stoi(m) < 0 || stoi(h) > 59){
		out << "sai dinh dang";
		return 0;
	}
	else if(stoi(s) < 0 || stoi(s) > 59){
		out << "sai dinh dang";
		return 0;
	}
	cout << "Dung roi day";
	return 0;
}