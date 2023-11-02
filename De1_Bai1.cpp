#include<iostream>
#include<set>
#include<string>
using namespace std;

set<char> a, b, c;

void find(string s1, string s2) {
	for (int i = 0;i < s1.length();i++) {
		a.insert(s1[i]);
	}
	for (int i = 0;i < s2.length();i++) {
		b.insert(s2[i]);
	}
	for (auto o : a) {
		if (b.count(o) < 1) {
			c.insert(o);
		}
	}
	for (auto o : b) {
		if (a.count(o) < 1) {
			c.insert(o);
		}
	}
	for (auto o : c) {
		cout << o;
	}
}

int main() {
	string s1, s2;
	s1 = "egeksfroeegks";
	s2 = "eegksquiz";
	find(s1,s2);
	return 0;
}