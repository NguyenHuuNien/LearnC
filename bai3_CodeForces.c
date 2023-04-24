#include<stdio.h>
#include<math.h>
int x[100],y[100];
int n;
const double MAXC = 10000;

void doc(){
	int i;
	for(i=0;i<n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
}

double doDai1Diem(int a){
	return sqrt(pow(x[a],2)+pow(y[a],2));
}

double doDai2Diem(int a,int b){
	return sqrt(pow(x[b]-x[a],2)+pow(y[b]-y[a],2));
}

double tDiem(int a,int b){
	return doDai2Diem(a,b)/2;
}

// tra ve do dai tu trung diem cua a va b den c
double doDai3Diem(int a,int b, int c){
	double x_tdAB = (x[b]+x[a])/2.0;
	double y_tdAB = (y[b]+y[a])/2.0;
	return sqrt(pow(x_tdAB-x[c],2)+pow(y_tdAB-y[c],2));
}

double trongTamTG(int a, int b, int c){
	double x1 = ((pow(x[a],2)+pow(y[a],2))*(y[b]-y[c])+(pow(x[b],2)+pow(y[b],2))*(y[c]-y[a])+(pow(x[c],2)+pow(y[c],2))*(y[a]-y[b]))/(2*(x[a]*(y[b]-y[c])+x[b]*(y[c]-y[a])+x[c]*(y[a]-y[b])));
	double y1 = ((pow(x[a],2)+pow(y[a],2))*(-x[b]+x[c])+(pow(x[b],2)+pow(y[b],2))*(-x[c]+x[a])+(pow(x[c],2)+pow(y[c],2))*(-x[a]+x[b]))/(2*(y[a]*(-x[b]+x[c])+y[b]*(-x[c]+x[a])+y[c]*(-x[a]+x[b])));
	double trongTam = sqrt(pow(x1,2)+pow(y1,2));
	int i=0;
	for(i;i<n;i++){
		if(sqrt(pow(x[i]-x1,2)+pow(y[i]-y1,2))>trongTam){
			return MAXC;
		}
	}
	return trongTam;
}

double minx(double a, double b){
	if(a<b){
		return a;
	}else{
		return b;
	}
}

double check3Diem(int a, int b, int c){
	// la tam duong tron ngoai tiep tam giac
	// truoc tien phai la tam giac da
	double r = MAXC;
	double AB = doDai2Diem(a,b);
	double AC = doDai2Diem(a,c);
	double BC = doDai2Diem(b,c);
	if(AB+AC>BC&&AB+BC>AC&&AC+BC>AB){
		r = trongTamTG(a,b,c);
	}
	// trung diem a,b
	double r1 = tDiem(a,b);
	int i;
	for (i=0;i<n;i++){
		double rb = doDai3Diem(a,b,i);
		if(r1<rb){
			r1 = MAXC;
			break;
		}
	}
	//trung diem a,c
	double r2 = tDiem(a,c);
	for (i=0;i<n;i++){
		double rb = doDai3Diem(a,c,i);
		if(r2<rb){
			r2 = MAXC;
			break;
		}
	}
	// trung diem b,c
	double r3 = tDiem(c,b);
	for (i=0;i<n;i++){
		double rb = doDai3Diem(c,b,i);
		if(r3<rb){
			r3 = MAXC;
			break;
		}
	}
	return minx(minx(minx(r1,r2),r3),r);
}

double check(){
	double minc = MAXC;
	if (n==1){
		return 0;
	}else if(n==2){
		return tDiem(0,1);
	}else{
		int i,j,k;
		for(i=0;i<n-2;i++){
			for(j=i+1;j<n-1;j++){
				for(k=j+1;k<n;k++){
					double ck = check3Diem(i,j,k);
					if(minc>ck){
						minc=ck;
					}
				}
			}
		}
	}
	return minc;
}

int main(){
	scanf("%d",&n);
	doc();
	double kq = check();
	printf("%.3f",kq);
	return 0;
}
