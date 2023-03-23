#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
		if (n>=0 && n<5){
			printf("Kem");
		}
		else if (n>=5 && n<7){
			printf("Trung binh");
		}
		else if(n>=7 && n<8){
			printf("Kha");
		}
		else if(n>=8 && n<9){
			printf("Gioi");
		}
		else if(n<=10){
			printf("Xuat sac");
		}
		else{
			printf("Nhap khong hop le");
		}
	return 0;
}
