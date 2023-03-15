#include<stdio.h>

int main(){
	int stt;
	char day[50],cls[5],mon[50],start[10],end[10];
	scanf("%d\n",&stt);
//	fflush(stdin);
	gets(day);
	gets(cls);
	gets(mon);
	gets(start);
	gets(end);
	printf("STT\tNgay Thang\tTen lop Ten mon hoc\tBat dau Ket thuc\n");
	printf("%d\t%s\t%s\t%s\t%s\t%s",stt,day,cls,mon,start,end);
	return 0;
}
