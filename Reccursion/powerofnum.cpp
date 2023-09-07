#include <iostream>

using namespace std;

int powers(int a,int b)
{
    //base case of the following quesition
    if(b==0)
    return 0;

    if(b==1)
    return a;

//recursive call
int ans= powers(a,b/2); 

//if its even
if(b%2==0){
return ans*ans;
}
//if its odd
else{
return a*ans*ans;
 }

}

int main()
{
int a,b;
cin>>a>>b;

int power=powers(a,b);

cout<<power<<endl;

}