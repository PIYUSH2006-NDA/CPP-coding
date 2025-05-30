#include <iostream>
using namespace std;
template <class t>
class vector{
     public:
     t*arr;
     int size;

     vector(int m){
          size=m;
          arr=new  t[size];}
           void  add(vector &v){
               cout<<"the addition of the two vector ";
               for(int i=0;i<size;i++){
                    cout<<this-> arr[i]+v.arr[i]<<" ";
               }
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
     v1.add(v2);
     return 0;
}
