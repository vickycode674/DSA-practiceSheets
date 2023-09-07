#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define size 5

void enqueue();
void dequeue();
void display();

int queue[5];
int front=-1;
int rear=-1; //global varible representation


int main()
{
int ch;

while(ch!=4)
 {
  printf("\n1.enqueue\n2.dequeue\n3.display\n");
  printf("enter the required choice(1,2,3) \n");
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


void enqueue()  //element will be inserted from the rear part
{
  int ele;
 if(rear==size-1)
  {
   printf("queue is overflow");
  }

else
 {
  printf("enter the element to enter=");
  scanf("%d",&ele);
 
  if(front==-1)
  { 
  front=0; //while brining it to the normal scenario
  }

 rear++;
 queue[rear]=ele; //inserting to next element by changing
  }

}

void dequeue()  //element will be deleting from front part
{
int ele;
  if(rear==-1||front>rear)
  {
    printf("queue is in UNDERFLOW");
  }

  else
  {
    ele=queue[front];
    printf("element deleted is=%d",ele);
    front++; //from starting to end it deleted
  }


}


void display()
{

int i;
if(rear==-1||front>rear)
{
printf("queue is empty");
}

else
{
printf("the elements of the array=\n");
for(i=front;i<=rear;i++)
   {
printf("%d\n",queue[i]); //traversal
   }
 }
}