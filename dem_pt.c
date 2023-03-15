#include<stdio.h>
#include<string.h>
int main(){
	char c;
	c = getchar();
	char s[100];
	getchar();
	fgets(s,100,stdin);
	int cout=0;
	int length = strlen(s);
	for (int i = 0; i<length; i++){
		if (s[i] == c){
			cout++;
		}
	}
	printf("%d",cout);
	return 0;
}
