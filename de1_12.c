#include<stdio.h>
#include<string.h>
int main(){
	char s[100],sp[100];
	char c[2];
	gets(s);
	gets(c);
	int n=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]==c[0]){
			continue;
		}else{
			sp[n]=s[i];
			n++;
		}
	}
	printf("%s",sp);
	return 0;
}
