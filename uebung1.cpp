#include <iostream>

class Zaehler {
public:
    int wert;

    void setze(int neu) {
        neu=0;
    }
};

int main() {
    Zaehler z;
    z.wert = 0;

    z.setze(5);

    std::cout << z.wert << "\n";
}
