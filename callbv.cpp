//call by value and call by reference in cpp
#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
};

int main() {
int a=4;
int b=6;
cout<<"the value of a and b before swaping is :- "<<a<<","<<b<<endl;
swap(a,b);
cout<<"the value of a and b before swaping is :- "<<a<<","<<b<<endl;
    return 0;
}
