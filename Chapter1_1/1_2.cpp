#include <iostream>


// 1.3 function
int addTwoNumbers(int a, int b) {
	int sum = a + b;
	return sum;
}

// 1.7 local scope
int main() {
	using namespace std;

	// x<- memory allocated, initialize with 0
	// mem scope depends on curlly brackets.
	int x(0); // x = 0;

	{
		int x = 1;
	}

	{
		int x = 2;
	}

	return 0;

	// mem x life cycle ends
}