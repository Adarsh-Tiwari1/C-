//  Write a program to check whether a character is uppercase or lowercase alphabet.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character\n";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<ch<<" :is lower case";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<ch<<" is upper case";
    }
    else{
        cout<<"thank you";
    }
}