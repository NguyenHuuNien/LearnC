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
		int r = a%b;
		a = b;
		b = r;
	}
	printf("%d",tich/a);
}
