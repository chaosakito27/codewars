//no + or - operator is allowed
#include <stdio.h>

int add(int x, int y) {
	int out;

	while(y != 0)  {
		unsigned carry = (x & y);

		x ^= y;

		y = carry << 1;
	}

	return x;
}

int main() {
	printf("%i : 20\n", add(9, 11));
}
