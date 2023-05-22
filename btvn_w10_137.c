#include<stdio.h>

int main(){
	char dTrai[100], dPhai[100];
	gets(dTrai);
	gets(dPhai);
	for(int i=1;i<strlen(dTrai);i++){
		printf("%c",dTrai[i]);
	}
	printf("%c\n",dTrai[0]);
	printf("%c",dPhai[strlen(dPhai)-1]);
	for(int i=0;i<strlen(dPhai)-1;i++){
		printf("%c",dPhai[i]);
	}
	return 0;
}
