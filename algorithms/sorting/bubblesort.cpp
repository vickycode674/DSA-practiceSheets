#include<iostream>

using namespace std;

int main()
{
int i,n=4,temp,j;
int arr[30];

cout<<"entered the required arrays=\n";

for(i=0;i<n;i++)
{
cin>>arr[i];  //taking values in a loop
}

for(i=1;i<n;i++) //for passing  and i=1 it has to start from next element so that i will be reduced
  {

// here i and n are interelatted 

   for(j=0;j<n-i;j++) //n-i is an form which shows the number of swaps required[intechanging]
    {
      if(arr[j]>arr[j+1]) //j mukhyam bigluuuu algo
       {
         temp=arr[j];

         arr[j]=arr[j+1];

         arr[j+1]=temp;

       }
    }
  }

cout<<"the sorted arrays are:\n";

for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;  //taking values in a loop
}

return 0;
}