//programm to turn seconds (int) into human readable time

#include <stdio.h>
#include <string.h>

char *human_readable_time (unsigned seconds) {	
	int iout, pow = 1000000;

	char out[8];
	

	iout = seconds % 60 + 100 * (seconds % 3600 / 60) + 10000 * ((seconds - seconds % 60 - 60 * seconds % 3600 / 60) / 3600);

	for(int i = 0;i<8;i++) {
		if(i == 2 || i == 5) {
			out[i] = ':';
		} else {
			iout %= pow;
			pow /= 10;
			out[i] = (iout / pow)+'0';			
		}
	}

	char *o = out;
	return o;
	
}

int main() {

	char *out  = human_readable_time(359999);

	printf("%sa\n", out);

}
