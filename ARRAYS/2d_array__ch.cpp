/*A CPP file is a source code file written in C++, a popular programming language that adds
 features such as object-oriented programming to */


#include<iostream>

using namespace std;

int main()
{
    int i,j,n;

    int array[100][100];

  cout<<"enter the size of an array=";
  cin>>n;  //no of itterations

for(i=0; i<n;i++)
{
    for(j=0;j<n;j++)
     {                 //scanning arrys 
       cin>>array[i][j];
     } 
}

cout<<"array after the intisilation \n";
for(i=0; i<n;i++)
{
    for(j=0;j<n;j++)   //printing arrays
     {
       cout<<array[i][j];
       cout<<"\t";
     } 
}
}

/********* difference between endl and /n which keeps for breaking the line in as same sentence between quoation
 we use \n or else for new statements we use endl ,........

 here \n is not at all universal it cahnges in in different languages.

 so at max try to use endl because it is function and core for cpp