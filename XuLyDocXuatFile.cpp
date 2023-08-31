#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

fstream in, out;

struct HoTen
{
	string ho;
	string ten;
};

struct Player
{
	HoTen name;
	string country;
	string club;
	int goals;
	int assists;
};

vector<Player> dsPlayer;

vector<Player> quickSort(vector<Player> arr) {
	if (arr.size() <= 1) {
		return arr;
	}
	Player mid = arr[arr.size() / 2];
	vector<Player> left, right,res;
	for (int i = 0;i < arr.size();i++) {
		if (arr[i].goals < mid.goals) {
			left.push_back(arr[i]);
		}
		if (arr[i].goals > mid.goals) {
			right.push_back(arr[i]);
		}
	}
	left = quickSort(left);
	right = quickSort(right);

	res.insert(res.end(), left.begin(), left.end());
	res.push_back(mid);
	res.insert(res.end(), right.begin(), right.end());
	return res;
}

void printDS() {
	out << "Ho\tTen\t\tQuocTich\t\tDoiBong\t\tSoBanThang\tSoKienTao\n";
	for (int i = 0;i <= dsPlayer.size();i++) {
		out << dsPlayer[i].name.ho << "\t" << dsPlayer[i].name.ten << "\t\t" << dsPlayer[i].country
			<< "\t\t" << dsPlayer[i].club << "\t\t" << dsPlayer[i].goals << "\t" << dsPlayer[i].assists << endl;
	}
}

void xuLy() {
	string s;
	while (getline(in,s)) {
		Player cauThu;
		istringstream iss(s);
		string nm;
		getline(iss, nm, ';');
		istringstream hoten(nm);
		getline(hoten, cauThu.name.ho, ' ');
		getline(hoten, cauThu.name.ten, ' ');
		getline(iss, cauThu.country, ';');
		getline(iss, cauThu.club, ';');
		out << cauThu.name.ho << "\t" << cauThu.name.ten << "\t\t" << cauThu.country
			<< "\t\t" << cauThu.club << endl;
		string p;
		getline(iss, p, ';');
		cauThu.goals = stoi(p);
		getline(iss, p, ';');
		cauThu.assists = stoi(p);
		dsPlayer.push_back(cauThu);
	}
	dsPlayer = quickSort(dsPlayer);
	printDS();
}

int main(int argc, char* argv[]) {
	in.open(argv[1], ios::in);
	out.open(argv[2], ios::out);
	if (argc != 3) {
		out << "Dau vao khong du so luong | ./xuLyDocXuatFile input.txt output.txt";
		return 0;
	}
	if (in.is_open()) {
		xuLy();
	}
	else {
		out << "Loi mo file!";
	}

	in.close();
	out.close();
	return 0;
}