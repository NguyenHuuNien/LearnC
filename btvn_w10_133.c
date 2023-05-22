#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	gets(c);
	for(int i=strlen(c)-1;i>=0;i--){
		if(c[i]==' '){
			for(int j=i+1;j<strlen(c);j++){
				printf("%c",c[j]);
			}
			break;
		}
	}
	return 0;
}
