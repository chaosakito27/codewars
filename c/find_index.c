#include <stdio.h>

int find_even_index(const int *values, int length) {

	int l = 0, r = 0;

	for(int i = 0;i<length;i++) {
		for(int j = 0;j<i;j++) {
			l += values[j];
		}
		for(int j = length-1;j>i;j--) {
			r += values[j];
		}
		if(r == l) return i;
		l = 0;
		r = 0;
	}
	
	
	return -1;
}

int main() {
	int arr[] = { 1,100,50,-51,1,1};
	printf("%i : 1\n", find_even_index(arr, 6));
}

