#include <vector>
#include <iostream>

std::vector<int> sortArray(std::vector<int> array) {
	
	int wtry,b,bb;
	

	
	do {
		for(int i = 0;i<array.size();i++) {
			if(array.at(i)%2) {
				for(int j = i+1;j<array.size();j++) {
					if(array.at(i) > array.at(j) and array.at(j)%2) {
						b = array.at(i);
						bb = array.at(j),
						array.at(j) = b;
						array.at(i) = bb;

						break;
					}
				}
			}
		}

			
		wtry = 0;
		for(int i=0;i<array.size();i++) {
			if(array.at(i)%2) {
				for(int j = i+1;j<array.size();j++) {
					if(array.at(j) % 2== 0) continue;
					if(array.at(i) > array.at(j)) {
						wtry = 1;
						break;
					}
				}
			}
			if(wtry) break;
		}
		
	} while(wtry != 0);

	
	return array;
}

int main() {
	std::vector<int> input = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	std::vector<int> expected = {1, 8, 3, 6, 5, 4, 7, 2, 9, 0};
	
	std::vector<int> output = sortArray(input);

	std::cout << ((expected == output)? 1 : 0) << std::endl;

}
