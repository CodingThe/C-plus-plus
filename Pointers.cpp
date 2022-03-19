#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *b=&a;
	
	//Address of Operator Pointer:-
	
	cout<<"The address of a is:"<<&a<<endl;
	cout<<"The address of b is:"<<b<<endl;

   //Value at Pointer:-
   cout<<"The value at address b is:"<<*b<<endl;
   
   //Pointer to Pointer:-
   int **c=&b;
cout<<"The address at address b is:"<<&b<<endl;
cout<<"The address at address b is:"<<c<<endl;
cout<<"Thr value at address c is:"<<*c<<endl;
cout<<"Thr value at address  value at c is:"<<**c<<endl;
	return 0;
}
