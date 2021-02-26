#include <iostream>
#include <fstream>
// ofstream creates and writes to files
// ifstream reads from files
// fstream a combo of ofstream and ifstream: creating, reading, and writing to files

using namespace std;

int main(){
	// TODO
	#warning TODO: Make csv file and possibly extend to xcom project
	ofstream MyFile("filename.txt");

	MyFile << "Im entering input!" << endl;

	MyFile.close();
	
	string myText;

	ifstream MyReadFile("filename.txt");

	while(getline (MyReadFile, myText)) {
		cout << myText << endl;
	}
	MyReadFile.close();


return 0;
}
