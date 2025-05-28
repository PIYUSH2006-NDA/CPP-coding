#include <iostream>
using namespace std;
class comp{
    int a;
    int b;
    public:
        comp();
    
    void printnum(){
        cout<<"your number is :- "<<a<<"+"<<b<<"i"<<endl;
    }
};
comp :: comp(){
    a=10;
    b=20;
}
int main() {
    comp c;
    c.printnum();
    return 0;
}
