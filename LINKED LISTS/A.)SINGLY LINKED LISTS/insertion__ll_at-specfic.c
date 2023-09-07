#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;   //creating pointers
};

int main()
{
struct node *head=NULL;
struct node *temp,*newnode; //referiing with sing;e node

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

//insertion at specific position
struct node*new;

new=(struct node*)malloc(sizeof(struct node));

int i,pos;

printf("enter the position=");
scanf("%d",&pos);

printf("enter the data to insert=");
scanf("%d",&(new->data));

temp=head;
for(i=0;i<(pos-1);i++)
{
    temp=temp->next;
}

new->next=temp->next; //still node is not created so temp of next is better

temp->next=new; //other second linking the node

temp=head;  //here temp value refreshes so there is no worry at all

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;

}
/******recursion
 * //at index between nodes or else positon
struct node*insertatindex(struct node*head,int value,int index)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));

struct node*p=head;
int i=0;

while(i!=index-1)
{
p=p->next; //this is jumping to next one
i++;
}

ptr->data=value;
ptr->next=p->next;
p->next=ptr;
}
*/