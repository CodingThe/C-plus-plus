#include"iostream"
using namespace std;
class Base1{
int data1;
public:
    Base1(int i){
    data1=i;
    cout<<"Base1 class constructor called:"<<endl;
    }
    void printDataBase1(void){
    cout<<"The value of data1 is: "<<data1<<endl;
    }
};
class Base2{
int data2;
public:
    Base2(int i){
    data2=i;
    cout<<"Base2 class constructor called:"<<endl;
    }
    void printDataBase2(void){
    cout<<"The value of data1 is: "<<data2<<endl;
    }
};
class Derived:public Base1,public Base2{
int derived1,derived2;
public:
    Derived(int a,int b,int c,int d):Base2(b),Base1(a){
    cout<<"Derived class constructor called:"<<endl;
    derived1=c;
    derived2=d;
    }
    void printDataDerived(void){
    cout<<"The value of Derived1 is: "<<derived1<<endl;
    cout<<"The value of Derived2 is: "<<derived2<<endl;
    }
};
int main(){
Derived Sudheer(99,98,97,99);
Sudheer.printDataBase1();
Sudheer.printDataBase2();
Sudheer.printDataDerived();
return 0;
}
