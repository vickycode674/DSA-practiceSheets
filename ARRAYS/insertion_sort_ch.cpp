//it is an direct sorting process no delay one time fasak

#include <iostream>

using namespace std;

int main()
{   int i,j,temp,array[10],n;

 cout<<"enter the size of array=";
 cin>>n;
 
 for(i=0;i<n;i++)
 {  
    cin>>array[i];
 }
 /*/ before sorting elments are/*/
cout<< endl<<"before sorting"<<endl;
 for(i=0;i<n;i++)
 {  
  cout<<array[i];
 } 
 

 for(i=1; i<n;i++)  //here the itteration moving
 {
     temp=array[i];

   for(j=i; j>0 && temp<array[j-1]; j--)  //used for comparing with previous element
   {
     array[j]=array[j-1];     //if change then swap values
   }

array[j]=temp;
 }

 cout<<endl;

 /*/ AFTER SORTING /*/
cout<<"\nAFTER SORTING\n";
 for(i=0;i<n;i++)
{
cout<<array[i];
}
 return 0;
}