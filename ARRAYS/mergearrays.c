#include<stdio.h>
int main()
{
int arr1[3]={10,20,30};
int arr2[3]={40,50,60};
int arr3[6];
int i,j;

for(i=0;i<3;i++)
 {
   arr3[i]=arr1[i]; 
   j=i;
 }

 for(i=0;i<3;i++)
  {
   arr3[j]=arr2[i];
   j++;
  }
 printf("the merged array is:");
 for(i=0;i<5;i++)
  {
    printf("%d\t",arr3[i]);
  }
}