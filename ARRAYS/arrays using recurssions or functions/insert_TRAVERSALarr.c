#include <stdio.h>
//traversal of ann array using arrays
int display(int arr[],int n)
{

for(int i=0;i<n;i++)
{                      //traversal -:travelling the whole array like a traveller
printf("%d\t",arr[i]);
}

}
//CREATING ARAAY BASED ON THE INSERTION

int indinsertion(int arr[],int size,int element,int capacity, int index)
{

   for(int i=size-1;i>=index;i--)
{
    arr[i+1]=arr[i];
}
arr[index]=element;

printf("\n INSERTION= ");
return 1;
}



int main()
{
int arr[100]={1,23,45,86};
int size=4,element=50,index=1;
display(arr,size); //for traversal

//printing insertion things damn easy
indinsertion(arr,size,element,100,index);
size+=1;
display(arr,size);

return 0;
}

