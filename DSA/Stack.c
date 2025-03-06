#include<stdio.h>
int stack[5];
int top=-1;
void push(){
	int data;
	printf("Enter data to be pushed into the stack : ");
	scanf("%d",&data);
	if (top==4){
		printf("Stack overflow");
		return;
	}
	else{
		top++;
		stack[top]=data;
	}
}
void pop(){
	int dup;
	if (top==-1){
		printf("stack underflow");
		return;
	}
	else{
		printf("The popped value is : %d",stack[top]);
		top--;
	}
	
}
void peek(){
	if (top==-1){
		printf("stack underflow");
		return;
	}
	else{
		printf("topmost element is : %d",stack[top]);
	}
}
void display(){
	int i;
	if (top==-1){
		printf("stack underflow");
		return;
	}
	for (i=4;i>=0;i++){
		printf("%d\n",stack[i]);
	}
}
int main(){
	int no, i;
	printf("Enter how many integers to push : ");
	scanf("%d",&no);
	for (i=0;i<no;i++){
		push();
	}
	display();	
}
