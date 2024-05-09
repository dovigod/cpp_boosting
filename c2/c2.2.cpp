#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
	
	short s = 1;

	cout << std::pow(2, sizeof(short) * 8 - 1) << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = 32767;
	s++;

	cout << "32768? " <<  s << endl;
	// expressing value as binary, on overflow, because of behavior of expressing negatives, it get back to lowest value
	// -32768 == overflow

	unsigned int i = -1;

	cout << i << endl;
	// overflows
	return 0;
}