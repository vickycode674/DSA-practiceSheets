#include<stdio.h>
/*
int display(int arr[],int size,int i)
{
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}

printf("\t");

int reversing(int arr[],size,int i)
{
for(i=size-1;i<=size;i--)
{
printf("%d",arr[i]);
}
}



int main()
{
    int size=4;
    int arr[10]={1,2,3,4,5};
display(arr[],size);


reversing(arr[],size);
display(arr[],size);

    return 0;
}
*/
int main()
{
int arr[100]={1,2,3,4,5};
int size=5,i;

printf("the ordered elemts\n");

 for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }


printf("\nreversed elements\n");

for(i=size-1;i>=0;i--)
{
printf("%d\t",arr[i]);
}


return 0;
}