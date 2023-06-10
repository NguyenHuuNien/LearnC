#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

typedef struct Quan_Ly_Thong_Tin{
	char maCH[11];
	char diaChi[31];
	int nhanVien;
	long doanhSo;
}QLTT;

void nhapMaCH(char c[]){
	int k;
	do{
		printf("Nhap ma cua hang: ");
		k=0;
		fflush(stdin);
		gets(c);
		for(int i=0;i<strlen(c);i++){
			if(isalpha(c[i])==0&&isdigit(c[i])==0){
				printf("!!!Nhap Lai!!!\n");
				k=1;
				break;
			}
		}
	}while(k!=0);
}

void nhap(QLTT arr[],int n){
	for(int i=0;i<n;i++){
		printf("-----Nhap thong tin cua hang %d-----\n",i+1);
		printf("Nhap dia chi: ");
		fflush(stdin);
		gets(arr[i].diaChi);
		nhapMaCH(arr[i].maCH);
		printf("Nhap so nhan vien: ");
		scanf("%d",&arr[i].nhanVien);
		printf("Nhap doanh so: ");
		scanf("%ld",&arr[i].doanhSo);
	}
}

void inInfor(QLTT CH[], int n){
	printf("+-----+------+-------------+------------+------------+\n");
	printf("| STT | MaCH | So nhan vien|  Doanh so  |   Dia chi  |\n");
	printf("+-----+------+-------------+------------+------------+\n");
	for(int i=0;i<n;i++){
		printf("|%5d|%6s|%13d|%12d|%12s|\n",i+1,CH[i].maCH,CH[i].nhanVien,CH[i].doanhSo,CH[i].diaChi);
		printf("+-----+------+-------------+------------+------------+\n");
	}
	
}

void sapXep(QLTT CH[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(CH[i].doanhSo<CH[j].doanhSo){
				QLTT temp = CH[i];
				CH[i] = CH[j];
				CH[j] = temp;
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap so luong cua hang: ");
	scanf("%d",&n);
	QLTT CH[n];
	nhap(CH,n);
	inInfor(CH,n);
	sapXep(CH,n);
	printf("----Sau khi sap xep giam dan theo doanh so----\n");
	inInfor(CH,n);
	return 0;
}
