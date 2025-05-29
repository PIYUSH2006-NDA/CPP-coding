 #include <iostream>
 #include <fstream>
 using namespace std;
 int main() {
     string st= "hello everyone this is file I/O in c++ ";
     ofstream out("sample.txt");
     out<<st;
     out.close();
 }
