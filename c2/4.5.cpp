#include <iostream>
#include <string>
#include <limits>

using namespace std;

void main() {
	double* ptr = nullptr; // modern c++

	if (ptr !=  nullptr) {
		// do something
	}
	else {
		// do nothing
	}

	int* p = new int;
	*ptr = 7;

	int* c = new int{ 7 };
	
	delete ptr;
	delete c;


	//smart pointer , automate delete


	// mem leak
	while (true) {
		int* ptr = new int;
		cout << ptr << endl;
	}

	void* vp = nullptr;
	int* i = new int;
	float* f = new float;
	vp = &i;
	vp = &f;
}