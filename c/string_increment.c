#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *increment_string(char *str) {
	if(str[strlen(str)-1] <= 57 && str[strlen(str)-1] >= 48) {
		char output[strlen(str)];
		for(int i = 0;i<strlen(str)-1;i++) {
			output[i] = str[i];
		}	
		output[strlen(str)-1] = str[strlen(str)-1]+1;

		return output;
	} else {

	}

	return "";
}

int main() {
	printf("%s\n", increment_string("foo1"));
}
