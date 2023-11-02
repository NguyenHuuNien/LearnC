#include<iostream>
#include<vector>

using namespace std;

struct Interval
{
	int start;
	int end;
};

void sortInterval(vector<Interval>& vt) {
	for (int i = 0;i < vt.size() - 1;i++) {
		for (int j = i+1;j < vt.size();j++) {
			if (vt[i].start > vt[j].start) {
				Interval tmp = vt[i];
				vt[i] = vt[j];
				vt[j] = tmp;
			}
		}
	}
}

int main() {
	vector<int> start = { 1,3,0,8,8 };
	vector<int> end = { 5,4,3,10,9 };
	vector<Interval> vt;

	for (int i = 0;i < start.size();i++) {
		Interval a;
		a.start = start[i];
		a.end = end[i];
		vt.push_back(a);
	}

	sortInterval(vt);

	vector<Interval> t;
	int k = 0;
	int i = 0;
	while (i < vt.size()) {
		t.push_back(vt[i]);
		while (i<vt.size() && vt[i].start <= t[k].end) {
			if (vt[i].end > t[k].end) {
				t[k].end = vt[i].end;
			}
			i++;
		}
		k++;
	}
	for (auto o : t) {
		cout << o.start << " " << o.end << endl;
	}

	return 0;
}