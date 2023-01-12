#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void wave(const char *y, char **target) {
	char *cpy = malloc(100);

	strcat(cpy, y);

	if(y != NULL) {
		int size = strlen(y);

		for(int i = 0;i<size;i++) {
			strcpy(cpy, y);

			cpy[i] = cpy[i] - 32;

			target[i] = cpy;
		}
	}


}

int main() {
	
	char **target = malloc(1000);

	wave("hello", target);

	printf("%s\n", target[0]);
		
	/*for(int i = 0;target[i] != NULL;i++) {
		printf("%s\n", target[i]);
	}*/
}
