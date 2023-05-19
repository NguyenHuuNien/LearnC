#include<stdio.h>
//int n;
//int a[];
double gtriAm(int b[],int n){
	int i;
	int sum=0;
	int dem=0;
	for(i=0;i<n;i++){
		if (b[i]<0){
			sum+=b[i];
			dem++;
		}
	}
	return (sum*1.0/dem);
}

double gtriDuong(int b[],int n){
	int i;
	int sum=0;
	int dem=0;
	for(i=0;i<n;i++){
		if (b[i]>0){
			sum+=b[i];
			dem++;
		}
	}
	return (sum*1.0/dem);
}

void searchArr(int b[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(b[i]==x){
			printf("%d ",i+1);
		}
	}
}

int main(){
	int i;
	int n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	// in cac phan tu cua mang
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	double kqAm = gtriAm(a,n);
	double kqDuong = gtriDuong(a,n);
	printf("%f\n",kqAm);
	printf("%f\n",kqDuong);
	searchArr(a,n,x);
	
	return 0;
}
