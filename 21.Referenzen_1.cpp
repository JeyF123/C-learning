#include <iostream>
void erhoehe(int& x) {
    x = x + 1;
}

void weniger (int &x){
    x=x-1;
}

int main() {
    int a = 5; //a bekommt den Wert von x
    erhoehe(a);
    std::cout << a; //6
    int b = 5;
    weniger (b);
    std::cout << b;//4
}
