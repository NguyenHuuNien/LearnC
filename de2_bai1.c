#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void nhap(char c[]){
	int ck;
	do{
		ck=0;
		printf("Nhap c: ");
		gets(c);
		for(int i=0;i<strlen(c);i++){
			if(isalpha(c[i])==0&&isdigit(c[i])==0){
				ck=1;
				break;
			}
		}
	}while(strlen(c)>100||ck==1);
}

void find(char c[]){
	int arr[200];
	for(int i=0;i<200;i++){
		arr[i]=0;
	}
	for(int i=0;i<strlen(c);i++){
		int vt = (int)(c[i]);
		arr[vt]++;
	}
	int maxc=0;
	int saveI = 0;
	for(int i=0;i<200;i++){
		if(arr[i]>maxc){
			saveI=i;
			maxc = arr[i];
		}
	}
	printf("Ky tu xuat hien nhieu nhat: %c\nKy tu do xuat hien %d lan",(char)saveI,maxc);
}

int main(){
	char c[100];
	nhap(c);
	find(c);
	return 0;
}
