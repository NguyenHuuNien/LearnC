#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	gets(c);
	char *p=c;
	for(int i=0;i<strlen(c);i++){
		if(*(p+i)==' '&&*(p+i+1)==' '){
			continue;
		}
		else{
			printf("%c",*(p+i));
		}
	}
	return 0;
}
