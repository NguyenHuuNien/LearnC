#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<fstream>
#include<map>
#include<set>

using namespace std;

fstream in, out;


int main(int argc, char* argv[]) {
	if (argc != 7) {
		cout << "Thieu dau vao";
		exit(0);
	}
	double w;
	int nodeID;
	for (int i = 1;i < 7;i++) {
		if (string(argv[i]) == "-p") {
			in.open(argv[i + 1], ios::in);
		}
		else if (string(argv[i]) == "-w") {
			w = stod(string(argv[i + 1]));
		}
		else if (string(argv[i]) == "-id") {
			nodeID = stoi(string(argv[i + 1]));
		}
	}
	if (!in.is_open()) {
		cout << "Error open file";
		exit(0);
	}
	out.open("output.txt", ios::out);

	string line;
	in >> line;
	map<int, map<int, double>> mm;
	set<int> st;
	while (in >> line) {
		istringstream iss(line);
		string s;
		getline(iss, s, ',');
		int a, b;
		a = stoi(s);
		getline(iss, s, ',');
		b = stoi(s);
		getline(iss, s, ',');
		st.insert(a);
		st.insert(b);
		double awb = stod(s);
		mm[a][b] = awb;
		mm[b][a] = awb;
	}
	for (int o : st) {
		if (mm[nodeID][o] > w) {
			out << o << endl;
		}
	}

	in.close(); out.close();
	return 0;
}