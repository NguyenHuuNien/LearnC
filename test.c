#include<stdio.h>
#include<string.h>
typedef struct Sinh_Vien{
	char name[20];
	int msv;
	double diem;	
}SV;

void nhap(int n, SV *sv){
	for(int i=0;i<n;i++){
		fflush(stdin);
		printf("Nhap ten: ");
		gets((sv+i)->name);
		printf("Nhap Ma sinh Vien: ");
		scanf("%d",&(sv+i)->msv);
		printf("Nhap Diem:");
		scanf("%lf",&(sv+i)->diem);
	}
}

void inkq(int n,SV *sv){
	printf("STT\tName\t\tMSV\tDiem\n");
	for(int i=0;i<n;i++){
		printf("%d\t%s\t\t%d\t%f\n",i+1,((sv+i)->name),((sv+i)->msv),((sv+i)->diem));
	}
}

void sapxep(int n, SV *sv){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(((sv+i)->diem)<((sv+j)->diem)){
				SV temp = *(sv+i);
				*(sv+i) = *(sv+j);
				*(sv+j) = temp;
			}else if(((sv+i)->diem)==((sv+j)->diem)){
				if(strcmp(((sv+i)->name),((sv+j)->name))<0){
					SV temp = *(sv+i);
					*(sv+i) = *(sv+j);
					*(sv+j) = temp;
				}
			}
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	SV sv[n];
	nhap(n,sv);
	printf("Chua sap xep: \n");
	inkq(n,sv);
	printf("Da sap xep: \n");
	sapxep(n,sv);
	inkq(n,sv);
	return 0;
}
