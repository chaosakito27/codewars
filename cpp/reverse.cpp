#include <iostream>

std::string reverse_words(std::string str){
	std::string out, tmp;
	

	for(int i = 0 ;i < str.length()+1;i++) {
		if(str[i] == ' ' || str[i] == '\0') {
			for(int j = tmp.length();j>=0;j--) {
				out += tmp[j];
			}
			tmp = "";
			out += " ";
		} else tmp += str[i];
	}

	return out;
}

int main() {
	std::cout << reverse_words("This is an example!") << std::endl;
}
