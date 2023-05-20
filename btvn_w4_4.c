#include<stdio.h>
 
int main(){
	char title[40],isbn[25];
	int price, quantity,total;
	const double vat = 5;
	//----------------
	gets(title);
	scanf("%d",&price);
	scanf("%d\n",&quantity);
	//fflush(stdin);
	gets(isbn);
	//----------------
	total = price * quantity;
	double pay = total+((total * vat)/100);
	printf("BK Bookseller\n");
	printf("\n");
	printf("Qty     ISBN    Title           Price   Total\n");
	printf("----------------------------------------------\n");
	printf("%d       %s     %s  %d     %d\n",quantity,isbn,title,price,total);
	printf("\n");
	printf("VAT 5%%\n");
	printf("You pay: %.2f",pay);
	return 0;
}
