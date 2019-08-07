#include<stdlib.h>
#include<conio.h>
#include<stdio.h>

struct node{
	int info;
	struct node *link;
};
void fun(int);
void display();

typedef struct node dnode;
dnode *head, *ptr, *temp;

int main()
{
	int loop=1;
	int data;
	
	
	printf("singly linked list\n");
	while(loop){
		printf("\n enter element to insert (-1 to exit):\n");
		scanf("%d",&data);
		if(data>=0){
			fun(data);
		}
		else{
			loop=0;
			temp->link=0;
		}
		
		}
		
		display();
		return 0;
		}
void fun(int data){
	temp=(dnode *)malloc(sizeof(dnode));
	temp->info=data;
	if(ptr==NULL){
		ptr=temp;
	}
	else{
		head->link=temp;}
		head=temp;
	}
	
	
	
void display(){
	int count=0;
	temp=ptr;
	printf("\n display linkedlist\n");
	while(temp!=NULL){
		printf("-%d-",temp->info);
		count++;
		temp=temp->link;
	}
	printf("\n no of items in linkedlist:-  %d",count);
	}
	
