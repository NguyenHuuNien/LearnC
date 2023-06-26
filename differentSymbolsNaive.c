#include<stdio.h>

int differentSymbolsNaive(char *s){
	int arr[127];
	for(int i=0;i<127;i++){
		arr[i] = 0;
	}
	int dem = 0;
	for(int i=0;i<strlen(s);i++){
		int a = (int)s[i];
		if(arr[a]==0){
			arr[a]++;
			dem++;
		}
	}
	return dem;
}

int main(){
	char c[] = "bcaba";
	printf("%d",differentSymbolsNaive(c));
	return 0;
}
