#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,r1,r2;
    cout<<"Enter the value of a ";
    cin>>a;
    cout<<"Enter the value of b ";
    cin>>b;
    cout<<"Enter the value of c ";
    cin>>c;
    r1 = (-b + (sqrt(pow(b,2)-4*a*c))/(2*a));
    r2 = (-b - (sqrt(pow(b,2)-4*a*c))/(2*a));

    cout<<"The roots of the quadratic equation are " <<r1<<" "<<r2;
    return 0;

}
