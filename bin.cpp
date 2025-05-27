#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void display(void);
    void chkbin(void);
    void ocomp(void);
    void displaycomp(void);
};
void binary ::read(void)
{
    cout << "enter the binary number :- " << endl;
    cin >> s;
}
void binary ::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "it is not a binary number " << endl;
            exit(0);
        }
    }
}
void binary ::ocomp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "the binary number is :- " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
void binary::displaycomp(void)
{
    cout << "The 1's complement is: \n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary n;
    n.read();
    n.chkbin();
    n.display();
    n.ocomp();
    n.displaycomp();
    return 0;
}
