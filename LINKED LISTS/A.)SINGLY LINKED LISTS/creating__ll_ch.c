#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;   //creating pointers
};

int main()
{
struct node *head=NULL;
struct node*temp,*newnode; //referiing with sing;e node

int choice=1;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node)); //allocating memory by using the memory allocation

printf("enter the data required=");
scanf("%d",&(newnode->data));

newnode->next=NULL;

if(head==NULL)
{
head=temp=newnode; //here temp is temprory variable for travelling
}   

else{
temp->next=newnode;
temp=newnode;
}

printf("do you want to continue then press (0,1)");
scanf("%d",&choice);

}
temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}


/*inserting a node at the begining*/
struct node*new;

new=(struct node*)malloc(sizeof(struct node));

printf("enter the data you want to enter= ");
scanf("%d",&(new->data));

new->next=head;
head=new;

temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;

}