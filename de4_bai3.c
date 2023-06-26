#include<stdio.h>

void nhap(int *a, int m, int n){
	int i=0,j=0;
	do{
		printf("Nhap phan tu (%d,%d) = ",i,j);
		scanf("%d",(a+i*n+j));
		j++;
		if(j==n){
			i++;
			j=0;
		}
	}while(i<m);
	printf("\n");
}

int snt(int n){
	if(n<2){
		return 0;
	}else if(n<4){
		return 1;
	}else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

void printPrimeInArray(int *a,int m, int n){
	int isPrime = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(snt(*(a+i*n+j))){
				printf("phan tu tai vi tri (%d,%d) = %d la so nguyen to\n",i,j,*(a+i*n+j));
				isPrime = 1;
			}
		}
	}
	if(!isPrime){
		printf("khong co phan tu nao cua mang la so nguyen to!");
	}
	printf("\n");
}

void printArray(int *a,int m, int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",*(a+i*n+j));
		}
		printf("\n");
	}
}

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m][n];
	nhap((int*)a,m,n);	
	printPrimeInArray((int*)a,m,n);
	printArray((int*)a,m,n);
	return 0;
}
