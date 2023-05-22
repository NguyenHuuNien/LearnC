#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	int kq=0;
	for(int i=0;i<strlen(c);i++){
		if(c[i]==' '){
			kq++;
		}
	}
	printf("%d",kq);
	return 0;
}
