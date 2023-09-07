/*these sorting starts with aim of arraing all the upcoming arrays at a time but not one by one*/
 
 #include <iostream>

 using namespace std;

 int main()
 {
int i,j,temp,arr[100],n=3;

cout<<"enter the values of the arrays\n";
for(i=0;i<n;i++)
{
cin>>arr[i];
}


for(i=1;i<n;i++)
{

temp=arr[i];

 for(j=i; j>0 && temp<arr[j-1];j--)  //any of these condition is true we are ready to swap the values
{
arr[j]=arr[j-1];
}
arr[j]=temp;
}

cout<<"sorted arrays \n";

for(i=0;i<n;i++)
{
cout<<arr[i]<<endl;
}

 }