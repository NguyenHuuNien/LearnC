#include<stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tich = a*b;
	if(a<b){
		int temp = a;
		a = b;
		b = temp;
	}
	while(b>0){
		int r = a%b; // r=0
		a = b; //a=3
		b = r; // b=0
	}
	printf("%d",tich/a);
}
