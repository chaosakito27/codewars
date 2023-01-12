#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *words_to_sentence (const char *const words[]) {
	char *output = malloc(100);

	int size = 0;

	for(int i = 0;words[i] != '\0';i++) {
		size++;
	}


	printf("%i\n", size);
	
	for(int i = 0;i<size;i++) {
		if(words[i] != NULL && i + 1 == size) strcat(output, words[i]);

		else if(words[i] != NULL && i + 2 != size) {
			strcat(output, words[i]);
			strcat(output, ", ");
		}

		else if(words[i] != NULL) {
			strcat(output, words[i]);
			strcat(output, " and ");
		}
	}
	
	char *out = output;

	return output;
}

int main() {

	printf("%s\n", words_to_sentence((const char* const[]){"one", "two", "three", "four", NULL}));
}
