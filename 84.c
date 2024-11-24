#include<stdio.h>
#include<string.h>
void main()
{
	int price;
	char book[20], author[30];
	printf("Enter name of the book,author and the price : ");
	scanf("%c%c%d",&book,&author,&price);
	Book(price,author,book);
}
void Book(int price, char author, char book)
{
	printf("The name of the book is : %c0",book);
	printf("The author is :%c",author);
	printf("The price  of the book is : %d",price);
}
	
	
