#include <iostream>

int main(){
    int zahlen[3];

    zahlen[0] = 10;
    zahlen[1] = 20;
    zahlen[2] = 30;
    zahlen[3] = 40; // Ist über dem Array, kann zu Problemen führen und sollte nicht gemacht werden.
    std::cout << zahlen[3]; //10
    return 0;
}
