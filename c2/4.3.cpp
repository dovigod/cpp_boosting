#include <iostream>


//template

//cant use auto in param type.

// trailing -> return  type
auto add(int x, int y) -> int;
auto add(int x, int y) -> double;
int		add(int x, int y);
double	add(int x, int y);

auto add(int x, int y) -> int {
	return x + y;
}
auto add(int x, int y) -> double {
	return double(x) + y;
}


void main() {

	// use only specific.
	using std::cout;

	auto a = 123; // inferer.

}