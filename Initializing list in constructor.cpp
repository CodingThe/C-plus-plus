#include"iostream"
using namespace std;
class Test{
int a;
int b;
public:
    Test(int i,int j):a(i),b(j){
    cout<<"Constructor Executed:"<<endl;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;

    }

};
int main(){
Test t(99,98);
}
