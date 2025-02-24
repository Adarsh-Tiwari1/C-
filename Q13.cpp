/*
#include<iostream>
using namespace std;
int main(){
    int amount , note1,note2,note5,note10,note20,note50,note100,note200,note500,note1000;
    note1=note2=note5=note10=note20=note50=note100=note200=note500=note1000=0;
    cout<<"";
    cin>>amount;
    if(amount>=1000){
        note1000=amount/1000;
        amount=amount-note1000*1000;
        cout<<"1000rs :"<<note1000<<"\n";
    }
    if(amount>=500){
        note500=amount/500;
        amount=amount-note500*500;
        cout<<"500rs :"<<note500<<"\n";
    }
    if(amount>=200){
        note200=amount/200;
        amount=amount-note200*200;
        cout<<"200rs :"<<note200<<"\n";
    }
    if(amount>=100){
        note100=amount/100;
        amount=amount-note100*100;
        cout<<"100rs :"<<note100<<"\n";
    }
    if(amount>=50){
        note50=amount/50;
        amount=amount-note50*50;
        cout<<"50rs :"<<note50<<"\n";
    }
    if(amount>=20){
        note20=amount/20;
        amount=amount-note20*20;
        cout<<"20rs :"<<note20<<"\n";
    }
    if(amount>=10){
        note10=amount/10;
        amount=amount-note10*10;
        cout<<"10rs :"<<note10<<"\n";
    }
    if(amount>=5){
        note5=amount/5;
        amount=amount-note5*5;
        cout<<"5rs :"<<note5<<"\n";
    }
    if(amount>=2){
        note2=amount/2;
        amount=amount-note2*2;
        cout<<"2rs :"<<note2<<"\n";
    }
    if(amount>=1){
        note1=amount/1;
        amount=amount-note1*1;
        cout<<"1rs :"<<note1<<"\n";
    }
}
*/

#include<iostream>
using namespace std;
int main(){
     int amount,note1000,note500,note200,note100,note50,note20,note10,note5,note2,note1;
     cout<<"";
     cin>>amount;
     if(amount>=1000){
         note1000=amount/1000;
         amount=amount%1000;
         cout<<"1000:"<<note1000<<"\n";
     }
     if(amount>=500){
         note500=amount/500;
         amount=amount%500;
         cout<<"500:"<<note500<<"\n";
     }
     if(amount>=100){
         note100=amount/100;
         amount=amount%100;
         cout<<"100:"<<note100<<"\n";
     }
     if(amount>=50){
         note50=amount/50;
         amount=amount%50;
         cout<<"50:"<<note50<<"\n";
     }
     if(amount>=10){
         note10=amount/10;
         amount=amount%10;
         cout<<"10:"<<note10<<"\n";
     }
     if(amount>=5){
         note5=amount/5;
         amount=amount%5;
         cout<<"5:"<<note5<<"\n";
     }
     if(amount>=2){
         note2=amount/2;
         amount=amount%2;
         cout<<"2:"<<note2<<"\n";
     }
     if(amount>=1){
         note10=amount/1;
         cout<<"1:"<<note1;
     }
}