#include"iostream"
using namespace std;
class Number{
int a, b;
public:

    Number(int n1,int n2){
        a=n1;
        b=n2;
        cout<<"Enter a and b: "<<endl;
        cin>>a>>b;

    cout<<"Inside Constructor: "<<endl;
    }
    void Display(){
    cout<<"Num1= "<<a<<endl;
    cout<<"Num2= "<<b<<endl;
    }
    ~Number(){
    cout<<"The value are destructor "<<endl;
    }

};
int main(){
Number obj1(99,100);
obj1.Display();
return 0;
}
