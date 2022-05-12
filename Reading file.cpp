#include"iostream"
#include"fstream"
using namespace std;
int main(){
string str;
ifstream in("sample90.txt");
in>>str;
getline(in,str);
}
