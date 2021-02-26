#include <iostream>
#include <string>

using namespace std;
// The class structure is for basic demonstration of fundamental c++ oop capabilities
// Especially with the class inheritance. Not the best structure
// Base Class
class Vehicle{
	public:
		string brand = "Ford";
		void honk(){
			cout << "HONK HONK" << endl;
		}
		void safetyFactor(){
			cout << "Hope this is a safe vehicle" << endl;
		}
	protected:
		int pin;


};

// Derived Class child
class Car: public Vehicle {
	public:
		string model = "Mustang";
		// Obviously not secure
		void setPin(int a){
			pin = a;
		}
		int getPin(){
			return pin;
		}
		void safetyFactor(){
			cout << "Safer than a vehicle like the bicycle" << endl;
		}
};
// Derived Class child
class Bicycle: public Vehicle {
	public:
		string brand = "bmx";
		string model = "2008";
		void safetyFactor(){
			cout << "Not a very safe Vehicle" << endl;
		}
};

class Status {
	public: 
		string status = "parked";
};

//Derived Class grandchild of Vehicle
class CarCondition: public Car {
	public:
	string condition = "brand new";
	string color = "red";
}; 

// Derived Class
class Transportation: public Vehicle, public Status {
};

int main(){
	Car myCar;
	int pin;
	cout << "Enter pin code (integers) for car: " << endl;
	cin >> pin;
	myCar.setPin(pin);
	
	myCar.honk();
	cout << myCar.brand + " " + myCar.model <<  " " << "pin code: " << myCar.getPin() << endl;
	
	Bicycle myBicycle;
	myBicycle.honk();
	cout << myBicycle.brand + " " + myBicycle.model << endl;

	CarCondition car_condition;
	Transportation vehicle;
	cout << "My " << car_condition.color << " " << car_condition.brand << " " << car_condition.model << " is " << car_condition.condition << endl; 	
	
	cout << "My " << vehicle.brand << " is " << vehicle.status << endl;
	
	// Polymorphism
	Vehicle myVehicle;
	myVehicle.safetyFactor();
	myCar.safetyFactor();
	myBicycle.safetyFactor();
	
return 0;
}
