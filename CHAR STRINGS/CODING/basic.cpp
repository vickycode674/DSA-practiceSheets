#include<iostream>
using namespace std;

// int getlength(char name[]){             //creation of function to get loop attached with following
//     int count=0;
//     for(int i=0;name[i]!='\0';i++){
//      count++;
//     }
//  return count;
// }


// int getreverse(char name[]){

// }
// int main(){
// char name[10];

// cout<<"Enter your name"<<endl;
// cin>>name;

// cout<<"The length of your name is:";
// cout<<getlength(name);
// }


//Reverse a string
// #include <iostream>
// #include <string>

// std::string reverseString(const std::string& str) {
//     std::string reversedStr;
//     for (int i = str.length() - 1; i >= 0; --i) {
//         reversedStr += str[i];                  //taking out the whole string from revrse and storing it new array
//     }
//     return reversedStr;
// }

// int main() {
//     std::string input;
//     std::cout << "Enter a string: ";
//     std::getline(std::cin, input);

//     std::string reversed = reverseString(input);
//     std::cout << "Reversed string: " << reversed << std::endl;

//     return 0;
// }


// bool checking palindrom

bool checkpalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
      else{
        s++;
        e--;
      }
    }
    return 1;
}

int main(){
    char name[10];
    int n=5;
    cout<<"Enter your name";
    cin>>name;
cout<<"checking palindrom "<<checkpalindrome(name,n); 
}