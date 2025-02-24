// Write a program to check whether a number is divisible by 5 and 11 or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number\n";
    cin>>num;
    if(num%5==0 && num%11==0){
        cout<<num<<" is devide by 5 and 11";
    }
    else{
        cout<<num<<" is not devide by 5 and 11";
    }
 }