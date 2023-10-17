#include <iostream>
using namespace std;


int main(){
	int x;
	cout<< "Please Enter the Province from the Given Options 1-4: "<<endl;
	cout<<"1 - Punjab"<<endl;
	cout<<"2 - Balochistan"<<endl;
	cout<<"3 - KPK"<<endl;
	cout<<"4 - Sindh"<<endl;
	cin>> x;
	//Giving options for the Input and taking as an integer in variable x
	switch(x){
		//switch for integer x and case of 1-4 as entered by user
		case 1: 
			cout<<"The Population for Punjab is 110 Milion";
			break;
		case 2:
			cout<<"The Population for Balochistan is 21.7 Million";
			break;
		case 3:
			cout<<"The Population for KPK is 40.8 Million";
			break;
		case 4:
			cout<<"The Population for Sindh is 47.9 Million";
			break;
		default: //default case incase entered input is not as required e.g 9
			cout<<"Entered input is Invalid";	
	}
	
	return 0;
}