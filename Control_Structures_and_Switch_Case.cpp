#include"iostream"
using namespace std;
int main(){
	int age;
	cout<<"Enter Your age:"<<endl;
	cin>>age;
	//if_else conditions:-
	if((age<18)&&(age>0)){
		cout<<"You are under age ,you can not come"<<endl;
		
	}
	else if(age==18){
		cout<<"You are eligible for come in Party"<<endl;
		
	}
	else if (age<0){
		cout<<"You are not yet born"<<endl;

		
	
	}
	else{
		cout<<"You can come in Party"<<endl;
	}
	//Switch Case(selection control structure):-
	switch(age)
{
	case 18:
		cout<<"You are at 18 age"<<endl;
		break;
	case 25:
		cout<<"You are at 25"<<endl;
		break;
	case 5:
		cout<<"You are at 5"<<endl;
		break;
	default:
		cout<<"Not a bad"<<endl;
		break;
		
		cout<<"Completed switch case ";
		return 0;
	}	
}
