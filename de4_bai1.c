#include<stdio.h>
#include<string.h>
#include<ctype.h>

char c[100];

void nhap(){
	int dkLength,dkSo,dkUpper,dem;
	do{
		dkLength = 1;
		dkSo = 1;
		dkUpper = 1; 
		dem = 0;
		printf("Nhap vao string: ");
		gets(c);
		if(strlen(c)<6){
			dkLength = 0;
		}else if(!isupper(c[0])){
			dkUpper = 0;
		}else{
			for(int i = 0;i<strlen(c);i++){
				if(isdigit(c[i])){
					dem++;
				}
				if(dem==2){
					break;
				}
			}
			if(dem<2){
				dkSo=0;
			}
		}
	}while(dkLength==0||dkSo==0||dkUpper==0);
}

int doiXung(char c[],int l, int r){
	if(r>l){
		return 1;
	}else if(c[r]!=c[l]){
		return 0;
	}else{
		return doiXung(c,l+1,r-1);
	}
}

void swapUpLow(){
	for(int i=0;i<strlen(c);i++){
		if(isupper(c[i])){
			c[i] = tolower(c[i]);	
		}else if(islower(c[i])){
			c[i] = toupper(c[i]);
		}
	}
	printf("string ket qua sau khi chuyen doi: %s",c);
}

int main(){
	nhap();
	
	int kq = doiXung(c,0,strlen(c)-1);
	if(kq){
		printf("string %s thoa man tinh doi xung\n",c);
	}else{
		printf("string %s khong thoa man tinh doi xung\n",c);
	}
	
	swapUpLow();
	return 0;
}

