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
int count=0;
while(temp!=NULL)
{
printf("%d \n",temp->data);
count+=1;
temp=temp->next;

}

printf("the the length of linked lists=%d",count);


//reversing the linked lists
struct node*prevnode,*currentnode,*nextnode;

prevnode=NULL;
currentnode=nextnode=head;

while(nextnode!=NULL)
{
nextnode=nextnode->next;

currentnode->next=prevnode; //this make the head->next=null as prev=null

prevnode=currentnode;

currentnode=nextnode;

}
head=prevnode;

temp=head;        //pavam dont know what top print
printf("the reversed linked list=\n");
while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}


}