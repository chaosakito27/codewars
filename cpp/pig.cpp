#include <iostream>
#include <string>
#include <algorithm>

std::string pig_it(std::string str) {
	std::string output = "";

	std::string buffer = "";
		
	for(int i = 0;i<str.length()+1;i++) {
		if(str[i] == ' ') {
			reverse(buffer.begin(), buffer.end());
			output += buffer + "ay ";
			buffer = " ";
		} else buffer += str[i];
	}

	return output;
}

int main() {
	std::string in = "Pig latin is cool";
	std::string excpected = "igPay atinlay siay oolcay";

	std::cout << pig_it(in) << " " << excpected << std::endl;
}
