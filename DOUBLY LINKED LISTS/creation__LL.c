/*DOUBLY LINKED LISTS IS ADVANTAGEOUS ITS CAN APPLY TWO SIDES OD LISTS AND CAN ACCESIBLE EASILY
IT HAS DISADVATAGE THAT IT TAKES MORE MEMORY THAN SINGLE LL*/


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

//int choice=1;
                                //we can also the choice also but for is convienit
//while(choice)
int i,n;
printf("number of nodes required=");
scanf("%d",&n);

for(i=0;i<n;i++)
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
/*printf("enter the choice(0,1)=");
scanf("%d",&choice);*/
}
temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}
return 0;

  }











