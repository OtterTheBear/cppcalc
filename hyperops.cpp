#include "hyperops.hpp"

cpp_int mpow(cpp_int base, cpp_int exp) {
    cpp_int result = base;
    for (cpp_int e = 1; e < exp; e++) {
        result = result * base;
    }
    return result;
}

cpp_int ttrt(cpp_int base, cpp_int height) {
	cpp_int output = base;
	for (cpp_int i = 1; i < height; i++) {
		output = mpow(base, output);
	}
	return output;
}

long long int succeed(long long int x) {
	return x + 1;
}
