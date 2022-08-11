#include"iostream"
using namespace std;
int main(){
int n;
cout<<"Enter the value to be found digits:"<<endl;
cin>>n;
int count=0;
while(n!=0){
    n=n/10;
  count ++;
}
cout<<count<<endl;
}
