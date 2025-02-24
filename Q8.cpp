/*
#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter character\n";
cin>>ch;
switch(ch){
    case 'a':
    case 'A':{
        cout<<ch<<" is vowel";
        break;
    }
    case 'e':
    case 'E':{
        cout<<ch<<" is vowel";
        break;
    }
    case 'i':
    case 'I':{
        cout<<ch<<" is vowel";
        break;
    }
    case 'o':
    case 'O':{
        cout<<ch<<" is vowel";
        break;
    }
    case 'u':
    case 'U':{
        cout<<ch<<" is vowel";
        break;
    }
    default:{
        cout<<ch<<" is consonant";
    }
}
}
*/

// Write a  program to input any alphabet and check whether it is vowel or consonant
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter character\n";
    cin>>ch;
    if(ch=='a' || ch=='A'){
        cout<<ch<<" is vowel";
    }
    else if(ch=='e' || ch=='E'){
        cout<<ch<<" is vowel";
    }
    else if(ch=='i' || ch=='I'){
        cout<<ch<<" is vowel";
    }
    else if(ch=='o' || ch=='O'){
        cout<<ch<<" is vowel";
    }
    else if(ch=='u' || ch=='U'){
        cout<<ch<<" is vowel";
    }
    else{
        cout<<ch<<" is consonant";
    }
    
}