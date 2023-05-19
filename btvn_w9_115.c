#include<stdio.h>
#include<string.h>

int main(){
	char c[100];
	fgets(c, sizeof(c), stdin);
	char *st=c;
	char *ed=c+strlen(c)-2;
	while(st<ed){
		if(*st!=*ed){
			printf("Khong");
			return 0;
		}
		st++;
		ed--;
	}
	printf("Co");
	return 0;
}
