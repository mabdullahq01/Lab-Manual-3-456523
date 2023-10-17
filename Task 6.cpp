#include <iostream>
using namespace std;

int main(){
	char x;
	cout<<"Please input a Character: ";
	cin>>x;
	//taking input as char and using first if to check if input is alphabet
	if(isalpha(x)){
		if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){ 
		//for case of vowel used nested if
			cout<<"Entered Character is a Vowel";	
		}
		else{
			//else consonant in all case 
			cout<<"Entered Character is a Consonant";
		}
		
	}
	else{
		//if entered input not alphabet invalid error occurs
		cout<<"Invalid Input!";
	}
	return 0;
}