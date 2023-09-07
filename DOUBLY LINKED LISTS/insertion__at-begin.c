#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node*prev;
struct node*next;
}*head;

int main()
{
struct node*newnode,*temp;

int choice=1;

while(choice)

{
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("enter the data in D linked list=");
    scanf("%d",&(newnode->data));

    newnode->prev=NULL; //already 1 node is created artificially
    newnode->next=NULL;

    if(head==NULL)
    {
    head=temp=newnode;
    }
  else{                   //newnode is the begining 
 
 temp->next=newnode;    
 
 newnode->prev=temp;  //arranging the procedural way of the nodes

 temp=newnode;
  }
printf("enter the choice(0,1)=");
scanf("%d",&choice);
}
temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

/*************************insertion at beggining************************************/
struct node*uninode;

uninode=(struct node*)malloc(sizeof(struct node));

printf("enter the value of data to be inserted=");
scanf("%d",&(uninode->data));

head->prev=uninode;
uninode->next=head;
head=uninode;

temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;

  }