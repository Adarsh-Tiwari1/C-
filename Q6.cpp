/*
#include<iostream>
using namespace std;
int main(){
int year;
cout<<"enter year";
cin>>year;
if(year%4==0){
    cout<<year<<" is leap year";
}
else if(year%100==0){
    cout<<year<<" is not leap year";
}
else if(year%400==0){
    cout<<year<<" is leap year";
}
else{
    cout<<year<<" is not leap year";
   }
}
*/
// Write a  program to check whether a year is leap year or not
#include<iostream>
using namespace std;
int main(){
int year;
cout<<"enter year\n";
cin>>year;
if((year%4==0 && year%100!=0)||year%400==0){
    cout<<year<<" is leap year";
}
else{
    cout<<year<<" is not leap year";
}
}
