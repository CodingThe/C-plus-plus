#include"iostream"
using namespace std;
class Complex{
int a,b;
public:
    Complex(){
    a=0;
    b=0;
    }
    Complex(int x,int y){
    a=x;
    b=y;

    }
    Complex(int x){
    a=x;
    b=0;
    }
    void printNumber(){
    cout<<"Your no is : "<<a<<" + "<<b<<"i"<<endl;
    }

};
int main(){
Complex a1(99,100);
a1.printNumber();
Complex a2(100);
a2.printNumber();
Complex a3;
a3.printNumber();
}
