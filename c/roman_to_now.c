//roman letter to int 

#include <stdio.h>
#include <string.h>

unsigned decode_roman (const char *roman_number) {
	int output = 0;

	static const short numbers[] = {
		['I'] = 1, ['V'] = 5, ['X'] = 10, ['L'] = 50, ['C'] = 100, ['D'] = 500, ['M'] = 1000 
	};

	for(; *roman_number; roman_number++) {
		int now = numbers[roman_number[0]];
		int next = numbers[roman_number[1]];

		output += (now >= next) ? +now : -now;
	}

	return output;
}

int main() {
	printf("%i : 643\n", decode_roman("DCXXXIV"));
}
