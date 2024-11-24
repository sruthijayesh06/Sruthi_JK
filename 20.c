#include<stdio.h>
int main() {
	int a,b;
	unsigned char c;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Enter the operation to be used : ");
	scanf("%c",&c);
	int m;
	switch(c) {
		case '+' :
			m=a+b;
			printf("%d+%d=%d",a,b,m);
			break;
		case '_' :
			m=a-b;
			printf("%d-%d=%d",a,b,m);
			break;
		case '*' :
			m=a*b ;
			break;
			printf("%d*%d=%d",a,b,m);
		case '/' :
			m=a/b ;
			break;
			printf("%d/%d=%d",a,b,m);
		default :
			printf("\nWrong operator");
	}
}
