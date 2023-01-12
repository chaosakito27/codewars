#include <stdio.h>

int find_outlier(const int *values, size_t count) {
	//propably the worst solution for this but it works!	
	for(int i = 0;i<count;i++) {
		if(values[i] % 2 != values[(i+1)%(count-1)] % 2 && values[i] % 2 != values[(i+2)%(count-1)] % 2) return values[i];
	}
}

int main() {
	int t1[] = {2, 4, 0, 100, 4, 11, 2602, 36};
	int t2[] = {160, 3, 1719, 19, 11, 13, -21};

	printf("%i 11\n", find_outlier(t1, 8));
	printf("%i 160\n", find_outlier(t2, 7));
}
