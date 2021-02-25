#include <iostream>
// Very simple 

using namespace std;

int main(){
	int number = 1;
	int other_number = 2;
	int sum = number + other_number;
	int difference = number - other_number; 

	unsigned int pos = number - other_number;
	
	bool a = true;
	
	signed int not_absolute = number - other_number;
	
	//expect false but runs EQUAL because unsigned int cant be negative, result is garbage val
	if (pos == not_absolute){
		cout << pos << " EQUAL " << not_absolute << endl;
		a = true;
	} else { 
		cout << pos << " NOT EQUAL " << not_absolute << endl;
		a = false;
	}
		cout << "number: " << number << endl;
		cout << "other_number: " << other_number << endl;
		cout << "unsigned int: " << pos << " expect Garbage" << endl;
		cout << "signed int: " << not_absolute << " expect -1" << endl;
		cout << "bool: " << a << " expect 1 for true" << endl;

	pos = 1;

	if (pos == not_absolute){
		cout << pos << " EQUAL " << not_absolute << endl;
		a = true;
	} else { 
		cout << pos << " NOT EQUAL " << not_absolute << endl;
		a = false;
	}
	
		cout << "unsigned int: " << pos << " expect 1" << endl;

		cout << "bool: " << a << " expect 0 for false" << endl;


	pos = 0;

	if (pos == not_absolute){
		cout << pos << " EQUAL " << not_absolute << endl;
		a = true;
	} else { 
		cout << pos << " NOT EQUAL " << not_absolute << endl;
		a = false;
	}
	
		cout << "unsigned int: " << pos << " expect 0" << endl;

		cout << "bool: " << a << " expect 0 for false" << endl;
return 0;
}

