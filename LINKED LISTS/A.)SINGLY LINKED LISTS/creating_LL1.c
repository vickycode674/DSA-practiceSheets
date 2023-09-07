
/////////////////**2nd type of creation************************************\
/*#include<stdio.h>
#include<stdlib.h>

struct node{

int data;                  //creating structure

struct node *next;
};

struct node * createlinkedlist(int n);  //function 1 is created

void displaylist(struct node *head); //function 2

int main()
{
int n;
struct node *head=NULL;

printf("enter the number of nodes required=");
scanf("%d",&n);

head=createlinkedlist(n);     //main one to relate(broker)

displaylist(head);            //main source to output

return 0;

}

struct node *createlinkedlist(int n)
{
int i=0;
struct node *head=NULL;
struct node *p=NULL;    //crearing these varible like int n for using further
struct node *temp=NULL;

for(i=0;i<n;i++)  //itteration for adding and moving values
{
   //game begins creating nodes individually
   temp=(struct node*)malloc(sizeof(struct node)); //allocating memory

   printf("enter the value of data in node %d=",i+1);
   scanf("%d",&(temp->data));
   temp->next=NULL;

//if provided is single or if long node
   if(head==NULL)
   {
   head=temp;
   }

//main formula of expanding nodes
   else
   {  p=head; //temporoary attchement
      while(p->next!=NULL)
      p=p->next;
      p->next=temp;  //here temp=tail
   

   }
}

return head;  //again tracing back to its position

}

void displaylist(struct node *head) //printng function
{
struct node *p=head; //ITS like vreating variable again again

while(p!=NULL)
 {
printf("\t%d",p->data);
p=p->next;
 }

}
/*

#include<stdio.h>
#include<stdlib.h>

//inserting linked list at beginning of node

struct node{

int data;                         //creating  a node
struct node *next;
};

void linkedlisttraversal(struct node *ptr) //here ptr is used as taversal a d take head as starter
{
while(ptr!=NULL)
 {
    printf("value of nodes=%d\n",ptr->data);
    ptr=ptr->next;
 }
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

linkedlisttraversal(head);  //refering to the ptr myan
return 0;

}
*/