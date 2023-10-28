/*
if else statements
relational operators give boolean values (true or false) 
== equal to
!= not equal to
> greater than
< less than

logical operators
&& and
|| or
! not

if (condition) {
    // code
}
else if (condition) {
    // code
}
else {
    // code
}

Give the problem statement for if and else:

Write a program to check if a number is even or odd.

*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b;
    cout<<"enter a number to check even or odd"<<endl;
    cin>>a;
    if(a%2==0){
        cout<<"given number is even"<<endl;
    }else{
        cout<<"given number is odd"<<endl;
    }
    return 0;
}
