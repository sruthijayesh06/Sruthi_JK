#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
}; 
struct node *head, *newnode, *temp;
void insertatend(int data){
	temp=head;
	while (temp->next != head){
		temp=temp->next;
	}	
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	temp->next=newnode;
}
/*
void insertatbeginning(int data){
	newnode=(struct node*)malloc(sizeof(struct node));
	temp=head;
	newnode->data=data;
	while (temp->next != head){
		temp=temp->next;
	}
	newnode->next=head;
	head=newnode;
	temp->next=head;
}*/
int main(){
	struct node *newnode,*temp;
	int data,n,i;
	printf("Enter the no of elements to be inserted : ");
	scanf("%d",&n);
	head=NULL;
	for (i=0;i<n;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data to be stored : ");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if (head==NULL){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
	}
	temp->next=head;
	temp=head;
	insertatend(500);
	insertatbeginning(600);
	while(temp->next != head){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
