#include<bits/stdc++.h>
#include<sstream>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {
	vector<int> diem;
	for(auto o : grades){
		if(o<38){
			diem.push_back(o);
		}else{
			int x = ((o / 10) * 10) + 5;
			if(x < o) x += 5;
			if(x - o < 3) diem.push_back(x);
			else diem.push_back(o);
		}
	}
	return diem;
}

int main(){
	int n, a;
	vector<int> vt;
	cin >> n ;
	for(int i=0;i<n;i++){
		cin >> a;
		vt.push_back(a);
	}
	for(auto o : gradingStudents(vt)) cout << o << endl;
	return 0;
}