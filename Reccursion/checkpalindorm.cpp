#include <iostream>

using namespace std;

bool checkpalindomr(string str,int i,int j)
{
    //base case
if(i>j)
{
 return true;
}

if(str[i]!=str[j]){  //one case all others take automatically
    return false;
}
//reccrusive call
else{
  return checkpalindomr(str,i+1,j-1);  //condition to move through out the loop 
  }
}


int main()
{
string name="malayalam";

bool ispalidrome=checkpalindomr(name,0,name.length()-1);

if(ispalidrome)
{
 cout<<"It is a palindrome"<<endl;
}

else
cout<<"It is not a palindrome";

}