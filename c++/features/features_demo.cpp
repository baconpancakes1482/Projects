#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <tuple>
#include <array>

using std::array;
using std::endl;
using std::cout;
using std::string;
using UserInfo = std::tuple<string,string,int>;
typedef std::tuple<int,int,int> mytuple;

int main(int argv, char** argc){
	
	cout << "Testing lambda!" << endl;
	
	// lambda test
	std::vector<std::pair<int,int>> data = {{1,3},{7,6},{12,4}};
	std::sort(begin(data), end(data), [](auto a, auto b) {
		return a.first > b.first;	
	});

	for (int i=0; i < data.size(); ++i){
		cout << data[i].first << ' ' <<  data[i].second << endl;
	}

	// another example of lamdba function with local capture of factor variable
	std::vector<int> data2 ={2, 4, 6, 7,3,1};
	int factor = 8;
	for_each( begin(data2), end(data2), [&factor](int &val){
			val *= factor;
			factor--;
	});

	for(int val: data2){
		cout << val << ' ' << endl;
	}

	std::set<int> input = {1,2,3,4};

	if( auto it = input.find(3); it==input.end()){
		cout << "5 " << "not found!" << endl;
	} else {
		cout << "5 " << "found!" << endl;
	}	

	// auto to deduce types and make_tuple to make tuple
//	auto user_info = std::make_tuple("Test", "Me", 4);
	
	UserInfo s("Test", "Me", 4);	
	//access data
	std::get<0>(s);
	std::get<1>(s);
	std::get<2>(s);

	string first_name, last_name, age;
	std::tie(first_name, last_name, age) = s;
	cout << first_name << endl;
	cout << last_name << endl;
#pragma warning (TODO age prints garbage in s tuple)
	// TODO Does not print correctly. prints garbage
	cout <<  age << endl;
	// Make an array of size 10 
	const int arraysize = 10;
	array<int, arraysize> arr;
	for (int j = 0; j < 10; j++)
		{ arr[j] = 1;	}
	for (int v : arr) cout << v << endl;
	
	// Another Tuple Example
	std::vector<mytuple> vec;
	for (int k = 0; k < 10; k++)
	{
	  vec.push_back(mytuple(k, k*2, k*3) );
	}	
	for (mytuple t: vec)
	{
		cout << std::get<0>(t) << ' ';
		cout << std::get<1>(t) << ' ';
		cout << std::get<2>(t) << endl;
	}
	return 0;

}
