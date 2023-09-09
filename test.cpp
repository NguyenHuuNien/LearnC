#include<iostream>
#include<vector>

using namespace std;

void giao(vector<int> v1, vector<int> v2) {
	for (int o : v1) {
		for (int t : v2) {
			if (o == t) {
				cout << o << " ";
				break;
			}
		}
	}
	cout << endl;
}

void khongGiao(vector<int> v1, vector<int> v2) {
	bool check;
	for (int o : v1) {
		check = true;
		for (int t : v2) {
			if (o == t) {
				check = false;
				break;
			}
		}
		if (check) {
			cout << o << " ";
		}
	}

	for (int o : v2) {
		check = true;
		for (int t : v1) {
			if (o == t) {
				check = false;
				break;
			}
		}
		if (check) {
			cout << o << " ";
		}
	}
	cout << endl;
}

int main() {
	vector<int> v1 = {1,2,4,5,7};
	vector<int> v2 = {1,2,8,9};
	giao(v1, v2);
	khongGiao(v1, v2);
	return 0;
}