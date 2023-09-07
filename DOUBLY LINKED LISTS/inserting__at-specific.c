
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
                                //we can also the choice also but for is convienit
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


/***********inserting at specific position********************/
 
 struct node*uninode,*nextnode;

uninode=(struct node*)malloc(sizeof(struct node));
int pos,i;
printf("enter the position=");
scanf("%d",&pos);

printf("enter the value of data to be inserted=");
scanf("%d",&(uninode->data));

for(i=0;i<(pos-1);i++)
{
temp=temp->next;
}
printf("%d",temp);
//calmy wha all are available just take
nextnode=temp->next;

uninode->prev=temp;
uninode->next=nextnode;  //code is correct running problem

temp->next=uninode;
nextnode->prev=uninode;

temp=head;
   /*uninode->next->prev=uninode;  triple points are affecting varios */

//temp = head;                                              
while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;

}

