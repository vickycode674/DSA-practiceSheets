#include <iostream>

using namespace std;


void reverse(string &str,int i,int j){  //refercence is important else it copies element and main remain same

//base case

if(i>j)
return ;

swap(str[i],str[j]); //it will swap the each case and then call itself instead of looping it 
i++;
j--;

//recrusive call //like looping 
reverse(str,i,j);
}

int main()
{
    string name="vivek";

    reverse(name,0,name.length()-1);

    cout<<name<<endl;

 return 0;
}