#include<iostream>
using namespace std;
int main(){
    int phy,chem,bio,math,comp;
    cout<<"enter number of physice\n";
    cin>>phy;
    cout<<"enter number of chemistry\n";
    cin>>chem;
    cout<<"enter number of biology\n";
    cin>>bio;
    cout<<"enter number of math\n";
    cin>>math;
    cout<<"enter number of computer\n";
    cin>>comp;
    if(phy>100||chem>100||bio>100||math>100||comp>100){
        cout<<"invalid enter";
    }
    else if(phy>=35||chem>=35||bio>=35||math<=35||comp<=35){
        cout<<"fail";
    }
     else if(phy>=35||chem<=35||bio<=35||math>=35||comp>=35){
        cout<<"fail";
    }
    else if(phy<=35||chem>=35||bio>=35||math>=35||comp>=35){
        cout<<"suppely in physice";
    }
}