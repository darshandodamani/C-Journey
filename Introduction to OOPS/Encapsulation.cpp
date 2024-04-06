#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    // Corrected the data type to string
    string name;
    int age;
    float grade;

public:
    // Corrected the parameter name to match the declaration
    void setName(string studentName) {
        name = studentName;
    }

    void setAge(int studentAge) {
        if (studentAge >= 0) {
            age = studentAge;
        } else {
            cout << "Invalid age" << endl;
            age = 0;
        }
    }

    // Added a setter method for 'grade'
    void setGrade(float studentGrade) {
        grade = studentGrade;
    }

    // Getter method for 'grade'
    float getGrade() {
        return grade;
    }

    // Getter method for 'name'
    string getName() {
        return name;
    }

    // Getter method for 'age'
    int getAge() {
        return age;
    }
};

int main() {
    Student student1;
    student1.setName("John");
    student1.setAge(20);
    student1.setGrade(86.6);

    cout << "Student Information: " << endl;
    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;
    cout << "Grade: " << student1.getGrade() << endl;
    return 0;
}
