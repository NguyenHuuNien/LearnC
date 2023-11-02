#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
	vector<string> vt = { "andy","ake","clark" };
	map<string, int> m;
	string name = "";
	int maxc = 0;
	for (auto o : vt) {
		m[o]++;
		if (maxc <= m[o]) {
			maxc = m[o];
			if (name.length() > 0) {
				name = o.length() < name.length() ? o : name;
			}
			else {
				name = o;
			}
		}
	}
	cout << name << " " << m[name] << endl;
	return 0;
}