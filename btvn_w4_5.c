#include<stdio.h>

int main(){
	char name[100],day[100],mssv[10],khoa[10];
	gets(name);
	gets(day);
	gets(mssv);
	gets(khoa);
	printf("Ho Ten: %s\n",name);
	printf("Ngay sinh: %s\n",day);
	printf("MSSV: %s\n",mssv);
	printf("Lop: %s",khoa);
	return 0;
}
