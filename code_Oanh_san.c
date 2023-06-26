#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct CUA_HANG {
	char ma[11];
	char diachi[31];
	int nhanvien;
	long doanhso;
	
}CH;
void nhap_ma(char m[]){
	int k=0;
	gets(m);
	do{
	for(int i=0; i<strlen(m);i++){
		if(isalpha(m[i])==0  && isdigit(m[i]) ==0){
			k=1;
			break;
		}
	}
    }while(k!=0);
	
}
CH nhap(){
	    CH a;
	    
		gets(a.diachi);
		nhap_ma(a.ma);
		scanf("%d",&a.nhanvien);
		scanf("%ld",&a.doanhso);
		getchar();
		return a;
		
}

int cmp(const void*a, const void *b){
	CH *x= (CH*)a;
	CH *y=(CH*)b;
	if(x->doanhso < y->doanhso){
		return 1;
	}else{
		return -1;
	}
}
void in(CH danhsach[], int n){
	printf("+-----+------+-------------+------------+------------+\n");
	printf("| STT | MaCH | So nhan vien| Doanh so   | Dia chi    |\n");
	printf("+-----+------+-------------+------------+------------+\n");
	for(int i=0; i<n; i++){
		printf("|%5d|%6s|%13d|%12ld|%12s|\n",i+1,danhsach[i].ma,danhsach[i].nhanvien,danhsach[i].doanhso,danhsach[i].diachi);
	}
}
int main(){
	int n; 
	scanf("%d",&n);
	getchar();
	CH danhsach[1000];
	for(int i=0; i<n; i++){
		danhsach[i]=nhap();
	}
	qsort(danhsach,n,sizeof(CH),cmp);
	in(danhsach,n);
}
