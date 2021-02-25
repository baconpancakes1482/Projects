#include <iostream>

using namespace std;

// function declaration
void say_bye();
void swap(int &x, int &y);
int addTwo(int x, int y);
double addTwo(double x, double y);

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
	cout << "Swapping Numbers!" << endl;
	swap(a,b);
	cout << "a: " << a << "\n" << "b: " << b << endl;
	say_bye();
	a = 4;
	b = 6;
	double c = 1.055;
	double d = 5.399;
	int ci = addTwo(4,6);
	double e = addTwo(c,d);
	cout << "add int 4 and int 6: " << ci << endl;
	cout << "add double 1.055 and double 5.399: " << e << endl;
return 0;
}

void say_bye(){

	cout << "GOODBYE" << endl;
}
 void swap(int &x, int &y){
 	int z = x; 
	x = y;
	y = z;
 
 }
int addTwo(int x, int y){
	return x + y;
}
double addTwo(double x, double y){
	return x + y;
}
