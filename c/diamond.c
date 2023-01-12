#include <stdio.h>

void diamond (int n) {
	int middle = n/2;

	for(int i=1;i<n+1;i++) {
		for(int j = middle%i+1;j>0;j--) {
			printf(" ");
		}
		printf("*\n");
	}
	
}

int main() {
	diamond(3);
}
