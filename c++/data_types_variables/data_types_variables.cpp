#include <iostream>
//#include <string>

//using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::cin;

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

	string txt = "AbCdEf";
	cout << "The length of the txt string is: " << txt.length() << endl;  // length() same as size()

	string myString = "Hello";
	cout << myString[0] << endl;
	// outputs H
	myString[0] = 'J';
	cout << myString << endl;
	// Hello to Jello
	
	// using getline() to take in more than one word for string
	cout << "Type your full name: " << endl;
	getline(cin, fullName);
	cout << "Your name is: " << fullName << endl;
	int num1 = 1;
	int num2 = 3;
	cout << ( num1 > num2 ) << endl;
	cout << ( num2 > num1 ) << endl;
	cout << ( num1 == num2 ) << endl;

	// conditional statement
	int time = 20;
	string res = (time < 18) ? "Good night." : "Good evening.";
	cout << res << endl;

	string cars[4] = { "Hyundai", "BMW", "Toyota", "Mazda"};
	cout << cars[0] << endl;
	 i = 0;
	 int size = sizeof(cars)/sizeof(cars[0]);

	 for ( i; i < size; i++){
	 	
		 cout << "Car model is: " << cars[i] << endl;
	
	 }

	string food = "Pizza";
	string &meal = food;

	cout << "My favorite food is: " << food << endl;
	cout << "My memory address is: " << &food << endl;
	cout << "My favorite food is: " << meal << endl;
	cout << "My memory address is: " << &meal << endl;

return 0;
}
