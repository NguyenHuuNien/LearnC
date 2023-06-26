#include<stdio.h>

typedef struct SanPham{
	char name[101];
	char maSP[5];
	int sl;
	int HSD;
}SP;

void nhap(SP sp[],int n){
	for(int i=0;i<n;i++){
		do{
			printf("Nhap ten san pham: ");
			gets(sp[i].name);
		}while(strlen(sp[i].name)>100);
		do{
			printf("Nhap ma san pham: ");
			gets(sp[i].maSP);
		}while(strlen(sp[i].maSP)!=4);
		do{
			printf("Nhap so luong san pham: ");
			scanf("%d",&sp[i].sl);
		}while(sp[i].sl<0);
		do{
			printf("Nhap han su dung cua san pham: ");
			scanf("%d",&sp[i].HSD);
			getchar();
		}while(sp[i].HSD<0);
	}
}

void tonKho(SP sp[],int n){
	int dem = 0;
	for(int i=0;i<n;i++){
		if(sp[i].sl>=50){
			dem++;
		}
	}
	printf("So san pham ton kho it nhat 50 (chiec) la: %d\n",dem);
}

void sortHSD(SP sp[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(sp[i].HSD>sp[j].HSD){
				SP temp = sp[i];
				sp[i] = sp[j];
				sp[j] = temp;
			}
		}
	}
}

void printHSD(SP sp[], int n){
	int stt = 1;
	printf("+-----+-------------+--------+----------+-----+\n");
	printf("| STT | Ten SP      | Ma SP  | So luong | HSD |\n");
	printf("+-----+-------------+--------+----------+-----+\n");
	for(int i=0;i<n;i++){
		if(sp[i].HSD<=7){
			printf("| %-4d| %-12s| S%-6s| %-9d| %-4d|\n",stt,sp[i].name,sp[i].maSP,sp[i].sl,sp[i].HSD);
			stt++;
			printf("+-----+-------------+--------+----------+-----+\n");
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	SP sp[n];
	nhap(sp,n);
	tonKho(sp,n);
	sortHSD(sp,n);
	printHSD(sp,n);
	return 0;
}
