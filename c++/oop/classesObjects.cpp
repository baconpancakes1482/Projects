#include <iostream>
#include <string>

using namespace std;

class MyClass {			//The class
	public:			// access specifier
		int myNum;	// attribute int
		string myString;// attribute string
};

class Car {
	public:
		string brand;
		string model;
		int year;
		int speed(int maxSpeed);
};

int Car::speed(int maxSpeed){
	return maxSpeed;
}

// defining a method inside a class
class MyClassMethod{

	public:
		int a;
		void myMethod(){
			cout << "Hello myMethod()!" << endl;
		}
};

// defining a method outside a class
class MyClassMethod2 {
	public: 
		int a;
		void myMethod2();
};

void MyClassMethod2::myMethod2(){
	cout << "Hello myMethod2()!" << endl;
}



int main(){
	
	//Create an Obj
	MyClass myObj;

	// access attributes and set values
	myObj.myNum = 4;
	myObj.myString = "Bacon";

	cout << myObj.myNum << endl;
	cout << myObj.myString << endl;

	Car carObj1;
	carObj1.brand = "BMW";
	carObj1.model = "X5";
	carObj1.year = 1999;

	Car carObj2;
	carObj2.brand = "Ford";
	carObj2.model = "Mustang";
	carObj2.year = 1969;

	cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
	cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

	MyClassMethod myObj3;
	myObj3.myMethod();
	MyClassMethod2 myObj4;
	myObj4.myMethod2();
	Car myObj5;
	cout << myObj5.speed(200) << endl;
	
return 0;
}
