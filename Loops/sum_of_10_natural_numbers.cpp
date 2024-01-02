#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,i, sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    
    cout<<"Sum of first 10 natural numbers is "<<sum<<endl;
    return 0;
}