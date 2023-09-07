#include <iostream>

using namespace std;

bool isSorted(int *arr,int size) //pointer wise so that we can increse drecly to pointers with +1
{

//base case
if(size==0||size==1)  //until the base case is succeded it containously renders the whole thing
return true;

if(arr[0]>arr[1]){
    return false;
}

else{
bool remainingPart=isSorted(arr+1,size-1); //array size is being increased
return remainingPart;
  }
}

int main()
{
int arr[6]={2,3,4,8,7};
int size=6;

bool ans=isSorted(arr,size);

if(ans){
cout<<"The array is sorted"<<endl;
}

else{
    cout<<"The array is not sorted"<<endl;
}

}