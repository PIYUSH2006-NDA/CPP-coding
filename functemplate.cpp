#include <iostream>
using namespace std;
template <class t>
void swapVals(t &a, t &b) {
    t temp = a;
    a = b;
    b = temp;
}
template <class t1, class t2>
float funcavg(t1 a, t2 b) {
    float avg = (a + b) / 2.0;
    return avg;
}

int main() {
    float a;
    a = funcavg(5, 2);
    cout << "The avg of these numbers is " << a << endl;

    int x = 2, y = 6;
    swapVals(x, y);
    cout << "After swapping: " << x << " " << y << endl;

    return 0;
}
