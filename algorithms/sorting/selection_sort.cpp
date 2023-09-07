/*these type of sorting selects element directly and rearrange with respect to indexes*/

//selecting min from array and replacing it with arrays thats it broweee

#include<iostream>

using namespace std;

int main()
{
int i,j,temp,arr[10],size,min;

cout<<"enter the size of an array:";
cin>>size;

cout<<"insrtion into arrays:";
for(i=0;i<size;i++)
{
cin>>arr[i];
}

cout<<"printing before arrays sorted";
cout<<"\n";
for(i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}

/*logic of insertion of insertion sort*/

for(i=0;i<size;i++)  //to keep withrespect position of an array
{
min=i;
for(j=i+1;j<size;j++)//to start from 2nd index of array it varies and compares other elements
{
if(arr[j]<arr[min])
 {
min=j;  //if its true then min value changes respectively throught the arrays
 }
}
//common if min changes or not this will be supporting throught 

temp=arr[i]; //storing indexes and irrespective of min it act charges on indexes even same or diff but travel everyone
arr[i]=arr[min];
arr[min]=temp;


}
cout<<"after sorting";
cout<<"\n";

for(i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}

return 0;
}

