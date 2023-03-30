#include<stdio.h>

int main(){
	int n,j;
	scanf("%d",&n);
	int i=1;
	do{
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
		i++;
		if(i>n){
			break;
		}
	}
	while(i>0);
	do{
		for(j=i-1;j>=1;j--){
			printf("*");
		}
		if(i-2>=0) printf("\n");
		i--;
	}
	while(i>=0);
	
	int k=1;
	int m=1;
	while(k<=n){
		for(i=0;i<n-1;i++){
			printf(" ");
		}
		for(i=1;i<=m;i++){
			printf("*");
		}
		for(i=0;i<n-1;i++){
			printf(" ");
		}
		n=n-1;
		printf("\n");
		m+=2;
	}
	
	
	return 0;
}
