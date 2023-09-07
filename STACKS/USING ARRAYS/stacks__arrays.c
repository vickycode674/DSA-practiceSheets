/* IMPLEMENTING STACKS USING ARRAYS*/
#include<stdio.h>
#include<conio.h>

#define MAX 5 //pre processor micro

void push();
void pop();
void display();

int stack[MAX];
int top=-1;


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
    }while (ch!=4);

} //int main function ends here 

void push()
{
 int item;

if(top==MAX-1)  //when more than required stacks are enterd then it overflows
   {
    printf("stack is overflowed");
   }

 else
   { 
  printf("enter the data to insert=");
  scanf("%d",&item);

  top++;  //incrementing
  stack[top]=item; //inserting into stacks
   }

}


void pop()
{
    int item;

  if(top==-1)
  {
  printf("the stack is underflow");
  }

   else
   {
   item=stack[top];
   top--;

   printf("\n the deleted data from stack=%d",item); 
   }

}


void display()
  {
int i;

if(top==-1)
{
printf("\n underflow\n");
}

else
{
  printf("the elements in the stack:\n");
  for(i=top;i>=0;i--)
   {
       printf("%d\n",stack[i]);
    }
}

}


