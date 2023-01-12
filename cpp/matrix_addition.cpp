#include <vector>
#include <iostream>

std::vector<std::vector<int> > matrixAddition(std::vector<std::vector<int> > a,std::vector<std::vector<int> > b){
    std::vector<std::vector<int>> output(a.size(), std::vector<int> (a[0].size()));

    for(int i = 0;i<output.size();i++) {
        for(int j = 0;j<output[0].size();j++) {
            output[i][j] = a[i][j] + b[i][j];
        }
    }

    return output;
}

int main() {
    std::vector<std::vector<int>> output = matrixAddition({{1, 2, 3},{3, 2, 1},{1, 1, 1}}, {{2, 2, 1},{3, 2, 3},{1, 1, 3}});

    for(int i = 0;i<output.size();i++) {
        for(int j = 0;j<output[0].size();j++) {
            std::cout << output[i][j] << " ";
        }
        std::cout << "\n";
    }
}