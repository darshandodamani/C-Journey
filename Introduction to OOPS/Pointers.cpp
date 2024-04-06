#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable 'x' and assign a value of 10 to it.
    int x = 10;

    // Declare a pointer 'ptr' and make it point to the address of 'x'.
    int *ptr = &x;

    // Print the value at the memory location pointed to by 'ptr' (which is the value of 'x').
    cout << *ptr << endl;

    // Declare an integer variable 'y' and assign the value pointed to by 'ptr' to it.
    int y = *ptr;

    // Print the value of 'y'.
    cout << y << endl;

    // Return 0 to indicate successful execution of the program.
    return 0;
}
