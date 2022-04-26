#include"iostream"
using namespace std;
class Number{
int a;
public:
    Number(){
    a=0;
    }
    Number(int num){
    a=num;

    }
    Number(Number &obj){
    cout<<"Copy Constructor is called "<<endl;
    a=obj.a;
    }
    void display(){
    cout<<"The Number of this object is :"<<a<<endl;
    }
};
int main(){
Number a1,a2,z(90),z2;
a1.display();
a2.display();
z.display();
Number z1(z);
z1.display();
Number z3=z;
z3.display();

}
