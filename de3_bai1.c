#include<stdio.h>

void nhap(char c[]){
	do{
		gets(c);
		int dk1 = 0, dk2 = 0;
		for(int i=0;i<strlen(c);i++){
			if(isupper(c[i])){
				dk1 = 1;
			}else if(isdigit(c[i])){
				dk2 = 1;
			}
		}
		if(strlen(c)>=6&&(c[0]!='P'||c[0]!='p')&&dk1&&dk2){
				break;
		}
	}while(1);
}

void thongKe(char c[]){
	int cc = 0, cs = 0;
	for(int i=0;i<strlen(c);i++){
		if(isdigit(c[i])){
			cs++;
		}else if(isalpha(c[i])){
			cc++;
		}
	}
	printf("Co %d chu cai, %d so",cc,cs);
}

void delSpec(char c[]){
	int i,j;
	for(i=0;i<strlen(c);i++){
		if(!isdigit(c[i])&&!isalpha(c[i])){
			for(j=i;j<strlen(c)-1;j++){
				c[j] = c[j+1];
			}
			c[j] = '\0';
		}
	}
}


int main(){
	char c[100];
	nhap(c);
	thongKe(c);
	delSpec(c);
	printf("\nstring ket qua sau khi xoa ky tu dac biet: %s",c);
	return 0;
}
