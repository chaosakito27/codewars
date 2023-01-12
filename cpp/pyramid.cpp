#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> towerBuilder(unsigned nFloors) {
	std::vector<std::string> output;

	int n = nFloors * 2 + 1;

	for(int i = 0;i<nFloors;i++) {
		/*std::string buffer = "";

		for(int j = 0;j<(n-i*2)/2-1;j++) {
			buffer += " ";
		}

		for(int j = 0;j<i*2+1;j++) {
			buffer += "*";
		}
		for(int j = 0;j<(n-i*2)/2-1;j++) {
			buffer += " ";
		}

		output.push_back(buffer);*/
		
		//remember to put ' ' and not " " =/
		output.push_back(std::string((n-i*2)/2-1, ' ') + std::string(i*2+1, '*') + std::string((n-i*2)/2-1, ' '));

	}

	return output;
}

int main() {
	std::vector<std::string> pyramid = towerBuilder(3);

	for(int i = 0;i<pyramid.size();i++) {
		std::cout << pyramid.at(i) << "\n";
	}	
}
