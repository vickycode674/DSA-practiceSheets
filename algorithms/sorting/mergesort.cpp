//these a divide and conquere type of techinique which breaks the code and merge it later

/* These sorting technique is basically of four steps

1.)intisiling and creating merging functions

2,.)extension conditions

3.)void sort funxtion

4.)int main()  recalling the create functions  */


//cpp file works for c syntax too but c not for cpp
#include<iostream>

using namespace std;

#define max 5 //max will be 10 even if world breaks

int a[6]={12,10,23,15,17,63};

int b[5];


void merging(int low,int mid,int high) {

int l1,l2,i;

for(l1=low,l2=mid+1,i=low;  l1<=mid  && l2<=high; i++)  //m1
{

    if(a[l1]<a[l2])
     {
        b[i]=a[l1];  //here b will  be taken as new array space
        l1++;
     }

    else
    {
      b[i]=a[l2];
      l2++;
    }
}
//execeptional cases  m2
if(l2>high) //it is optional because once it fails above condition automatically it shows while cond
{
while(l1<=mid)
{
b[i]=a[l1];
 i++;
 l1++;
 }
}

else
{
while(l2<=high)
 {
b[i]=a[l2];
 i++;
 l2++;
 }
}


//here a and b used for making clear and b used for collectinng pure elemnets

for(i=low;i<=high;i++) //maintaining arrays a and b together with calmness
 {   //m3
    a[i]=b[i];
 }

}


void sort(int low, int high){

int mid;

if(low<high)
{
mid=(low+high)/2;

sort(low,mid); //function prototype

sort(mid+1,high);

merging(low,mid,high);
}
else
return ;

  }

int main() { 
   int i;

   printf("List before sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

      return 0;
}




