#include <iostream>
#include <cmath>
#include <limits>
//#include <cstdint>

using namespace std;

int main() {

	// integer 16bit == 2byte
	int16_t i(5); // not integer its a short
	int8_t myint = 65;

	cout << myint << endl; // 'a'

	int_fast8_t fi(5); // integer 8bit , most fastest type;
	int_least64_t li(1);

	return 0;
}