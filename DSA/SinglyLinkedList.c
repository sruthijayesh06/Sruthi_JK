#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void insertatbeginning(int data){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}
void insertatend( int data){
	struct node* newnode,*temp;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	while (temp->next != NULL){
		temp=temp->next;
	} 
	temp->next = newnode;
}
void insertatpos( int data, int pos){
	struct node* newnode, *temp;
	int i;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=data;
	temp=head;
	for(i=0;i<pos-1 && (temp->next != NULL); i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void length(){
	struct node *temp;
	int count=0;
	temp= head;
	while(temp != NULL){
		temp=temp->next;
		count++;
	}
	printf("There are %d elements in the linked list",count);
}	
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
	insertatbeginning(5);
	insertatend(10);
	insertatpos(300,3);
	length();
	temp=head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
	return 0;
}

