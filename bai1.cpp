#include<iostream>
using namespace std;

int main(){
    cout << "Nhap so phan tu mang: ";
    int n;
    cin >> n;
    long arr[100];
    // nhap mang
    for(int i=1;i<=n;i++){
        cout << "Nhap phan tu "<<i<<" : ";
        cin >> arr[i];
    }
    long t[100],tMax[100];
    t[0] = 0;
    // tinh mang cong don
    for(int i=1;i<=n;i++){
        t[i] = t[i-1] + arr[i];
    }
    // tinh mang tMax
    tMax[n] = t[n];
    for(int i=n-1;i>=1;i--){
        tMax[i] = max(t[i],tMax[i+1]);
    }
    // tim max
    long maxc = arr[1];
    for(int i=1;i<=n;i++){
        maxc = max(tMax[i] - t[i],maxc);
    }
    cout << "Tong lon nhat : " << maxc;
}