#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node*prev;
struct node*next;
}*head;

int main()
{
struct node*newnode,*temp,*tail;

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

printf("after deletion st first: \n");
/******************deletion at the begining*************************/
temp=head;

head=head->next;
head->prev=NULL;

temp->next=NULL;

temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}


printf("after deleting at end :\n");
/*****************************deletion at ending***********************************/
temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}

temp->next=tail;

tail->prev=NULL;
free(tail);

temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;
}