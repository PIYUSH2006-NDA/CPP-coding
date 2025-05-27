#include <iostream>
using namespace std;
class emp
{
private:
    int a,b,c;
public:
int d,e;
void setdata(int a1,int b1, int c1);
void getdata(){
    cout<<"the value of a is :- "<<a<<endl;
    cout<<"the value of b is :- "<<b<<endl;
    cout<<"the value of c is :- "<<c<<endl;
}
};
void emp::setdata(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main() {
    emp p;
    p.d=35;
    p.e=32;
    p.setdata(1,2,3);
    p.getdata();
    return 0;
}
