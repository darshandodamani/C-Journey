#include <iostream>
using namespace std;
/*  
    enum is a user defined data type in C++.
    It is used to assign names to integral constants, the names make a program easy to read and maintain.
    The keyword 'enum' is used to declare an enumeration.
    Syntax: enum enum_name {list of names};
    By default, the value of the first name is 0, the second name is 1 and so on.
    We can also assign values to some names manually.
    If we assign a value to a name, then the next name will have a value one greater than the previous name.
    We can also assign values to all the names manually.  


    typedef is a keyword in C++.
    It is used to give a new name to an existing data type.
    Syntax: typedef existing_name new_name;
    Here, existing_name is the name of an existing data type and new_name is the new name given to that data type.
    
*/
enum day {monday, tuesday, wednesday, thursday, friday, saturday, sunday};
enum dept {cse=50, ece, me, ce, it, ee, eee};

typedef int marks;
int main(){
    day d;
    dept de;
    d= monday;
    cout<<"days= "<<friday<<" "<<saturday<<" "<<endl;

    de= cse;
    cout<<"dept= "<<ece<<" "<<me<<endl;

    marks m1, m2;
    m1= 50;
    m2= 60;
    cout<<"marks= "<<m1<<" "<<m2<<endl;



    return 0;

}
