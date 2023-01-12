#include <stdio.h>
#include <string.h>

int isValidWalk(const char *walk) {
	int c = 0;

	for(int i = 0;i<strlen(walk);i++) {
		if(walk[i] == 'n' || walk[i] == 'w') c++;
		if(walk[i] == 's' || walk[i] == 'e') c--;
	}

	return (c == 0) ? 1 : 0; 
	

}

int main() {
	printf("%i: 1\n", isValidWalk("nsnsnsnsns"));
	printf("%i: 0\n", isValidWalk("nsnsnsnsnn"));
}
