#include <iostream>
using namespace std;

int main(){
	int x;
	cout<<"Please Enter a Number to Check: ";
	cin>>x;
	//taking input of an integer and using if-then-else to check if it is positive/negative
	if (x>0){
		x=1;
	}
	else if (x<0){
		x=-1;
	}
	switch(x){
		//switch for x for cases
		case 1:
			cout<<"Number is Positive!";
			break;
		case 0:
			cout<<"Number is Zero!";
			break;
		case -1:
			cout<<"Number is Negative!";
			break;
		default:
			cout<<"Error";
			break;
			//default case just for formality but it wont be used 
	}

return 0;

}


