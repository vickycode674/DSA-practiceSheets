#include <iostream>
using namespace std;

//staring occurence buddy you made it
int firstocc(int*arr,int s,int e,int key)
{
    int ans;
    // base case 
   if(s>e)    //start is greater than end
   return ans;

int mid=s+(e-s)/2;

   if(arr[mid]==key)
   {
     ans=mid;
   }
   
   else if(key>arr[mid]){
    return firstocc(arr,mid+1,e,key);
   }

   else if(key<arr[mid]){
    return firstocc(arr,s,mid-1,key);
   }
   mid=s+(e-s)/2;
   return ans;
}


//last occurence buddy

int lastocc(int*arr,int s,int e,int key)
{
    int ans;
    // base case 
   if(s>e)    //start is greater than en
int mid=s+(e-s)/2;


   if(arr[mid]==key)
   {
    return mid
      s=mid+1;
   }
   else if((key>arr[mid])){
    return lastocc(arr,mid+1,e,key);
   }
   else
   returns

   mid=s+(e-s)/2;
   return ans;
}

int main()
{
    int arr[5]={1,2,3,3,5};
    int key=3;
    int value=firstocc(arr,0,4,key);
        int value1=lastocc(arr,0,4,key);

    cout<<"The first occurence of array:"<<value<<endl;
        cout<<"The last occurence of array:"<<value1<<endl;

    return 0;
}