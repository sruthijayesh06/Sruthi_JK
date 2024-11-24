#include<stdio.h>
int main(){
	char a;
	printf("Enter charecter : ");
	scanf("%c",&a);
	char L=(a>='a'&&a<='z')?printf("It is a small letter"):printf("It is a capital letter");	
}
