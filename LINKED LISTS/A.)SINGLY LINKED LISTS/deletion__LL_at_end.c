#include<stdio.h>
#include<stdlib.h>

struct node{

int data;

struct node*next;
};

int main()
{
 struct node*head=NULL;
 struct node*newnode,*temp;
int choice=1;

while(choice)
{
 newnode=(struct node*)malloc(sizeof(struct node));
 
 printf("enter the data into LL=");
 scanf("%d",&(newnode->data));

 newnode->next=NULL;

 if(head==NULL) //if first element is nulll then automatically will be samme
 {
    head=temp=newnode;
 }
 
else
{
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

printf("linked lists after deletion at end:\n");


/************deletion at ending**********/
struct node*prevnode;
temp=head;

while(temp->next!=NULL) //its reaching to last node
{
prevnode=temp; //before temp element stores here
temp=temp->next;           //traversing till end to finding out
}

prevnode->next=NULL;

temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;

}