#include<stdio.h>

int snt(int n){
	if(n<2){
		return 0;
	}else if(n<4){
		return 1;
	}else{
		for(int i=2;i*i<n;i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	printf("%d",2072%6);	
}
