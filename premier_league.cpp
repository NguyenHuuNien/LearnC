#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include<vector>
#include<sstream>
#include<map>

using namespace std;

fstream in, out;

struct dataTeam
{
	double goalAway = 0;
	double goalHome = 0;
	int numWin = 0;
	double goalDraw = 0;
};

int main(int argc, char* argv[]) {
	if (argc != 5) {
		cout << "Thieu dau vao";
		exit(0);
	}
	string nameTeam;
	out.open("output.txt", ios::out);
	for (int i = 1;i < 5;i++) {
		if (string(argv[i]) == "-p") {
			in.open(argv[i + 1], ios::in);
		}
		else if (string(argv[i]) == "-n") {
			nameTeam = argv[i+1];
		}
	}
	if (!in.is_open()) {
		cout << "File chua duoc mo";
		exit(0);
	}
	//--------------------------------------------------
	string line;
	map<string, dataTeam> inforMatch;
	in >> line;
	while (in >> line) {
		string s;
		istringstream iss(line);
		getline(iss, s, ',');
		string nameHome = s;
		getline(iss, s, ',');
		string nameAway = s;
		getline(iss, s, ',');
		int goalHome = stod(s);
		getline(iss, s, ',');
		int goalAway = stod (s);

		inforMatch[nameHome].goalHome += goalHome;
		inforMatch[nameAway].goalAway += goalAway;
		inforMatch[nameHome].goalDraw += goalHome;
		inforMatch[nameAway].goalDraw += goalAway;
		if (goalAway < goalHome) {
			inforMatch[nameHome].numWin++;
		}
		else if (goalAway > goalHome) {
			inforMatch[nameAway].numWin++;
		}
	}
	cout << inforMatch[nameTeam].goalAway + inforMatch[nameTeam].goalHome + inforMatch[nameTeam].goalDraw << endl;
	//--------------------------------------------------
	in.close();
	out.close();
	return 0;
}
