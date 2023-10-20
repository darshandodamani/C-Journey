#include <iostream>
#include <cmath>
using namespace std;
int length, breath, area;
float radius, M_pi;

int main(){

cout<<"Choose the area you want to find\n";
cout<<"1. Area of a square\n";
cout<<"2. Area of a rectangle\n";
cout<<"3. Area of a circle\n";
cout<<"4. Area of a triangle\n";
cout<<"5. Exit\n";

int choice;
cout<<"Enter your choice ";
cin>>choice;

switch(choice){
    case 1:
        cout<<"Enter the length of the square ";
        cin>>length;
        area = length*length;
        cout<<"Area of a square is " << area;
        break;

    case 2:
        cout<<"Enter the length of the rectangle ";
        cin>>length;
        cout<<"Enter the breath of the rectangle ";
        cin>>breath;
        area = length*breath;
        cout<<"Area of a rectangle is " << area;
        break;
    
    case 3:
        cout<<"Enter the radius of the circle ";
        cin>>radius;
        area = M_pi * pow(radius, 2);
        cout<<"Area of a circle is " << area;
        break;

    case 4: 
        cout<<"Enter the length of the triangle ";
        cin>>length;
        cout<<"Enter the height of the triangle ";
        cin>>breath;
        area = 0.5 * length * breath;
        cout<<"Area of a triangle is " << area;
        break;
}


    return 0;
}