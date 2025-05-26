#include <iostream>
using namespace std;
int fact(int n){
    if (n==1 || n== 0){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
int main() {
    int a;
    cout<<"enter the number to find the factorial of that number ."<<endl;
    cin>>a;
    int s=fact(a);
    cout<<"factorial of the number is :- "<<s<<endl;
    return 0;
}
