#include<stdio.h>
#include<string.h>
typedef struct May_Tinh{
	char hang[20];
	char ma[40];
	char chip[4];
	int RAM;
	double gia;
}MT;

int nhap(MT qlmt[]){
	char tl[10];
	int n=0;
	do{
		printf("Nhap Hang May: ");
		gets(qlmt[n].hang);
		do{
			printf("Nhap Chip Cua May: ");
			gets(qlmt[n].chip);
		}while(!(strcmp(qlmt[n].chip,"i3")==0||strcmp(qlmt[n].chip,"i5")==0||strcmp(qlmt[n].chip,"i7")==0));
		do{
			printf("Nhap Ram: ");
			scanf("%d",&qlmt[n].RAM);
		}while(qlmt[n].RAM%4!=0);
		do{
			printf("Nhap Gia: ");
			scanf("%lf",&qlmt[n].gia);
		}while(qlmt[n].gia<0);
		printf("Nhap tiep khong? (y/n)");
		n++;
		fflush(stdin);
		gets(tl);
	}while(tl[0]=='y');
	return n;
}

void taoMaMay(MT qlmt[], int n){
	char kc[] = ".";
	for(int i=0;i<n;i++){
		char ma1[100] = "";
		strcat(ma1,qlmt[i].hang);
		strcat(ma1,kc);
		strcat(ma1,qlmt[i].chip);
		strcat(ma1,kc);
		char setRAM[100];
		sprintf(setRAM,"%d",qlmt[i].RAM);
		strcat(ma1,setRAM);
		strcpy(qlmt[i].ma,ma1);
	}
}

void sapxepMay(MT qlmt[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(qlmt[i].gia>qlmt[j].gia){
				MT temp = qlmt[i];
				qlmt[i] = qlmt[j];
				qlmt[j] = temp;
			}
		}
	}
}

void inData(MT qlmt[], int n){
	printf("Stt - Ma - Chip - RAM - Gia\n");
	int stt=1;
	for(int i=0;i<n;i++){
		if(strcmp(qlmt[i].hang,"Asus")==0&&((strcmp(qlmt[i].chip,"i5"))||(strcmp(qlmt[i].chip,"i7")))&&qlmt[i].RAM>=8&&qlmt[i].gia<=25){
			printf("%d - %s - %s - %d - %.2f\n",stt,qlmt[i].ma,qlmt[i].chip,qlmt[i].RAM,qlmt[i].gia);
			stt++;
		}
	}
}

int main(){
	MT qlmt[100];
	int sl = nhap(qlmt);
	taoMaMay(qlmt,sl);
	sapxepMay(qlmt,sl);
	inData(qlmt,sl);
	return 0;
}
