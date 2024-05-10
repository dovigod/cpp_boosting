#include <iostream>
#include <bitset>
using namespace std;

// bitmasking.


void main() {
	/*
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	//...

	//event emit
	item1_flag = true;

	//die!
	item2_flag = false;
	*/

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 1 << 4;
	const unsigned char opt5 = 1 << 5;
	const unsigned char opt6 = 1 << 6;
	const unsigned char opt7 = 1 << 7;

	unsigned char items_flag = 0;


	cout << bitset<8>(items_flag) << endl;

	cout << "No item " << bitset<8>(items_flag) << endl;

	items_flag |= opt0;
	cout << "item0 obtained : " << bitset<8>(items_flag ) << endl;

	items_flag |= opt3;
	cout << "item3 obtained : " << bitset<8>(items_flag) << endl;

	items_flag &= ~opt3;
	cout << "item3 lost : " << bitset<8>(items_flag) << endl;

	cout << "has item0 ? : " << bitset<8>(items_flag & opt0) << endl;


	items_flag |= (opt7 | opt6);
	cout << "obtain item6,7 : " << bitset<8>(items_flag) << endl;


	// flip
	items_flag ^= (opt7 | opt6);
	cout << "flip item6,7 : " << bitset<8>(items_flag) << endl;


	unsigned int RED_MASK = 0xFF0000;
	unsigned int BLUE_MASK = 0x0000FF;
	unsigned int GREEN_MASK = 0x00FF00;
	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(pixel_color) << endl;

	unsigned int red = pixel_color & RED_MASK;
	unsigned int green = pixel_color & GREEN_MASK;
	unsigned int blue = pixel_color & BLUE_MASK;


	cout << bitset<32>(red) << endl;
	cout << bitset<32>(green) << endl;
	cout << bitset<32>(blue) << endl;


	// char type only has 8bit... to log -> shift
	cout << bitset<8>(red >> 16) << endl;
	cout << bitset<8>(green >> 8) << endl;
	cout << bitset<8>(blue >> 0) << endl;

}