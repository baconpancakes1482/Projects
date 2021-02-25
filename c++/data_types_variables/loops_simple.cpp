#include <iostream>

using namespace std;

int main(){

	int i = 0; 


	while ( i < 5) {
	
	cout << i << "\n";
	i++;

	} //while


	i = 0;
	
	do {
		cout << i << "\n";
	       	i++; 
	} //do
	while ( i < 5);
	//do-while
	
	i = 0;

	for ( i; i <= 10; i += 2) {
	
		cout << i << endl;

	 }// for
	
	i = 0;

	for ( i; i < 10; i++ ) {
		if ( i == 4) { break; }
		cout << i << endl;
	}

	i = 0;

	for ( i; i < 10; i++ ) {
		if ( i == 4) { continue; }
		cout << i << endl;
	}

	i = 0;

	while ( i < 10 ) {
		
		cout << i << endl;
	
		i++;
	
		if (i == 4) { break; }
	
	}

	i = 0;

	while ( i < 10) {
		if (i==4){
		i++;
		continue;
		}

		cout << i << endl;
		i++;
	}

return 0;
}
