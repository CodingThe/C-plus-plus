#include"iostream"
using namespace std;
class ShopItems{
int id;
float price;
public:
    void SetData(int a,float b){
    id=a;
    price=b;
    }
    void GetData(){
    cout<<"The Code of the Item is :"<<id<<endl;
    cout<<"The price of the Item is :"<<price<<endl;
        }
};
int main(){
int size =3;
ShopItems *ptr=new ShopItems[size];
ShopItems *ptrTemp=ptr;
int p,i;
float q;
for(i=1;i<size;i++){

    cout<<"Enter The ID and price of Item: "<<i<<endl;
    cin>>p>>q;
    ptr->SetData(p,q);
    ptr++;
}
for(i=1;i<size;i++){

    cout<<"Item number : "<<i<<endl;
    ptrTemp->GetData();
    ptrTemp++;
}
return 0;
}
