#include <iostream>

using namespace std;

int main() {
	int x = -2; // x is variable, 2 is literal.


	// l-value => variable;
	// r-value => tmp variable , discarded after expression
	int y = x > 0 ? 1 : 2;
	// Hello world is literal ( constant )
	cout << "Hello, World" << endl;
	cout << y;

	return 0;
}