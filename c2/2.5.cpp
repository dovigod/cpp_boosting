#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
//#include <cstdint>

using namespace std;

// floating point numbers

// how does computer deals real numbers?

// floatings

/*
float : 4byte , general 4byte
double 8byte, general 8byte
long double 8byte , general 8, 12 ,16


floating point has limit.

sign , exponent, mantissa
0     0000111    1100000000000000000
+     7           0.75
+ (1 + 0.75) * 2^(7 - 127(bios))


floating points are super efficient and fast
floating points were designed to handle massivly large and small numbers

express base 10 numbers with binary numbers

think of 1/3

0.33333333... recuring

1 / 3 + 1/3 + 1/3 = 1
==> 0.333 + 0.333 + 0.3333 = 1 (defining)
but computer doesnt understand this.

resutl ==> 0.99999999... until run out of digit
==> floating point rounding error.

5.625 = 101.101

0.5625(mantessia) * 10^1 (exponent)

0.101101 * 2^3

save this information in memory

s , exponent , mantissa

need of normalization..

0.101101 * 2^3 = 1.01101 * 2^ 2

need some standard..

two types
1. explicit normalization : move radix point to LHS of msb
101.101 -> 0.101101
2. implicit normaization : move radix to RHS of msb
1.01101


biasing
(cant use 2's complements :: it gets conflict)
s 1bit | e(4bit) | m (5bit)

0.0101 -> 0.101 * 2^-1
s: 0 
e: 0111 
m: 10100

101.101 -> 1.01101

s : 0
e : 1010
m: 01101

formula b ->d 

-1^s * 0.m * 2^(e-bias)
*/



int main() {

	double d(0.1);
	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << d << endl;
	cout << setprecision(17) << endl;
	cout << d << endl; // 0.1000000000...1
	// means d is the number closest to 0.1 by ussing floating point expression

	cout << d2 << endl;

	return 0;
}