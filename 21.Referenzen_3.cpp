#include <iostream>

int erhalte(const int& x){ //x erhält den Wert von a
    return x;
}

int main() {
    int a = 5;
    std::cout << erhalte(a);
    a=9;
    std::cout << erhalte(a);
}
