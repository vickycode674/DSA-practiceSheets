#include<stdio.h>

//traversal of ann array using arrays
int display(int arr[],int n)
{

for(int i=0;i<n;i++)
{                      //traversal -:travelling the whole array like a traveller[any protype only travelling]
printf("%d\t",arr[i]);
}

}
//CREATING ARAAY BASED ON THE (deletion)

int deletion(int arr[],int size,int capacity, int index)
{

   for(int i=index;i<=size-1;i++)
{
    arr[i]=arr[i+1];
}


printf("\n");
return 1;
}



int main()
{
int arr[100]={1,23,45,86};
int size=4,index=0;  //HERE BY refering index automaticlly things are gone
display(arr,size);

//printing insertion things damn easy
deletion(arr,size,100,index);

size-=1;  //obviously size decreases

display(arr,size);

//when a number is removed automatically next wala snatches place
return 0;
}
