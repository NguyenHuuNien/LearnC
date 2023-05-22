#include<stdio.h>
#include<string.h>
int main(){
	char s_mahoa[100], s_giaima[100];
	int n;
	gets(s_mahoa);
	gets(s_giaima);
	scanf("%d",&n);
	// ma hoa
	for(int i=0;i<strlen(s_mahoa);i++){
		if((int)s_mahoa[i]+n>122){
			s_mahoa[i] = (char)((int)s_mahoa[i]+n-26);
		}else{
			s_mahoa[i] = (char)(int)s_mahoa[i]+n;
		}
	}
	// giai ma
	for(int i=0;i<strlen(s_giaima);i++){
		if((int)s_giaima[i]-n<97){
			s_giaima[i] = (char)((int)s_giaima[i]-n+26);
		}else{
			s_giaima[i] = (char)(int)s_giaima[i]-n;
		}
	}
	printf("%s\n",s_mahoa);
	printf("%s",s_giaima);
	return 0;
}
