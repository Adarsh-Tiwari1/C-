// Write a  program to check whether a number is negative, positive or zero.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number\n";
    cin>>num;
    if(num>0){
        cout<<num<<" is positive";
    }
    else if(num<0){
        cout<<num<<" is negative";
    }
    else if(num==0){
        cout<<num<<" is zero";
    }
    
    }