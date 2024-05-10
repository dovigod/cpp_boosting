#include <iostream>
#include "externals.h"

using namespace std;


// forward declation
void doSomething(); // extern <- is hidden (external linking
extern int d; // no memory


// static variable

void staticVar() {
	static int a = 1; // assignement isnt repeated after initialization. , intialization is required when using static
	// static :: memory which is loaded from os is 'static'
	++a;

	// exec * 4
	//2 ,3 ,4 ....
	cout << a << endl;
}
void main() {

	cout << d << endl;
	doSomething();
	cout << Constants::pi << endl;


	//when including header file, it means that it gets copied for each includments..


}

/*

int g_x; // external linkage
static int g_x // internal linkage -> no other files can access
const int g_x; // xxxxx

extern int g_z;
extern const int g_z; //somewherer should initialize

int g_y(1); intialized.
*/