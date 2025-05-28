#include <iostream>
#include <math.h>
using namespace std;
class simplecalculator
{
    int a, b;

public:
    void setnum1()
    {
        cout << "enter the value of a and b :- " << endl;
        cin >> a >> b;
    }
    void operation1()
    {
        cout << "the sum of A and B is :- " << a + b << endl;
        cout << "the multiplication  of A and B is :- " << a * b << endl;
        cout << "the substraction of A and B is :- " << a - b << endl;
        cout << "the division of A and B is :- " << a / b << endl;
    }
};
class scientificcalc
{
    int a, b;

public:
    void setnum2()
    {
        cout << "enter the value of a and b :- " << endl;
        cin >> a >> b;
    }
    void operation2()
    {
        cout << "the value of cos(a) is :- " << cos(a) << endl;
        cout << "the value of sin(a) is :- " << sin(a) << endl;
        cout << "the value of expo(a) is :- " << exp(a) << endl;
        cout << "the value of tan(a) is :- " << tan(a) << endl;
    }
};
class hybrid : public simplecalculator, public scientificcalc
{
};
int main()
{
    simplecalculator sc;
    sc.setnum1();
    sc.operation1();
    scientificcalc ssc;
    ssc.setnum2();
    ssc.operation2();
    hybrid h;
    h.setnum1();
    h.operation1();
    h.setnum2();
    h.operation2();
    return 0;
}
