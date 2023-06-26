#include<stdio.h>

typedef struct KhachHang{
	char name[101];
	int yearOfBirth;
	double height;
	double weight;	
}KH;

KH inputInfor(){
	KH a;
	printf("Nhap ten: ");
	gets(a.name);
	do{
		printf("Nhap nam sinh: ");
		scanf("%d",&a.yearOfBirth);
		getchar();
	}while(a.yearOfBirth<1900||a.yearOfBirth>2022);
	do{
		printf("Nhap chieu cao: ");
		scanf("%lf",&a.height);
		getchar();
	}while(a.height<0);
	do{
		printf("Nhap can nang: ");
		scanf("%lf",&a.weight);
		getchar();
	}while(a.weight<0);
	return a;
}

void printKhTrungNien(KH arr[],int n){
	int dem = 0;
	for(int i=0;i<n;i++){
		if((2023 - arr[i].yearOfBirth)>=45&&(2023 - arr[i].yearOfBirth)<=65){
			dem++;
		}
	}
	printf("Co %d khach hang trong do tuoi trung nien",dem);
}

double bmi(double cc, double cn){
	return cn/(cc*cc);
}

void sapXep(KH *arr, int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(bmi(arr[i].height,arr[i].weight)>bmi(arr[j].height,arr[j].weight)){
				KH temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printWithBMI(KH arrKH[]){
	int m;
	printf("\nNhap M (M<=N): ");
	scanf("%d",&m);
	printf("+-----+---------------+----------+------+\n");
	printf("| STT |      Ten      | Nam sinh | BMI  |\n");
	printf("+-----+---------------+----------+------+\n");
	for(int i=0;i<m;i++){
		printf("|%5d|%15s|%10d|%6.2lf|\n",i+1,arrKH[i].name,arrKH[i].yearOfBirth,bmi(arrKH[i].height,arrKH[i].weight));
		printf("+-----+---------------+----------+------+\n");
	}
}

int main(){
	int n;
	printf("Nhap So Luong Khach Hang N = ");
	scanf("%d",&n);
	getchar();
	KH arrKH[n];
	for(int i=0;i<n;i++){
		arrKH[i] = inputInfor();
	}
	printKhTrungNien(arrKH,n);
	sapXep(arrKH,n);
	printWithBMI(arrKH);
	return 0;
}
