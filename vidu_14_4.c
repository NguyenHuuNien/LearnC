#include<stdio.h>
#include<string.h>

typedef struct Thi_Sinh{
	char ten[20];
	char ma[8];
	int phach;	
}TS;

typedef struct Bai_Thi{
	int phach;
	double diem;
}BT;

void nhapTS(TS )

int main(){
	int n;
	scanf("%d",&n);
	TS ts[n];
	BT bt[n];	
	nhapTS(ts,n);
	nhapBT(bt,n);
	return 0;
}
