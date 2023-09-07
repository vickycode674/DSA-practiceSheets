#include<stdio.h>

int main()
{
int array[100];
int i,size;


printf("enter the size of the array=");
scanf("%d",&size);

for(i=0;i<=size-1;i++)
{
printf("array[%d]=",i);
scanf("%d",&(array[i]));
}

for(i=0;i<=size-1;i++)
{
printf("\n elememts of entered array array[%d]=%d \t",i,array[i]);
}

int pos;

printf("enter the specific position u want to delete the data =");
scanf("%d",&pos);

for(i=pos;i<size-1;i++)
{
array[i]=array[i+1];
}

printf("arrays of deletion elemnts=\n");

for(i=0;i<size-1;i++)
{
printf("array[%d]=%d \n",i,array[i]);
}

return 0;

}