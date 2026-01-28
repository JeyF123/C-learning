#include <iostream>
#include <array>

int main() {
    std::array<int, 3> zahlen = {10, 20, 30};

    std::cout << zahlen[0] << "\n";
    std::cout << zahlen.size() << "\n";

    return 0;
}
