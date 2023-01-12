#include <iostream>
#include <vector>
#include <array>


std::array<int, 2> two_oldest_ages(std::vector<int> ages) {
	int first, second;

	for(int i = 0;i<ages.size();i++) {
		if(ages.at(i) > first) {
			second = first;
			first = ages.at(i);
		} else if(ages.at(i) > second) second = ages.at(i);
	}


    	return {second, first};
}

int main() {
	std::array<int, 2> expected = {8, 10};
	std::vector<int> input = {1, 2, 10, 8};
 
	std::cout << (expected == two_oldest_ages(input) ? 1 : 0) << std::endl;
}
