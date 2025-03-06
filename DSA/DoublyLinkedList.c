#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head, *newnode, *tail, *temp;
void insertatbeginning(int data){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	newnode->prev=NULL;
	head=newnode;
}void insertatend(int data){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;
}
void insertatpos(int data,int pos){
	newnode=(struct node*)malloc(sizeof(struct node));
	int i;
	newnode->data=data;
	temp=head;
	for (i=1;i<pos-1&&temp->next != NULL;i++){
		temp=temp->next;
	}
	if (temp->next == NULL){
		insertatend(data);
	}
	newnode->next=temp->next;
	newnode->prev=temp;
	temp->next=newnode;
	newnode->next->prev=newnode;
}
void deletebeginning(){
	temp=head;
	head=head->next;
	free(temp);
	head->prev=NULL;
}
void deleteend(){
	temp=tail;
	tail=tail->prev;
	free(temp);
	tail->next=NULL;
}
void deletespec(int data){
	temp=head;
	while(temp!=NULL){
		if (temp->data == data){
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			free(temp);
			break;
		}
		temp=temp->next;
	}
	
}
int main(){
	int i,no,data;
	printf("Enter how many elements : ");
	scanf("%d",&no);
	head=tail=NULL;
	for (i=0;i<no;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data to be inserted : ");
		scanf("%d",&data);
		newnode->data=data;
		if(head==NULL){
			head=tail=newnode;
			newnode->prev=NULL;
		}
		else{
			newnode->prev=tail;
			tail->next=newnode;
			newnode->next=NULL;
			tail=newnode;
		}
	}
	insertatbeginning(5);
	insertatend(10);
	insertatpos(5,3);
	temp=head;
	while (temp != NULL){
		printf("%d <=> ",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	deletebeginning();
	deleteend();
	deletespec(3);

	temp=head;
	while (temp != NULL){
		printf("%d <=> ",temp->data);
		temp=temp->next;
	}
	printf("NULL");
}
