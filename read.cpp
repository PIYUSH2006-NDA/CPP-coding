#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string st2;
    fstream in("sample.txt");
    getline(in, st2); 
    cout << st2;

    in.close(); 
    return 0;
