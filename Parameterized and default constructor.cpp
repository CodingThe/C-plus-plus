#include "iostream"
using namespace std;
class Complex{
int a,b;
public:
    Complex(int,int);
    void PrintNumber(){
    cout<<"Your complex no is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(int x ,int y){
a=x;
b=y;
}
int main(){
Complex a1(99,100);
a1.PrintNumber();
return 0;
}
