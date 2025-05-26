#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    int* b = &a;  // b is a pointer to int, holding address of a

    cout << "The address of a is: " << &a << endl;
    cout << "The value of a is: " << a << endl;
    cout << "The value stored at pointer b is: " << *b << endl;
    cout << "The address stored in pointer b is: " << b << endl;

    return 0;
}
