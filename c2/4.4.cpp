#include <iostream>
#include <string>
#include <limits>

using namespace std;

enum Color {
	RED,

};
enum Fruit {
	BANANA
};
void main() {

	const char my_strs[] = "Hello world";
	const string my_hello = "Hello world";

	string age;
	getline(cin, age);

	cout << age << endl;

	// ignore max 32767 char before endl
	//cin.ignore(numberic_limits<streamsize>::max(), '\n');

	Color color = RED;
	Fruit fruit = BANANA;

	cout << (color == fruit) << endl; // true 1 = 1 

	enum class C1 {
		RED
	};

	enum class C2 {
		B
	};

	C1 c1 = C1::RED;
	C2 c2 = C2::B;

	cout << (static_cast<int>(c1) == static_cast<int>(c2)) << endl;

}