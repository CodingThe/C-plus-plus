#include<iostream>
using namespace std;
void printDivisior(int n){
for(int i=0;i<=n;i++){
    if(n/i==0){
 cout<<i<<endl;
}

}
}
int main(){
    int n;
cin>>n;
std::cout<< (void)printDivisior(n)<<endl;
}
