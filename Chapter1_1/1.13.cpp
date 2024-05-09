#include <iostream>

using namespace std;


namespace MySpace {

	// recursive accepted

	int sub(int x, int y) {
		return x - y - y;
	}
}

int sub(int x, int y) {
	return x - y;
}
void main() {
	cout << "Hello world 1.13" << endl;

	cout << MySpace::sub(3, 6) << endl;


	using namespace MySpace;

	cout << sub(3, 6);

}