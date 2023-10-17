#include <iostream>
using namespace std;

int main(){
	char x;
	cout<<"Please Enter an Alphabet: ";
	cin>>x;
	//taking input of a character datatype variable for switch
	switch(tolower(x)){ //lowering the character to eliminate capital case!
		case 'a': case 'e': case'i': case'o': case 'u': 
		//case for vowel
			cout<< "Entered Alphabet is a Vowel";
			break;
		default:
			if (isalpha(x)){ //checking if alphabet
				cout<<"Alphabet is a Consonant"; // consonant
			}
			else{
				cout<<"Invalid Input"; // entered input is not a character
			}
	}
	return 0;
}