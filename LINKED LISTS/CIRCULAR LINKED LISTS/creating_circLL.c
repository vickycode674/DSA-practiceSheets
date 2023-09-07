#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node*next;
}*head;

int main()
{
struct node*newnode,*temp;

int choice=1;

while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));

printf("enter the data for the node=");
scanf("%d",&(newnode->data));
newnode->next=NULL;

if(head==NULL)
{
head=temp=newnode;
temp->next=newnode;
}

else
{
newnode->next=head;
temp->next=newnode;  //loop moving forward..
temp=newnode;
}

//tail->next=head; //[CIRCULAR LINKED LIST LINKAGE MASSY]

printf("enter the choice(0,1)");
scanf("%d",&choice);
}

temp=head;

while(temp->next!=head)
{
printf("%d \n",temp->data); //this will be printed till end but premeire begins soon
temp=temp->next;
}

printf("%d",(temp->data));


return 0;

}






/***********************************circular linked lists using tail***********************************/
#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node*next;
}*tail;

int main()
{
struct node*newnode;
tail=NULL;

int choice=1;

while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));

printf("enter the data for the node=");
scanf("%d",&(newnode->data));
newnode->next=NULL;

if(tail==NULL)
{
tail=newnode;
tail->next=newnode;
}

else
{
newnode->next=tail->next;          //at starting tail->next=itself node;
tail->next=newnode;  //loop moving forward..
tail=newnode;
}

//tail->next=head; //[CIRCULAR LINKED LIST LINKAGE MASSY]

printf("enter the choice(0,1)");
scanf("%d",&choice);
}

/*displaying linked lists*/
struct node*temp;  //structure created to store first expression

temp=tail->next;
while(temp->next!=tail->next)   //here tail ->next is symbolicaly first node/head
{
printf("%d\n",temp->data);
temp=temp->next;
}    

//now temp has reached to tail by traversal

printf("%d\n",temp->data);

return 0;

}