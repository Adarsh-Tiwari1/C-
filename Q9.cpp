// Write a  program to input any character and check whether it is alphabet, digit or special character.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<ch<<" is character";
    }
    else if(ch>='0' && ch<='9'){
        cout<<ch<<" is number";
    }
    else{
        cout<<"this is spacial character";
    }
}