#include"iostream"
using namespace std;
struct employee{
int ID;
char ch;
float Salary;

};
int main(){
    struct employee Kamal;
    Kamal.ID=990741;

    Kamal.ch='Yellow';
    Kamal.Salary=150000;
    cout<<"Kamal's ID: "<<Kamal.ID<<endl;
    cout<<"Kamal's Favorate Color: "<<Kamal.ch<<endl;
    cout<<"Kamal's Salary: "<<Kamal.Salary<<endl;





    return 0;
}
