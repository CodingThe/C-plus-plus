#include"iostream"
using namespace std;
class Base{
public:
    int var_base=1;
    virtual void display(){
    cout<<"1 Displaying Base class variable var_base:"<<var_base<<endl;

    }

};
class Derived:public Base{
public:
    int var_derived=2;
    virtual void display(){
    cout<<"2 Displaying Base class variable var_base:"<<var_base<<endl;
      cout<<"2 Displaying derived class variable var_derived:"<<var_derived<<endl;
    }

};
int main(){
Base *Base_pointer;
Base obj_base;
Derived obj_derived;
Base_pointer=&obj_derived;
Base_pointer->display();
return 0;
}
