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


/*inserting a node at the begining*/
struct node*new;

new=(struct node*)malloc(sizeof(struct node));
                                                    //enterring and at the begining
printf("enter the data you want to enter= ");
scanf("%d",&(new->data));

new->next=head;       //main logic for begining
head=new;

temp=head;

while(temp!=NULL)
{
printf("%d \n",temp->data);
temp=temp->next;
}

return 0;

}


/*******************recursion or functions stricly follows*******************************************/


/*#include<stdio.h>
#include<stdlib.h>

//inserting linked lists

struct node{

int data;
struct node *next;
};

void linkedlisttraversal(struct node *ptr) //here ptr is taversal 
{
while(ptr!=NULL)
 {
    printf("value of nodes=%d\n",ptr->data);
    ptr=ptr->next; //movemenet for entering values
 }
}

//inserting at the beggining
struct node*insertatfirst(struct node*head,int value)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));

ptr->next=head;
ptr->data=value;
return ptr;
}

//at index between nodes or else positon
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


//inserting at the end
struct node*insertatend(struct node*head,int value)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));
struct node*temp=(struct node*)malloc(sizeof(struct node));

temp=head;//for travelling purpose

while(temp->next!=NULL) //for moving till index or position
{
temp=temp->next;
}

temp->next=ptr;

ptr->data=value;
ptr->next=NULL;
}
//isnserting after the node

struct node*insertafternode(struct node*head,struct node*prevnode,int value)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node));

ptr->data=value;
ptr->next=prevnode->next;
prevnode->next=ptr;


return head; //return head will gives you the values from starting to ending
}

int main()
{
struct node*second=NULL;
struct node*head=NULL;
struct node*third=NULL;



head=(struct node*)malloc(sizeof(struct node));

second=(struct node*)malloc(sizeof(struct node));

third=(struct node*)malloc(sizeof(struct node));


head->data=7;
head->next=second;

second->data=14;
second->next=third;

third->data=45;
third->next=NULL;

//inserting element


linkedlisttraversal(head);
//after insertion

printf("\n");

//head=insertatfirst(head,5);

//head=insertatindex(head,5,1);

//head=insertatend(head,95);

head=insertafternode(head,second,34); //inserted after second position myan
linkedlisttraversal(head);

return 0;

}
*/