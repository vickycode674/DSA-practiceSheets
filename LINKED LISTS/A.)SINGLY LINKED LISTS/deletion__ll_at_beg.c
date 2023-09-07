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
 
 printf("enter the data into ll=");
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

printf("linked lists after deletion:\n");
/*********deletion at the beggining ***************************/
temp=head;

head=head->next;

temp->next=NULL;

temp=head;
while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}
return 0;

}