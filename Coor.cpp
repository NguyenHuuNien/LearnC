#include<iostream>
#include<fstream>
#include<string>
#include<math.h>
#include<vector>
#include<sstream>
#include<map>

using namespace std;

fstream in, out;
struct Node
{
	int id;
	double x;
	double y;
};

double khoangCach(Node a, Node b) {
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(int argc, char* argv[]) {
	if (argc != 5) {
		cout << "Thieu dau vao";
		exit(0);
	}
	int nodeID;
	out.open("output.txt", ios::out);
	for (int i = 1;i < 4;i++) {
		if (string(argv[i]) == "-p") {
			in.open(argv[i + 1], ios::in);
		}
		else if (string(argv[i]) == "-i") {
			nodeID = stoi(string(argv[i+1]));
		}
	}
	if (!in.is_open()) {
		cout << "File chua duoc mo";
		exit(0);
	}
	//-------------------------------------------
	vector<Node> dsNode;
	string line;
	in >> line;
	while (in >> line) {
		Node N;
		string s;
		istringstream iss(line);
		getline(iss, s, ',');
		N.id = stoi(s);
		getline(iss, s, ',');
		N.x = stod(s);
		getline(iss, s, ',');
		N.y = stod(s);
		dsNode.push_back(N);
	}
	double minN = khoangCach(dsNode[0], dsNode[nodeID]);
	double maxN = minN;
	int idMax, idMin;

	for (int i = 0;i < dsNode.size();i++) {
		if (dsNode[i].id != nodeID) {
			double kc = khoangCach(dsNode[i], dsNode[nodeID]);
			if (minN > kc) {
				minN = kc;
				idMin = dsNode[i].id;
			}
			if (maxN < kc) {
				maxN = kc;
				idMax = dsNode[i].id;
			}
		}
	}
	out << "Diem gan nhat co id: " << idMin <<endl;
	out << "Diem xa nhat co id: " << idMax << endl;

	in.close();
	out.close();
	return 0;
}