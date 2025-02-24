//  Write a program to check whether a character is alphabet or not.
#include<iostream>
using namespace std;
int main(){
char alpha;
cout<<"enter alphabet\n";
cin>>alpha;
if(alpha>='a' && alpha<='z' || alpha>='A' && alpha<='Z'){
    cout<<alpha<<" is alphabet";
}
else{
    cout<<alpha<<" is not alphabet";
}
}