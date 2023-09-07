#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node*prev;
struct  node*next;
}*head,*tail;

int main()
{
int choice=1;

struct node*newnode,*head=NULL;  //first introduce all the varaibles myan;

while(choice)
{

newnode=(struct node*)malloc(sizeof(struct node));

printf("enter the data you want to enter=");
scanf("%d",&(newnode->data));
//newnode->next=NULL;

if(head==NULL)
{
head=tail=newnode;
head->next=head;
head->prev=head;
}

else
{
tail->next=newnode;  //these both we will make a succesfull double chain linking;
newnode->prev=tail;

newnode->next=head;  //circular linked list
head->prev=newnode; //dll linked with previous node
tail=newnode; //mometum of traveral
}


printf("enter the choice(1,0)");
scanf("%d",&(choice));
}
/**************************displaying*********************************/

struct node*temp;
temp=head;

while(temp!=tail)
{
    printf("%d\n",temp->data);
    temp=temp->next;
}
printf("%d \n",temp->data); //last node of circular linked has to be done separately

/**********************inserting at CDLL******************************************************/
struct node*new;

new=(struct node*)malloc(sizeof(struct node));

temp=head;
printf("enter the data required=");
scanf("%d",&(new->data));

new->next=temp;
temp->prev=new;
tail->next=new;
new->prev=tail;

head=new;

temp=head;

while(temp!=tail)
{
    printf("%d\n",temp->data);
    temp=temp->next;
}
printf("%d",temp->data); //last node of circular linked has to be done separately
return 0;

}