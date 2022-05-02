#include"iostream"
using namespace std;
class Employee{
public:
    int id;
    float salary;
    Employee(int impID){
    id=impID;
    salary=999.9;


    }
    Employee(){}

};
class Programmer:public Employee{
public:
    int languageCode;
    Programmer(int impID ){
    id=impID;
    languageCode=99;

    }
    void getData(){
    cout<<id<<endl;
    }

};
int main(){
Employee Jatin(1),Prakash(2);
cout<<Jatin.salary<<endl;
cout<<Prakash.salary<<endl;
Programmer skills(10);
cout<<skills.languageCode<<endl;
cout<<skills.id<<endl;
return 0;
}
