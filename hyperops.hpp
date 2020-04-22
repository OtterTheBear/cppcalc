#include <cmath>

long int ttrt(int base, int height) {
	long int output;
	for (long int i; i < height; i++) {
		output = pow(base, output);
	}
	return output;
}

long long int succeed(long long int x) {
	return x + 1;
}
