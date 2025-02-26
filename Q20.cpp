/* Write a  program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bil */
#include<iostream>
using namespace std;
int main(){
    int unit;
    cout<<"enter unit\n";
    cin>>unit;
    if(unit>=1 && unit<=50){
        cout<<"total price = "<<unit*0.50;
    }
    else if(unit>=51 && unit<100){
        cout<<"total price = "<<unit*0.75;
    }
    else if(unit>=100 && unit<250){
        cout<<"total price = "<<unit*1.20;
    }
    else if(unit>=250){
        cout<<"total price = "<<unit*1.50;
    }
    else{
        cout<<"thank you";
    }
}