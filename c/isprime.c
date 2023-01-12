#include <stdio.h>

int is_prime(int num){
	if(num <=1) return 0;

	for(int i = num-1;i>=2;i--) {
		if(num % i == 0) return 0;
	}
	

    	return 1;
}

int main() {
	printf("%i\n", is_prime(3));
}
