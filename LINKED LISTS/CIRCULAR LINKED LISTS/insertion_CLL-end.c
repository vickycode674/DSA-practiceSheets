//circular linked lists using tail

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


/********************insertion at ending*************************************/

struct node*newbeg; //compu anna nodu
newbeg=(struct node*)malloc(sizeof(struct node));

printf("enter the data to enter=");
scanf("%d",&(newbeg->data));

newbeg->next=tail->next;
tail->next=newbeg;
tail=newbeg;

printf("first element in inserting at ending:\n");

printf("%d",tail->next->data);

printf("circular linked lists after insertion:\n");
temp=tail->next;

while(temp->next!=tail->next)   
{
printf("%d\n",temp->data);
temp=temp->next;
} 
printf("%d",temp->data);  //here tail ->next is symbolicaly first node/head
return 0;

}