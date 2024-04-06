
/*
Abstraction is the concept of hiding the internal details and describing things in simple terms. 
For example, a method that adds two integers. The internal processing of the method is hidden from the outer world.
*/

#include<iostream>
using namespace std;

int add(int x, int y){
    int z = x+y;
    return z;
}

int main(){
    int a = 10;
    int b = 20;
    int c = add(a,b);
    cout << c << endl;
    return 0;
}