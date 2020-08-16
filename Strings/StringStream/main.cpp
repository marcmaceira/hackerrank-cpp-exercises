#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::stringstream iss(str);
    std::vector<int> integers;

    for(int i; iss >> i;) {
        integers.push_back(i);
        if(iss.peek() == ',')
            iss.ignore();
    }
    return integers;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        std::cout << integers[i] << "\n";
    }
    
    return 0;
}