#include <iostream>
#include <string>

using namespace std;

int main(){
	int i = 1;
	i += 1;
	bool b = true;
	char c = 'a';
	float d = 0.05;
	double e = 0.0341234;
	unsigned int s = 4;
	// unsigned only pos/ signed either pos or neg
	cout << i << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << s << endl;
	string greeting = "Hello";
	cout << greeting << endl;
	string firstName = "John";
	string lastName = "Doe";
	string fullName = firstName + " " + lastName;
	cout << fullName << endl;
	string anotherFirstName = "John";
	string anotherLastName = "Doe";
	string anotherFullName = anotherFirstName.append( " " + anotherLastName);
	cout << anotherFullName << endl;

	string x = "10";
	string y = "20";
	string z = x + y;
	cout << z << endl; //expect 1020

return 0;
}
