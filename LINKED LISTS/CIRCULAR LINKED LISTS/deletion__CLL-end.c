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

/***************************deleting at the end***********************************/
printf("elements after delting at the end:\n");
temp=tail->next;

while(temp->next!=tail)
{
temp=temp->next;
}

temp->next=tail->next; //connected to head node
tail->next=NULL;
tail=temp;

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