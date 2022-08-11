#include"iostream"
using namespace std;
int triZero(int n){
if (n<=1) return 1;
int res=1;
int fact=2;
while (fact<=n){
    res=fact*res;
    fact++;
}

int ans=0;
while(res%10==0){
    ans++;
    res=(res/10);
}
return ans;
}
int main(){
int n;
cout<<"Enter the value of factorial want: "<<endl;
cin>>n;
cout<<(int)triZero(n);

}
