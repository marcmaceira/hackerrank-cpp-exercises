#include <iostream>
#include <string>

int main() {
	std::string a, b, swap_a, swap_b;
    std::cin >> a >> b;

    swap_a = a;
    swap_b = b;

    for(int i = 0; i > -1; --i) {
        swap_a[i] = b[i];
        swap_b[i] = a[i];
    }
    // swap_a[0] = b[0];
    // swap_a[-1] = b[-1];
    // swap_b[0] = a[0];
    // swap_b[-1] = a[-1];


    std::cout << a.length() << " " << b.length() << std::endl;
    std::cout << a + b << std::endl;
    std::cout << swap_a << " " << swap_b << std::endl;
    
    return 0;
}