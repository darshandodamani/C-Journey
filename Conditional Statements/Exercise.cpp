//write a progam to offer discount on a total bill amount
// program should take amount as an input and calculate the discount
// if bill amount < 100 no discount
// if bill amount >= 100 and < 500 discount is 10%
// if bill amount >= 500 then discount is 20%

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float amount;
    float discount=0.0;
    cout<<"enter the amount"<<endl;
    cin>>amount;
    if(amount<100){
        cout<<"no discount"<<endl;
    }else if(amount>=100 && amount<500){
        discount = amount*0.1;
        cout<<"discount is "<<discount<<endl;
    }else{
        discount = amount*0.2;
        cout<<"discount is "<<discount<<endl;
    }
    return 0;
}