// Write a  program to calculate profit or loss.
#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"enter your cost price\n";
    cin>>cp;
    cout<<"enter your cell price\n";
    cin>>sp;
    if(cp<sp){
        cout<<"you are profit"<<" = "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"you are loss"<<" = "<<cp-sp;
    }
    else{
        cout<<"please enter valid number";
    }
}