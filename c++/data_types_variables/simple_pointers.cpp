#include <iostream>

using namespace std;

int main(){

	string food = "Pizza";

	cout << food << endl;
	cout << &food << endl;
	
	// make a pointer that stores address of food
	string* meal = &food;

	cout << meal << endl;

	// lets print the value of food by dereferncing the pointer
	cout << *meal << endl;

	// lets say im feeling a burger 
	*meal = "Hamburger";

	cout << *meal << endl;
	cout << food << endl;

	cout << meal << endl;
	cout << &food << endl;


}
