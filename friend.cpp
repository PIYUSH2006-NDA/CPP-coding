#include <iostream>
using namespace std;

class comp {
    int a, b;

public:
    void setsum(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printsum() {
        cout << "Your complex number is: " << a << "+" << b << "i" << endl;
    }


    friend comp sumcomp(comp o1, comp o2);
};


comp sumcomp(comp o1, comp o2) {
    comp result;
    result.setsum(o1.a + o2.a, o1.b + o2.b);
    return result;
}

int main() {
    comp c1, c2, sum;

    c1.setsum(1, 2);
    c2.setsum(3, 4);

    c1.printsum();
    c2.printsum();

    sum = sumcomp(c1, c2);
    sum.printsum();

    return 0;
}
