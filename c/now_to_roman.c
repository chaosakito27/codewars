#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *solution(int n) {
 	char *output = malloc(10);
	
	char l[7] = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
	int list[7] = {1000, 500, 100, 50, 10, 5, 1};

	int count = 0;

	while(n) {
		for(int i = 0;i<7;i++) {
			if((n - list[i]) >= 0) {
				n -= list[i];
				output[count] = l[i];	
				break;	
			}
		}
		count++;
	}
		
	char *o = output;
	return o;
}

int main() {
	printf("%s\n", solution(9));
}
