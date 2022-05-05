#include"iostream"
using namespace std;
class Base{
public:
    int a,b;
    void setdata(int x,int y){
    a=x;
    b=y;
    }
    void printdata(){
    cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<endl;
    }
};
class Derived:public Base{
public:
    int c;
    void setdata1(int x,int y,int z){
    c=z;
    a=x;
    b=y;
    }
    void printdata1(){
      cout<<"The value of a is: "<<a<<" and the value of b is: "<<b<<" and the value of c is: "<<c<<endl;
    }
};
int main(){
Derived d1;
d1.setdata(10,9);
d1.printdata();
d1.setdata1(9,99,100);
d1.printdata1();
return 0;
}


