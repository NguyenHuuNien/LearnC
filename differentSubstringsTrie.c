#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int differentSubstringsTrie(char *s){
	char c[100] = " ";
	int dem = 0;
	for(int i=1;i<=strlen(s);i++){
		char q[100];
		for(int j=0;j+i<=strlen(s);j++){
			strncpy(q,s+j,i);
			if(strstr(c,q)==NULL){
				strcat(c,q);
				dem++;
			}
			strcat(c," ");
		}
	}
	return dem;
}

int main(){
	char c[] = "abacaba";
	int kq = differentSubstringsTrie(c);
	printf("%d",kq);
	return 0;
}
