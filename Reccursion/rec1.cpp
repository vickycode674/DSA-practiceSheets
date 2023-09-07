#include <iostream>

using namespace std;

void digitshow(int n,string arr[])
{

//base case
if(n==0)
return ;

//getting number 
int digit=n%10;
n=n/10;
// cout<<arr[digit]<<" ";

//recursive call

 digitshow(n,arr);

cout<<arr[digit]<<" ";
}


int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    
    int n;
    cin>>n;

    cout<<endl<<endl;

 digitshow(n,arr);
    cout<<endl<<endl;
    }