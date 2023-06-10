#include<stdio.h>
#include<string.h>
int main(){
	char a[100], b[100];
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);i++){
		if(a[i]==b[0]){
			char c[100];
			strncpy(c,a+i,strlen(b));
			if(strcmp(b,c)==0){
				for(int j=i;j<i+strlen(b);j++){
					a[j]='-';
				}
			}
		}
	}
	printf("%s",a);
	return 0;
}
