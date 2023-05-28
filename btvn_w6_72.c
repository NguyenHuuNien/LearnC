#include<stdio.h>
#include<math.h>
int main(){
	double f;
	scanf("%lf\n",&f);
	f = f/100;
	char c[30];
	//fflush(stdin);
	gets(c);
	int tien,i;
	scanf("%d",&tien);
	int money = tien;
	int tiendu;
	printf("Tai khoan khach hang: %s\n",c);
	printf("Thang    Tien dau ky    Tien lai    So du\n");
	for(i=1;i <=6;i++){
		int tienlai = (f*tien+1e-6);
		tiendu = tien+tienlai;
		printf("    %d        %d       %d    %d\n",i,tien,tienlai,tiendu);
		tien = tiendu;
	}
	printf("Tong lai: %d",tiendu-money);
	return 0;
}
