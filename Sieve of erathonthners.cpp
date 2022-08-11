#include"iostream"
#include<vector>
using namespace std;
void sieve(int n){
vector<bool>isPrime(n+1,true);
for(int i=2;i*i<=n;i++){

if(n==2||n==3) return true;
if(n%2==0||n%3==0){
        retun false;
    }
    for(int j=2*i;i<=n;j+i){
        isPrime[j]=false;

    }
    }
    for(int i=2;i<=n;i++){
        if (isPrime[i])
cout<<i<<" ";
    }

}
int main(){
int n;
cin>>n;
cout<<sieve()
}
