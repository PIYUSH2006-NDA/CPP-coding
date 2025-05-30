#include <iostream>
using namespace std;
template <class t>
class vector{
     public:
     t*arr;
     int size;
     public:
     vector(int m){
          size=m;
          arr=new  t[size];}
          t dotpro(vector &v){
               t d=0;
               for(int i=0;i<size;i++){
                    d=d+this-> arr[i]*v.arr[i];
               }
               return d;
          }
     };
int main() {
     vector <double> v1(3);
     v1.arr[0]=1;
     v1.arr[1]=2;
     v1.arr[2]=3;
     vector <double> v2(3);
     v2.arr[0]=1;
     v2.arr[1]=2;
     v2.arr[2]=3;
     double  a=v1.dotpro(v2);
     cout<<a<<endl;
     return 0;
}
