#include <iostream>

using namespace std;

int main()

{ int i,n,temp,j;
 int array[20];
  
  cout<<"enter the size of array=";
  cin>>n;

for(i=0;i<n;i++)
{
cin>>array[i]; //inserting or scanning the vakues of arrays
}

for(i=0;i<n;i++)    //loop for moving till n(1st one for comparing) each term wise
{
   for(j=0;j<n-1;j++)   //iteration movetill n-1 (2nd one for comparable)
{
if(array[j]>array[j+1])
  {
 temp=array[j];

array[j]=array[j+1];

array[j+1]=temp;
  }

}
}

cout<<"sorted arrays"<<endl;

for(i=0;i<n;i++)
{
cout<<array[i]<<endl;
}

return 0;
}