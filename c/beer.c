#include <stdio.h>

int beeramid(double bonus, double price) {
	int count = 0;	

	while(bonus > 0) {
		count++;
		bonus -= price * (count * count);
	}

	return count-1;
}

int main() {
	printf("%i : 12 \n", beeramid(1500, 2));
	printf("%i : 16\n", beeramid(5000, 3));
}
