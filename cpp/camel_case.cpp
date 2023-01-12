#include <string>
#include <iostream>
#include <regex>

std::string to_camel_case(std::string text) {
	std::string output;
	
	for(int i = 0;i<text.size();i++) {
		if(text.at(i) == '-' || text.at(i) == '_') {
			text.at(i+1) = text.at(i+1) - 32;

			continue;
		}
		output += text.at(i);
	}


	//output = std::regex_replace(text, std::regex("\\-"), "");

	return output;
}

int main() {
	std::cout << "Expected: theStealthWarrior - got: " << to_camel_case("the-stealth-warrior") << std::endl;
}
