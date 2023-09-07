#include <iostream>

using  namespace std;

int main()
{
int i,flag,key;

int array[5]={1,2,3,4,5};

cout<<"enter the required key=";
cin>>key;

for(i=0;i<5;i++)
{
if(key==array[i])
  {
     flag=1;
     break;
  }
}

if(flag==1)
{
cout<<"key is found"<<endl;
}

else
{
cout<<"key is not found";
}

return 0;
}