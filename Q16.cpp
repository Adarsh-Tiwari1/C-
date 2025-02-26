#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"enter the lengths of the side of the triangle\n";
    cin>>side1>>side2>>side3;
    if(side1==side2 && side2==side3){
        cout<<"equlateral tringle";
    }
    else if(side1==side2 || side2==side3||side3==side1){
        cout<<"Isosceles trigle";
    }
    else{
        cout<<"Scalene tringle";
    }
}