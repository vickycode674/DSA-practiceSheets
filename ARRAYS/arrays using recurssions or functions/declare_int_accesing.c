#include<stdio.h>

/*int main()
{
//int arr[20]; //declaring //always int type must be tthere together

int arr[20]={2,3,45,6};  //intisialising



int i;

for(i=0;i<4;i++)
{
printf("%d\n",arr[i]);
}

return 0;

}*/

//functions break the given into smaller parts

int sumation(int arr[]); //creating function

int main()
    {
int arr[5]={2,3,4,5};

int sum= sumation(arr);  //final allocating stores

printf("%d",sum); 

   }
int sumation(int arr[25])
{
int i,n,sum=0;

for(i=0;i<5;i++)  //main logic[manfacturin unit]
{
sum= sum +arr[i]; 
}

return sum; //taking to int main for printing
}