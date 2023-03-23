#include<stdio.h>

int main(){
	int b,y;
	scanf("%d%d",&b,&y);
	int n = y - b;
	if (n<0){
		printf("Nhap sai");
		return 0;
	}
	switch (n){
		case 0 ... 5:
			printf("Tre em");
			break;
		case 6 ... 10:
			printf("Hoc sinh cap 1");
			break;
		case 11 ... 14:
			printf("Hoc sinh cap 2");
			break;
		case 15 ... 17:
			printf("Hoc sinh cap 3");
			break;
		case 18 ... 39:
			printf("Thanh nien");
			break;
		case 40 ... 59:
			printf("Trung nien");
			break;
		default:
			printf("Nguoi gia");
			break;
	}
	return 0;
}
