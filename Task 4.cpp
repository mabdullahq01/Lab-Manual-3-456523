#include<iostream>
using namespace std;

int main(){
	int age;
	cout<<"Please Enter your Age: ";
	cin>>age;
	//asked age and checked if child, teenager or adult
	if(age<13){
		cout<<"You are a Child!";
	}
	else{
		if(age>=13 && age<=19){
			cout<<"You are a Teenager!";
		}
		else{
			cout<<"You are an Adult!";
		}
		}

	return 0;
}

