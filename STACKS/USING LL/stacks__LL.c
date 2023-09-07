/*BY LINKED LISTS THERE ARE NOF OVERFLOWS BUT INFITE STACKS AVAILABLE***********/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

 //#define MAX 5 //pre processor micro

void push();
void pop();
void display();


struct node{
int data;
struct node*next;
}*temp,*top;

int  main()
{

int ch;
do
{
printf("\n1.push\n2.pop\n3.display\n");
printf("enter the required choice(1,2,3)=");
scanf("%d",&ch);

switch (ch)
{
case 1: push();
        break;

case 2: pop();
        break;

case 3: display();
        break;
}
getch();
    }while (ch!=4); //here tilll we enter less than three it will repeat br

} //int main function ends here 

void push()
{
int ele;
struct node *new;
new=(struct node*)malloc(sizeof(struct node));

printf("enter the data want to enter=");
scanf("%d",&ele);
 
  if(top==NULL)
 {
   new->data=ele;
   new->next=NULL;
   top=new;
 }

  else
  {
 new->data=ele;

 new->next=top; //when a element is inserted it will be in top

 top=new;  //again bringing to next new element /upcoming element
  }
}

 void pop()  //it follows LIFO-last in first out 
{
 if(top==NULL)
    {
    printf("STACK IS EMPTY");
    }
 else
    {
    temp=top;
    printf("%d  is deleted ele\n",top->data);
    
    top=top->next;
    temp->next=NULL; 
    }
}

void display()
{
  if(top==NULL)
    {
    printf("STACK IS EMPTY");
    }

  else{
  temp=top;
  printf("the elements in the stack:");

while(temp!=NULL)
  {
  printf("%d\n",temp->data);
  temp=temp->next;
  }
 } 
}