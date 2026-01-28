#include <iostream>

class Tier {
private:
    int alter;

public:
    Tier(int a) : alter(a) {}
    Tier() : alter(0) {}

    int getAlter() const {
        return alter;
    }

    void sprich() {
        std::cout << "Tier macht ein Geraeusch\n";
    }
};

class Hund : public Tier {
private:
    static constexpr int STARTALTER = 5;

public:
    Hund() : Tier(STARTALTER) {}

    void sprich() {
        std::cout << "Hund bellt\n";
    }

    void bellen() {
        std::cout << "Hund bellt laut\n";
    }
};

int main() {
    Hund hund1;

    Tier* tierSicht = &hund1;

    hund1.bellen();        // Hund-Sicht
    hund1.sprich();        // Hund-Sicht

    tierSicht->sprich();   // Tier-Sicht

    std::cout << tierSicht->getAlter() << "\n";

    return 0;
}
