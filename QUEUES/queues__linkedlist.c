/* SAME LIKE STANDING FOR A MOVIE QUEUE FOR BUYING TICKETS**/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{

int data;
struct node*next;
}*temp,*new;

struct node*front=NULL;
struct node*rear=NULL;

void enqueue();
void dequeue();
void display();

int main()
{
int ch;

while(ch!=4)  //here tilll we enter less than three it will repeat bro
 {
  printf("\n1.enqueue\n2.dequeue\n3.display\n");
  printf("enter the required choice(1,2,3)=");
  scanf("%d",&ch);

     switch (ch)
     {
     case 1:enqueue();
            break;

     case 2:dequeue();
            break;

     case 3:display();
            break;       

     }
  getch();
 
 }

}

void enqueue()
{
  int ele;
  new=(struct node*)malloc(sizeof(struct node));

  printf("enter the required to enter=");
  scanf("%d",&ele);

  new->data=ele;
  new->next=NULL;

if(rear==NULL)  //we have to check if its first element or not
 {
  front=new;
  rear=new;
 }

else
  {
    rear->next=new;  //linking list with new one and insertion at rear 
    rear=new; //moving to further more forward
  }

}


void dequeue() //it follows FIFO-first in first out
{ 

  if(front==NULL)
  {
    printf("the queue is empty");
  }
  else
  {
    printf("the elemented which is deleted=%d",front->data);

    temp=front;
    front=front->next;
    temp->next=NULL;
  }
}


void display()
{
    if(front==NULL)
  {
    printf("the queue is empty");
  }
 
   else
   {
    temp=front;
     while(temp!=rear)
     {
       printf("%d\n",temp->data);
       temp=temp->next; 
     }
   }
  
}