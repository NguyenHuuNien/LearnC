#include<iostream>

using namespace std;

int main() {
	int m, n;
	// nhap m va n
	cin >> m >> n;
	int arr[m][n];
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			cin >> arr[i][j];
		}
	}

	// tinh tong cac phan tu cua ma tran
	int sum = 0;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			sum += arr[i][j];
		}
	}
	cout << sum << endl;
	
	// tinh tong cac phan tu am cua ma tran
	int sumAm = 0;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			if (arr[i][j] < 0) {
				sumAm += arr[i][j];
			}
		}
	}
	if (sumAm == 0) cout << "Khong co phan tu am";
	else cout << sumAm << endl;

	// tim gt lon nhat va nho nhat tren duong cheo
	int xMax, xMin;
	int maxArr = arr[0][0], minArr = arr[0][0];
	if (m != n) {
		cout << "Ma tran khong co duong cheo" << endl;
		return 0;
	}
	else {
		for (int i = 0;i < m;i++) {
			if (arr[i][i] < minArr) {
				minArr = arr[i][i];
				xMin = i;
			}
			else if (arr[i][i] > maxArr) {
				maxArr = arr[i][i];
				xMax = i;
			}
		}
	}
	cout << "Max: " << maxArr << " - vi tri: " << xMax << ":" << xMax << endl;
	cout << "Min: " << minArr << " - vi tri: " << xMin << ":" << xMin << endl;

	return 0;
}