#include "iostream"
using namespace std;
int z=110;
int main(){
	// Build in data types:-
	int x,y,z;
	cout<<"Enter The Value of x:"<<endl;
	cin>>x;
	cout<<"Enter The Value of y:"<<endl;
	cin>>y;
	z=x+y;
	cout<<"The value at local variable z is:"<<z<<endl;
	cout<<"The value at global variable z is:"<<::z<<endl;
	//float ,double and long double variables:-
	float w=99.9F;
	long double e=99.9L;
	cout<<"The size of 99.9 is :"<<sizeof(99.9)<<endl;
	cout<<"The size of 99.9f is :"<<sizeof(99.9f)<<endl;
	cout<<"The size of 99.9F is :"<<sizeof(99.9F)<<endl;
	cout<<"The size of 99.9l is :"<<sizeof(99.9l)<<endl;
	cout<<"The size of 99.9L is :"<<sizeof(99.9L)<<endl;
	cout<<"The value of w is :"<<w<<endl;
	cout<<"The value of e is :"<<e<<endl;
	//Reference Variable:-
	float a=500;
	float &b=a;
	cout<<a<<endl;
	cout<<b<<endl;
	//Type Casting:-
	int k=90;
	float m=90.99;
	cout<<"The value of k is :"<<(float)k<<endl;	
	cout<<"The value of k is :"<<float(k)<<endl;
	cout<<"The value of m is :"<<(float)m<<endl;
	cout<<"The value of m is :"<<float(m)<<endl;
	int l=int(m);
	
	cout<<"The expression is :"<<k+m<<endl;
	cout<<" The expression is:"<<k+(int)m<<endl;
	cout<<" The expression is:"<<k+int(m)<<endl;
	}
