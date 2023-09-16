#include<iostream>
#include<sstream>
#include<set>
#include<string>

using namespace std;

int main() {
	set<string> st;
	string s = "When the baby can hold tableware from their meals, can sit to children to eat their own meals in the stool, mothers are fully prepared to clean up the mess. ";
	istringstream iss(s);
	string line;
	while (iss >> line) {
		st.insert(line);
	}
	for (string o : st) {
		cout << o << " ";
	}
	return 0;
}