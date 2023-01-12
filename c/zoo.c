#include <stdio.h>

int find_number(int *arr, int len) {
	int i = 1;
	while(i<len) {
		if(arr[i] - arr[i-1] != 1) return arr[i]-1;
		
		i++;
	} 
	if(i+1 == len) return arr[i]+1;
	
}

int main() {
	int num[] = {1, 3, 4};
	int num2[] = {1, 2, 3};
	printf("%i %i\n", find_number(num, 3), find_number(num2, 3));
}
