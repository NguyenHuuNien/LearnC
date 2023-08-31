#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

fstream in, out;
int arr[1005][1005];
int n, m;
int dx[8] = { -1,-1,-1,0,1,1,1,0 };
int dy[8] = { -1,0,1,1,1,0,-1,-1 };

void nhap() {
	in >> n >> m;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			in >> arr[i][j];
		}
	}
}

void loang(int u, int v) {
	for (int i = 0;i < 8;i++) {
		arr[u][v] = 0;
		if (arr[u + dx[i]][v + dy[i]]==1) {
			loang(u+dx[i],v+dy[i]);
		}
	}
}

int main(int argc, char* argv[]) {
	
	in.open(argv[1], ios::in);
	out.open(argv[2], ios::out);
	if (!in.is_open()) {
		out << "Loi mo file";
		return 0;
	}
	int dem = 0;
	nhap();
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			if (arr[i][j] == 1) {
				dem++;
				loang(i, j);
			}
		}
	}
	out << dem << endl;

	in.close();
	out.close();
	return 0;
}