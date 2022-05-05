#include"iostream"
using namespace std;
class  Student{
protected:
    int roll_No;
public:
    void set_Number(int a){
    roll_No=a;
    }
    void print_Number(void){
    cout<<"Your roll no is:"<<roll_No<<endl;
    }
};
class Test:public virtual Student{
protected:
    float maths,physics;
public:
    void set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
    }
    void print_marks(void){
    cout<<"Your result is here:"<<endl;
    cout<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
    }
};
class Sports:public virtual Student{
protected:
    float score;
public:
    void set_score(float sc){
    score=sc;
    }
    void print_score(void){
    cout<<"Your PT score is :"<<score<<endl;
    }
};
class Result:public Test,public Sports{
private:
    float total;
public:
    void display(void){
    total=maths+physics+score;
    print_Number();
    print_marks();
    print_score();
    cout<<"Your Total score is:"<<total<<endl;
    }
};
int main(){
Result Prakash;
Prakash.set_Number(89999);
Prakash.set_marks(99.9,98.9);
Prakash.set_score(98);
Prakash.display();
return 0;
}
