#include <iostream>

using namespace std;

int main (){
	// TODO
	#warning TODO: Create a class or set of class and catch improper object creation 
	int age = 15;
	
	try {
		if (age >= 18) {
			cout << "Access granted" << endl;
		} else {
			throw 101;
		} 
	
	} catch (...){
		cout << "Access denied " << endl; 
	}

return 0;
}
