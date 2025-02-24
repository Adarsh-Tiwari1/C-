// Write a  program to input angles of a triangle and check whether triangle is valid or not.9
#include<iostream>
using namespace std;
int main(){
    int angle;
    cout<<"input angle\n";
    cin>>angle>>angle>>angle;
    if(angle+angle+angle==180){
        cout<<"triangle is valid";
    }  
    else{
        cout<<"triangle is not valid";
    }
}