#include <iostream>
using namespace std;

class MyClass{
    public:
    int myInt;
    double myDouble;

    void display(){
        std::cout << "Values: " << myInt << " and " << myDouble << std::endl;
    }
};

int main(){
    MyClass obj1;
    obj1.myInt = 10;
    obj1.myDouble = 20.5;
    obj1.display();

    MyClass obj2;
    obj2.myInt = 30;
    obj2.myDouble = 40.5;
    obj2.display();

    return 0;
}