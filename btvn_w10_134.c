#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	int tu=1;
	for(int i=0;i<strlen(c);i++){
		if(c[i]==' '){
			tu++;
		}
	}
	printf("%d",tu);
	return 0;
}
