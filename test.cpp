#include<bits/stdc++.h>

using namespace std;

int main(){
	int n = 50;
	while(n>0){

		cout << "n = " << n << " | " << "n % 9 = " << n%9 << " | " << endl;
		if(n%9!=0)
			n -= n%9;
		else
			n--;
	}

	return 0;
}