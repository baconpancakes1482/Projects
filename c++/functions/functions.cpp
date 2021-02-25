#include <iostream>

using namespace std;

int return_four(){
	return 4;
}
void say_hello(){
	cout << "Hello!" << endl;
}

int add(int a, int b){

	int sum =  a + b;

return sum;
}
// Default argument run
void says_who (char person, int age = 0){
	cout << "Person " << person << ", age " << age << ", says hello!" << endl;
}

int main (){
	
	int a = 0;
	int b = 0;
	say_hello();
	cout << return_four() << endl;
	cout << "Input two numbers to add" << endl;
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >>b;
	cout << "The sum is: " << add(a,b) << endl;
	says_who('A');
	says_who('B', 20);

return 0;
}
