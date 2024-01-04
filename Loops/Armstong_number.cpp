#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n, sum=0, r, temp;
    
    cout<<"It's a number that equals the sum of its digits, each raised to a power equal to the number of digits in the number."<<endl;
    cout<<"enter a number: "<<endl;
    cin>>n;

    temp = n;

    while (n>0){
        r = n%10;
        n = n/10;
        sum = sum + (r*r*r);
    }
    if(temp == sum)
        cout<<"Its a Armstrong number"<<endl;
    
    else
        cout<<"Its not a Armstrong number"<<endl;
    
    return 0;
}