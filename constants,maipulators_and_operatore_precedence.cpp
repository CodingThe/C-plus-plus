#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a=100;
	cout<<"The value of a is:"<<a<<endl;
	a=200;
	cout<<"The new value of a is:"<<a<<endl;
	 
	//Constants uses:-
	
	const int b=150;
	cout<<"The value of b is:"<<b<<endl;
//	b=250;  :- It will give us error because it is constant
	cout<<"The new value of b is:"<<b<<endl;
	
	//manipulators :-
	 
	int x=90,y=98,z=99;
	cout<<"The Value of x without setw manipulator is:"<<x<<endl; 
	cout<<"The Value of y without setw manipulator is:"<<y<<endl; 
	cout<<"The Value of z without setw manipulator is:"<<z<<endl; 
	
	cout<<"The Value of x with setw manipulator is:"<<setw(4)<<x<<endl; 
	cout<<"The Value of y with setw manipulator is:"<<setw(4)<<y<<endl; 
	cout<<"The Value of z with setw manipulator is:"<<setw(4)<<z<<endl; 
	
	//operator Precedence:-
	int m=3,n=4;
	int l=(a*100)+(b*200);
	cout<<"The value of l is:"<<l;

	
	return 0;
}

