#include<iostream>
using namespace std;
class Y;
class X{
int data;
public:
    void setValue(int value){
    data=value;
    }
    friend int add(X,Y);
};
class Y{
int num;
public:
    void setValue(int value){
    num=value;
    }
    friend int add(X,Y);
};
int add(X o1,Y o2){
cout<<"Sum the object of x and y object give me :"<<o1.data+o2.num;
}
int main(){
X a1;
a1.setValue(100);
Y a2;
a2.setValue(99);
add(a1,a2);
return 0;
}
