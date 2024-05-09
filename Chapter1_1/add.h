//#pragma once
// header guard.
// including header is like dumping whole source code and replacing.

// so whenever there is duplicated imports, there could be linking error.

// in this case, we need pragma once = header guard

#ifndef MY_ADD
#define MY_ADD

int add(int x, int y) {
	return x + y;
}

#endif