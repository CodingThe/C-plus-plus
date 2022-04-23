#include"iostream"
using namespace std;
class Complex{
int a,b;
public:
    Complex(void);
    void printNumber(){
   cout<<"Your number is :"<<a<<" + "<<b<<"i"<<endl;
    }
};
Complex::Complex(void){
a=99;
b=100;
}
int main(){
Complex a1,a2,a3;
a1.printNumber();
a2.printNumber();
a3.printNumber();
return 0;

}
