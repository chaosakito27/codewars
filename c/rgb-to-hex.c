//rgb values to hex converter

#include <stdio.h>
#include <string.h>


int rgb(int r, int g, int b, char *output) {
	char hex_list[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int result = r;
	float remain;
	int i = 0;

	for(int i = 0;i<7;i++) {
		output[i] = '0';
	}
	char out[7];

	//remainer * 16 = the spot in hex list
	while(result) {
		remain = result / 16.0;
		result = remain;
		remain = remain - result;
		remain = remain * 16.0;
		
		printf("%f\n", remain);
		output[i+1] = hex_list[(int)remain];

		i++;
		if(result == 0 && i <4) result = g;
		if(result == 0 && i <6) result = g;
	}

	//reverse the string
	for(int i = 0;i<7;i++) {
		char buff = output[i];
		printf("%c\n", buff);
		output[i] = output[(i+6)%6];
		output[(i+6)%6] = buff;
	}

	return 0;	
}

int main() {
	char output[7] = {0};

	rgb(0, 0, 0, output);

	printf("%s : FFFFFF\n", output);

}
