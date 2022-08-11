#include<iostream>
using namespace std;
int gcd(int a,int b){
if (a==0)
    return b;
while(a!=b){
if(a> b)
    a=a-b;
else
    b=b-a;
}
return a;
}
int main(){
int a,b;
cin>>a>>b;
cout<<(int)gcd(a,b)<<endl;
}
