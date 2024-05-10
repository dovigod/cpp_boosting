#include <iostream>
#include <bitset>
using namespace std;

// bitmasking.


void main() {
	/*
	
	0101 1110 = 94




	*/

	unsigned int a = 3;
	unsigned int b = a << 1;

	cout << bitset<8>(a) << endl;
	cout << bitset<8>(b) << " " << b << endl;

	// shift 1 means === var * 2^ 1

	unsigned int c = 1024;


	cout << bitset<8>(c) << endl;
	cout << bitset<8>(c >> 1) << " " << (c >> 1) << endl;
	cout << bitset<8>(c >> 2) << " " << (c >> 2) << endl;
	cout << bitset<8>(c >> 3) << " " << (c >> 3) << endl;
	cout << bitset<8>(c >> 4) << " " << (c >> 11) << endl;



	unsigned int d = 1024;

	cout << "bitwise not" << endl;
	cout << bitset<16>(~d) << endl;


	unsigned int e = 0b1100;
	unsigned int f = 0b0110;

	cout << "End OR XOR" << endl;
	cout << e << " " << f << endl;
	cout << bitset<16>(a & b) << " " << (a & b) << endl;
	cout << bitset<16>(a | b) << " " << (a | b) << endl;
	cout << bitset<16>(a ^ b) << " " << (a ^ b) << endl;


}