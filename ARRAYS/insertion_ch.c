#include <stdio.h>

int main()
{
int array[100],i,size;


  printf("enter the size of an array=");
  scanf("%d",&size);


  for(i=0;i<=size-1;i++)
{
printf("array[%d]=",i);
scanf("%d",&(array[i]));  //scanning values
}

  for(i=0;i<=size-1;i++)
{
printf("array[%d]=%d \t",i,array[i]); //printing
}

/*********insertion at beggining************************
int index=1,element=35;

for(i=size;i>=index;i--)
{
    array[i+1]=array[i];
}
array[index]=element;


printf("\narray after insertion:\n");

for(i=0;i<=size+1;i++)
{
printf("array[%d]=%d\t",i,array[i]);
}*/

//inserting at ending
/*
int index=size+1,element=35;

array[index]=element;

printf("\narray after insertion at end:\n");

for(i=0;i<=size+1;i++)
{
printf("array[%d]=%d\t",i,array[i]);
}
*/

//inserting at specific position

int pos,element=2;

printf("enter the specific position u want to enter =");
scanf("%d",&pos);

for(i=pos; i<=size-1; i++)
{
  array[i+1]=array[i];
}

array[pos]=element;

printf("\n array after insertion at specific position:\n");

for(i=0;i<=size;i++)
{
printf("array[%d]=%d\t",i,array[i]);
}
return 0;

}

//blunders -:not seeing scanning function and withour seing error fixing that there is fucking error sorry 
//movav