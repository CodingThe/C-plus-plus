#include"iostream"
using namespace std;
class Base1{
protected:
    int base1int;
public:
    void set_base1int(int a){
    base1int=a;
    }
};
class Base2{
protected :
    int base2int;
public:
    void set_base2int(int b){
    base2int=b;
    }
};
class Base3{
protected:
    int base3int;
public:
    void set_base3int(int c){
    base3int=c;
    }
};
class Derived:public Base1,public Base2,public Base3{
public:
    void show(){
    cout<<"The value of Base1 is :"<<base1int<<endl;
    cout<<"The value of Base2 is :"<<base2int<<endl;
    cout<<"The value of Base3 is :"<<base3int<<endl;
    cout<<"The sum of these value is :"<<base1int+base2int+base3int<<endl;
    }
};
int main(){
Derived Prakash;
Prakash.set_base1int(99);
Prakash.set_base2int(98);
Prakash.set_base3int(99);
Prakash.show();
return 0;
}



