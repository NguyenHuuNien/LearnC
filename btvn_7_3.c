#include<stdio.h>

int main(){
	char name1[100],name2[100];
	char qq1[100],qq2[100];
	int tuoi1,tuoi2;
	//printf("Nhap ten: ");
	gets(name1);
	//printf("Nhap que quan: ");
	gets(qq1);
	//printf("Nhap tuoi: ");
	scanf("%d",&tuoi1);
	fflush(stdin);
	//printf("Nhap ten: ");
	gets(name2);
	//printf("Nhap que quan: ");
	gets(qq2);
	//printf("Nhap tuoi: ");
	scanf("%d",&tuoi2);
	printf("Nhap thong tin sinh vien 1:\n");
	printf("- Ten: %s\n",name1);
	printf("- Que quan: %s\n",qq1);
	printf("- Tuoi: %d\n",tuoi1);
	printf("Nhap thong tin sinh vien 2:\n");
	printf("- Ten: %s\n",name2);
	printf("- Que quan: %s\n",qq2);
	printf("- Tuoi: %d\n",tuoi2);
	printf("Cac sinh vien da nhap vao:\n");
	printf("*-----------------------------------------------*\n");
	printf("| Ten | Que quan | Tuoi |\n");
	printf("*-----------------------------------------------*\n");
	printf("| %s | %s | %d |\n",name1,qq1,tuoi1);
	printf("*-----------------------------------------------*\n");
	printf("| %s | %s | %d |\n",name2,qq2,tuoi2);
	printf("*-----------------------------------------------*");
	return 0;
}
