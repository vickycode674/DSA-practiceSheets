#include <iostream>

using namespace std;

int Sum(int*arr,int size)
{
// int total;
//basecase 1
 if(size<=0)
 return 0;

 if(size==1)
 return arr[0];

 int total;
total=arr[0]+Sum(arr+1,size-1);
return total;
  }

int main()
{
int arr[6]={2,3,4,5,6,7};
int size=6;
int sum=Sum(arr,size);

cout<<"the sum of the array is:"<<sum<<endl;

}