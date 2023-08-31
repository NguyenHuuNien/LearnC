#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>

using namespace std;


fstream in, out;
struct Player
{
	string name;
	string team;
	int goals;
};

void xuly() {
	vector<Player> v;
	string s;
	int dem=0;
	while (getline(in, s)) {
		Player pl;
		istringstream iss(s);
		getline(iss, pl.name, ',');
		getline(iss, pl.team, ',');
		string g;
		getline(iss, g, ',');
		pl.goals = stoi(g);
		v.push_back(pl);
		dem += pl.goals;
	}
	out << dem;
}

int main(int argc, char* argv[]) {
	if (argc != 3) {
		out << "Khong the mo file";
		return 0;
	}
	in.open(argv[1], ios::in);
	out.open(argv[2], ios::out);

	if (in.is_open()) {
		xuly();
	}
	else {
		out << "File chua duoc mo";
		return 0;
	}
	in.close();
	out.close();
	return 0;
}