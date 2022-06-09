#include<stdio.h>
#include<stdlib.h>
struct node{
	int value;
	struct node *next;
};
struct node *head,*newnode,*temp,*del;
int position=0,choice=0,i,cou=0;
//-------COUNT FUNCTION---------------------------------------------------------
int count(){
	int count=1;
	temp=head;
	while(temp->next!=0){
		count++;
		temp=temp->next;
	}
	return count;
}
void create(){
	newnode=(struct node*)malloc(sizeof(struct node));
				printf("enter a value");
				scanf("%d",&newnode->value);
				newnode->next=0;
				if(head==0){
					head=temp=newnode;
				}
				else{
				temp->next =newnode;
				temp=newnode;
				}
}
//----------INSERT BEGIN--------------------------------------------------------
void inbegin(){
	if(head!=0){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the Insert Value");
	scanf("%d",&newnode->value);
	newnode->next=head;
	head=newnode;
}
else
printf("Thalaiva  list is empty go to click normal insert");
}
//---------INSRT INTERMIDIARY-----------------------++++++++++++++++++++++++++++++++++++++++++++
void inbetween(){
	if(head!=0){
	cou=count();
	printf("Please Enter your position 1-%d",cou);
	scanf("%d",&position);
if(position>cou)
printf("\n Thalaiva total position is %d your position not accepted ",cou);
else{
    temp=head;
    i=1;
    while(i<position){
		temp=temp->next;
		i++;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the Insert value");
	scanf("%d",&newnode->value);
	newnode->next=temp->next;
	temp->next=newnode;
}	
}
else
printf("list is Empty");
}
//--------------INSERT LAST---------------------------------------------------------------------------------
void inlast(){
	if(head!=0){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the Insert value");
		scanf("%d",&newnode->value);
		newnode->next=0;
		temp=head;
	while(temp->next!=0){
	temp=temp->next;
}
	temp->next=newnode;
}
}
//-------------DELETE BEGIN-----------------------------------------------------------------------
void deletebegin(){
	if(head==0){
		printf("The list is Empty");
	}else if(count()==1){
		printf(" %d is Deleted and Now list is Empty",head->value);
		printf("\n List count is %d",count()-1);
		head=0;
	}
	else{
		temp=head;
		head=temp->next;
		printf("%d is deleted",temp->value);
	}
}
//------------DELETE LAST--------------------------------------------------------
void deletelast(){
    if(head ==0){
        printf("The list is Empty");
    }
    else{
        temp=head;
        while(temp->next!=0){
            del=temp;
	        temp=temp->next;
	       }
	   del->next=0;  
	   printf(" The Element is %d deleted",temp->value);
    }
}
void deletemiddle(){
	int t,i=0;
	if(head==0)
		printf("The list is Empty");
	else{
		cou=count();
		printf("Enter your poistion 1-%d",cou);
		scanf("%d",&t);
		if(cou>t){
			temp=head;
			while(temp->next!=0 && i<t){
				del=temp;
				temp=temp->next;
				i++;
			}
			del->next=temp;
		}
		else
		printf("can't delete");
	}
}
//------------------INSERT---------------------------------------------------------------
void insert(){
	int a=0;
	printf("\n 1.Insert in begin \n 2.middle \n 3.last\n\n which type of insert operation ");
	printf("\n Enter insert Operation");
	scanf("%d",&a);
	switch(a){
		case 1:
			inbegin();
			break;
		case 2:
			inbetween();
			break;
		case 3:
			inlast();
			break;
		default:
			printf("Enter a valid choice");
			break;
	}
}
//----------------DELETE----------------------------------------------------
void delet(){
	printf("Which Delete operation");
	printf("\n1.delete begin \n2.delete last \n 3.Middle \n Enter Delete operation");
	int a=0;
	scanf("%d",&a);
	switch(a){
		case 1:
		deletebegin();
		break;
		case 2:
			deletelast();
			break;
		case 3:
			deletemiddle();
			break;
		default:
			printf("Enter the correct value");
			break;
	}
}
//----------------DISPLAY-----------------------------------------------------------
void display(){
    temp=head;
	while(temp!=0){
	printf("%d ",temp->value);
	temp=temp->next;
}
}
//----------------MAIN FUNCTION--------------------------------------------------------------
void main(){
head=0;
choice=0;
printf("Operations\n 1.create\n 2.Insert  \n 3.Delete \n 4.display \n 5.exit");
while(choice!=5){
	printf("\n--------Enter your choice---------:");
	scanf("%d",&choice);
	if(choice==1)
	create();
	else if(choice==2)
	insert();
	else if(choice==3)
	delet();
	else if(choice==4)
	display();
	else{
	if(choice==5)
	printf(" linked list  Exited !!! @ All credits for Jenny");
}
}
}
