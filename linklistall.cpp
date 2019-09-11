#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node{
	int info;
	struct node *link;
}*head=NULL;

void insert_last(){
	char ch;
	do{
		struct node *temp, *ptr;
		temp = (struct node *)malloc(sizeof(struct node));
		
		printf("\n enter data=\n");
		scanf("%d",&temp->info);
		
		temp->link=NULL;
		
		if(head == NULL){
			head=temp;
			ptr=temp;
			}
		else{
			//ptr->link=temp;
			//ptr=temp;
			ptr=head;
			while(ptr->link!=NULL){
				ptr=ptr->link;
			}
			ptr->link=temp;
		    }
		printf("do you want to add another=\n");
		ch=getche();		
	}while(ch!='n');
}

void insert_first(){
	char ch;
	do{
		struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		
		printf("\nenter data = \n");
		scanf("%d",&temp->info);
		
		temp->link=head;
		head=temp;
		
		printf("do you want to add another first=\n");
		ch=getche();
	}while(ch!='n');}
	
void insertspecified(){
	char ch;
	do{
		struct node *temp,*ptr;
		int i,n;
		temp=(struct node *)malloc(sizeof(struct node));
		printf("\n Enter Data =\n");
		scanf("%d",&temp->info);
		printf("\nenter pos =\n");
		scanf("%d",&n);
		
		if(n==1){
			temp->link=head;
			head=temp;
					}
		else{
			ptr=head;
			for(i=0;i<n-2;i++){
				ptr=ptr->link;
			}
		temp->link=ptr->link;
		ptr->link=temp;	
		}
		printf("\ndo you want to add another=\n");
		ch=getche();
	}while(ch!='n');
}	
	
void delete_first(){
	struct node *temp;
	if (head==NULL){
		printf("\nList is Already Empty\n");
		}
	else{
		temp=head;
		head=head->link;
		printf("\n Data is Deleted = %d\n",&temp->info);
		free(temp);
		printf("\nSuccessfully Deleted\n");
	}	
}

void delete_last(){
	struct node *temp, *ptr;
	if (head==NULL){
		printf("\nList Is Empty=\n");
		}
	else{
		temp=head;
		ptr=head;
	while(ptr->link!=NULL)	{
		temp=ptr;
		ptr=ptr->link;
	}
	if (ptr==head){
		head=NULL;
	}
	else{
		temp->link=NULL;
	}
	free(ptr);
	printf("\n Last Node is deleted=\n");
	}	
}


void delete_spec(){
	printf("/ndeletion/n");
	int pos,i;
	char ch;
	do{
	
	printf("\nEnter Pos =\n");
	scanf("%d",&pos);
	struct node *temp, *ptr;
	if(head == NULL){
		printf("\n LIST IS EMPTY \n");
			}
	else{
		temp=head;
		ptr=head;
	for(i=2;i<=pos;i++){
		temp=ptr;
		ptr=ptr->link;
		if(ptr==NULL)
		break;
		}
	if(ptr!=NULL){
		if(ptr==head){
			head=head->link;
		}
	temp->link=ptr->link;
	ptr->link=NULL;	
	free(ptr);
	printf("\nsuccessfully deleted\n");}
	else
	{printf("\nINVALID POSITION\n");
	}
	}
	void display();
	printf("\ndo you want to delete another");
	ch=getche();
	}while(ch!='n');			
}
	
void display(){
	struct node *temp;
	printf("\nthe link list is=\n");
	temp=head;
	while(temp!=NULL)
{
	printf("%d\t",temp->info);
	temp=temp->link;
}
printf("\n");
}
int main () {
   int input, data;
   char ch;
   do{
   
   for (;;) {
      printf("1. Insert an element at beginning of linked list.\n");
      printf("2. Insert an element at end of linked list.\n");
      printf("3. Insert at specific position\n");
      printf("4. Delete element from beginning.\n");
      printf("5. Delete element from end.\n");
      printf("6. Delete at specific position\n");
      printf("7. To display\n");
     
      scanf("%d", &input);
     
      if (input == 1) {
         
         insert_first();
         display();
      }
      else if (input == 2) {
        
         insert_last();
         display();
      }
      else if (input == 3)
       {
		  insertspecified();
         display();}
      else if (input == 4)
         {
		 delete_first();  
         display();}
      else if (input == 5)
         {
		 delete_last();
         display();}
      else if (input == 6)
         {
		 delete_spec();
         display();}
      else
         {
		 
		 display();
		 break;
		 return 0;}     
   }
   printf("\nchoose another option?\n");
   ch=getche();
}while(ch!='n');
   return 0;
}
