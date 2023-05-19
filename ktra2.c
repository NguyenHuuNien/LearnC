#include<stdio.h>

int main(){
	int a[5];
	int i,j;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%d",a[2]);
	return 0;
}
