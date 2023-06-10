#include<stdio.h>
#include<string.h>
void cau11(char a1[], char b1[]){
	int i,j;
	for(i=0;i<strlen(a1);i++){
		if(a1[i]==b1[0]){
			char c1[100];
			strncpy(c1,a1+i,strlen(b1));
			if(strcmp(b1,c1)==0){
				for(j=i;j<i+strlen(b1);j++){
					a1[j]='-';
				}
			}
		}
	}
	printf("%s\n",a1);
	char c = '-';
	cau12(a1,c);
}

void cau12(char s1[], char c1){
	int n=0;
	int i;
	char sp[100];
	for(i=0;i<strlen(s1);i++){
		if(s1[i]==c1){
			continue;
		}else{
			sp[n]=s1[i];
			n++;
		}
	}
	sp[n] = '\0';
	printf("%s",sp);
}

int main(){
	char a[100], b[100];
	gets(a);
	gets(b);
	cau11(a,b);
	return 0;
}
