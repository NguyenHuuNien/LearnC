#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
#include<vector>

using namespace std;

fstream in, out;

struct Company
{
	int rank;
	string global;
	string country;
	double sales;
	double profit;
	double assets;
	double market;
};

double toDouble(string x) {
	x.erase(x.begin());
	bool isB = false, isM = false;
	if (x[x.size()-1] == 'B') {
		isB = true;
	}
	x.erase(x.end()-1);
	double k = stod(x);
	if (isB) {
		k *= 1000;
	}
	return k;
}

vector<Company> DocFile() {
	string line;
	getline(in, line);
	vector<Company> v;
	while (getline(in,line)) {
		istringstream iss(line);
		Company a;
		string s;
		getline(iss, s, ',');
		a.rank = stoi(s);
		getline(iss, s, ',');
		a.global = s;
		getline(iss, s, ',');
		a.country = s;
		getline(iss, s, ',');
		a.sales = toDouble(s);
		cout << a.sales << endl;
		v.push_back(a);
	}
	return v;
}

int main(int argc, char* argv[]) {
	if (argc != 7) {
		cout << "Thieu tham so truyen vao"<<endl;
		exit(0);
	}
	string nameCountry;
	long value;
	for (int i = 1;i < 7;i++) {
		if (string(argv[i]) == "-p") {
			in.open(argv[i + 1], ios::in);
		}
		if (string(argv[i]) == "-c") {
			nameCountry = argv[i + 1];
		}
		if (string(argv[i]) == "-v") {
			value = stol(argv[i + 1]);
		}
	}
	if (!in.is_open()) {
		cout << "Open file error.";
		exit(0);
	}
	//------------------------------------------------------
	vector<Company> vF;
	vF = DocFile();
	
	//------------------------------------------------------
	in.close();
	out.close();
	return 0;
}