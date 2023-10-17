#include <iostream>
using namespace std;


int main(){
	int a,b,c;
	cout<<"Please Input Number A: ";
	cin>>a;
	cout<<"Please Input Number B: ";
	cin>>b;
	cout<<"Please Input Number C: ";
	cin>>c;
	//inputted 3 numbers and used if else to check the largest number
	if(a>b){
		if(a>c){
			cout<<"A is Greatest!";
		}
		else{
			cout<<"C is Greatest!";
		}
	}
	else if(b>a){
		if(b>c){
			cout<<"B is Greatest!";
		}
		else{
			cout<<"C is Greatest!";
		}
	}
	else if(a==b){
		if(c>b){
			cout<<"C is Greatest!";
		}
	}
	return 0;
}