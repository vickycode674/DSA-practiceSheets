#include <iostream>

using namespace std;

void merge(int *arr,int s,int e)
{
int mid=s+(e-s)/2;


//allocation the size of the following array
int len1=mid-s+1;
int len2=e-mid;

int *first=new int[len1];
int *second=new int[len2];

//copy values

int k=s;
for(int i=0;i<len1;i++)
{
    first[i]=arr[k++];
}

k=mid+1;
for(int i=0;i<len2;i++)
{
    second[i]=arr[k++];
}

//merging 2 sorted arrays
int index1=0;
int index2=0;
k=s;

while(index1<len1 && index2<len2) {   //until the size of arrays breaks it goes on
         if(first[index1]<second[index2]) {
            arr[k++]=first[index1++];
         }  
         else{
           arr[k++]=second[index2++];
         }   
}

while(index1<len1)
{
    arr[k++]=first[index1++];
  }

  while(index2<len2)
{
    arr[k++]=second[index2++];
  }

}

void mergesort(int *arr,int s,int e)
{
//base case

if(s>=e)
{
    return;
}


//sort part of array using mid

int mid=s+(e-s)/2;

//sort left side part of array 
mergesort(arr,s,mid);

//sorting right part of array

mergesort(arr,mid+1,e);

merge(arr,s,e);

}



int main(){

int arr[5]={2,4,1,5,6};

int n=5;

mergesort(arr,0,n-1);

for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
 }
 cout<<endl;
}