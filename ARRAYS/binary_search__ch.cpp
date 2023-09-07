//binary elememt break the array into half and then search as lhs an rhs which takes less
// time to search for large elements

#include <iostream>

using  namespace std;

int main()
{
int array[5]={1,2,3,4,5};

int low=0,mid,high=4,flag=0;

int key;

cout<<"enter the required key to search=";
cin>>key;

while(low<=high)
{
mid=((low+high)/2);
   
if(key==array[mid])

    { 
    flag=1;
    break;
    }


   else if(key < array[mid])  //if,else if, else is confirmly required
  {
   high=mid-1;
  }

  else
  {
 low=mid+1;   
  }

//loop lapeta returns backkkkkkkk
}

if(flag==1)
{
    cout<<"key is found";
}

else
{
    cout<<"key is not found";
}

return 0;

}