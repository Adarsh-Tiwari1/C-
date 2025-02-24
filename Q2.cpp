// Write a  program to find maximum between three numbers.
#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"enter 3 number\n";
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<a<<" is greater";
    }
    else if(a<=b && c<=b){
        cout<<b<<" is greater";
    }
    else if(c>=a && c>=b){
        cout<<c<<" is greater";
    }
    else{
        cout<<"thank you";
    }
    
    }