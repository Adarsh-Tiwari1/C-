// Write a  program to input month number and print number of days in that month.
#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"enter month number\n";
    cin>>month;
    switch(month){
        case 1:{
            cout<<month<<" = january=31";
            break;
        }
        case 2:{
            cout<<month<<" = february=28/29";
            break;
        }
        case 3:{
            cout<<month<<" = march=31";
            break;
        }
        case 4:{
            cout<<month<<" = april";
            break;
        }
        case 5:{
            cout<<month<<" = may";
            break;
        }
        case 6:{
            cout<<month<<" = june";
            break;
        }
        case 7:{
            cout<<month<<" = july";
            break;
        }
        case 8:{
            cout<<month<<" = august";
            break;
        }
        case 9:{
            cout<<month<<" = september";
            break;
        }
        case 10:{
            cout<<month<<" = october";
            break;
        }
        case 11:{
            cout<<month<<" = november";
            break;
        }
        case 12:{
            cout<<month<<" = december";
            break;
        }
        default:{
            cout<<"please enter valid months number";
        }
    
    }
}    