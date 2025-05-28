#include <iostream>
using namespace std;

int c = 0;

class num {
public:
    num() {
        c++;
        cout << "This is the time when the constructor is called. Count: " << c << endl;
    }

    ~num() {
        cout << "This is the time when the destructor is called. Count: " << c << endl;
        c--;
    }
};

int main() {
    cout << "Creating 1st object" << endl;
    num n1;
    {
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
