// #include <iostream>

// using namespace std;

// int main(){

// int arr[5]={1,3,5,7,4};
// int n=5;

//  for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// for(int i=0;i<n;i++){
//   int start=0;
//   int end=n-1;

//   while(start<end){
//      int temp=arr[i];
//      arr[end-i]=arr[i];
//      arr[i]=arr[end-i];
//        }
//         start++;
// }
//   cout<<"After reversing Array"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }
#include<iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int>v){
int s=0;
int e=v.size()-1;

while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;
}

void print(vector<int>v){ 
  for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
cout<<endl;
}


int main(){

vector<int>v;
v.push_back(11);
v.push_back(22);
v.push_back(44);
v.push_back(55);
v.push_back(66 );

vector<int> ans=reverse(v);

 print(ans);

}