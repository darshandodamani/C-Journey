#include <iostream>
using namespace std;

int main()
{
    cout<<"Choose the operation\n";
    cout<<"1. Bitwise AND\n";
    cout<<"2. Bitwise OR\n";
    cout<<"3. Bitwise XOR\n";
    cout<<"4. Bitwise NOT\n";
    cout<<"5. Bitwise Left Shift\n";
    cout<<"6. Bitwise Right Shift\n";
    cout<<"7. Exit\n";

    int choice;
    cout<<"Enter your choice ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"Enter the value of a ";
        int a;
        cin>>a;
        cout<<"Enter the value of b ";
        int b;
        cin>>b;
        cout<<"Bitwise AND of a and b is "<<(a&b);
        break;

    case 2:
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Enter the value of b ";
        cin>>b;
        cout<<"Bitwise OR of a and b is "<<(a|b);
        break;

    case 3:
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Enter the value of b ";
        cin>>b;
        cout<<"Bitwise XOR of a and b is "<<(a^b);
        break;  

    case 4:
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Bitwise NOT of a is "<<(~a);
        break;

    case 5:
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Enter the value of b ";
        cin>>b;
        cout<<"Bitwise Left Shift of a and b is "<<(a<<b);
        break;

    case 6:
        cout<<"Enter the value of a ";
        cin>>a;
        cout<<"Enter the value of b ";
        cin>>b;
        cout<<"Bitwise Right Shift of a and b is "<<(a>>b);
        break;

    case 7:
        break;   
    default:
        break;
    }
    return 0;
}