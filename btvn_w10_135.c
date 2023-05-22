#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	char b,t;
	gets(c);
	scanf("%c\n",&b);
	scanf("%c",&t);
	for(int i=0;i<strlen(c);i++){
		if(c[i]==b){
			c[i]=t;
		}
	}
	printf("%s",c);
	return 0;
}
