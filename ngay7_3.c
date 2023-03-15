#include<stdio.h>

/*
void main()
{
// cac loai dinh dang bien:
	printf( "%d\n", 455 );
	printf( "%i\n", 455 );//i giong nhu d
	printf( "%d\n", +455 );
	printf( "%d\n", -455 );
	printf( "%hd\n", 32000 );
	printf( "%ld\n", 2000000000 );
	printf( "%o\n", 455 );
	printf( "%u\n", 455 );
	printf( "%u\n", -455 );
	printf( "%x\n", 455 );
	printf( "%X\n", 455 );
	printf( "%e\n", 1234567.89 );
	printf( "%e\n", +1234567.89 );
	printf( "%e\n", -1234567.89 );
	printf( "%E\n", 1234567.89 );
	printf( "%f\n", 1234567.89 );
	printf( "%g\n", 1234567.89 );
	printf( "%G\n", 1234567.89 );
}
*/
/*
int main(){
	printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23); // dinh dang can le trai (tu phai sang)
	printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23); // dinh dang can le phai(tu trai sang)
}
*/
/*
// test %n ket hop voi printf co &y
int main(){
	int x=12345, y;
	int *ptr;
	ptr = &x;
	printf( "The value of ptr is %p\n", ptr );
	printf( "The address of x is %p\n\n", &x );
	printf("Total characters printed on this line is:%n",&y );
	printf(" %d\n\n", y);
	return 0;
}
*/
/*
int main(){
	int i = 873;
	double f = 123.94536;
	char s[] = "Happy Birthday";
	printf( "Using precision for integers\n" );
	printf( "\t%.4d\n\t%.9d\n\n", i, i );
	printf( "Using precision for floating-point numbers\n" );
	printf( "\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f );
	printf( "Using precision for strings\n" );
	printf( "\t%.11s\n", s );
	return 0;
}
*/
/*
// bai tap 3.2
int main(){
	float x = 1.034;
	printf("%.3f\n",x);
	printf("%.5f\n",x);
	printf("%10.3f",x);
}
*/
/*
int main(){

	printf(" THE SIZE OF BASIC DATA TYPES\n\n");

	printf("int %d\n",sizeof(int));
	printf("short int %d\n",sizeof(short int));
	printf("long int %d\n",sizeof(long int));
	printf("unsigned int %d\n",sizeof(unsigned int));
	printf("unsigned short %d\n",sizeof(unsigned short));
	printf("unsigned long %d\n",sizeof(unsigned long));	

}
*/
/*
#include <conio.h>
#include <stdio.h>
int main()
{
// khai bao bien
int a;
float x;
char ch;
char str[30];

printf("Nhap vao mot so nguyen: ");
scanf("%d",&a);
printf("\n Nhap vao mot so thuc: ");
scanf("%f",&x);
printf("\n Nhap vao mot ki tu: ");
//fflush(stdin); 
//getchar();
scanf("%c",&ch);
printf("\n Nhap vao mot xau ki tu: ");
//fflush(stdin); 
//getchar();
scanf("%s",str);

printf("\n Nhung du lieu vua nhap vao: ");
printf("\n So nguyen: %d",a);
printf("\n So thuc : %.2f",x);
printf("\n Ki tu: %c",ch);
printf("\n Xau ki tu: %s",str);
return 0;
}
*/
int main(){
	char s[100];
	//scanf("%s",&s);
	gets(s);
	printf("Da nhap vao: %s",s);
	return 0;
}
