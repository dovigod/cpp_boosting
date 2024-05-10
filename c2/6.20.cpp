#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

// kind of macro if compiler decides its ok
inline int testt(int x) {
	return x;
}

int myfunc() {
	return 2;
}

int fff() {
	return 10;
}
void main() {
	array<int, 5> my_arr = { 1, 2 , 3 , 4, 5 };
	my_arr = { 0 , 1, 2, 3, 4 };

	//cout << my_arr[10] << endl;
	//cout << my_arr.at(10) << endl; //eception on

	vector<int> array;

	array = { 1, 2, 3 , 4, 5, 6, 7 };


	for (auto itr : array) {
		cout << itr << " ";
	}
	cout << endl;


	int(*fptr)() = myfunc;

	fptr = fff;


}


