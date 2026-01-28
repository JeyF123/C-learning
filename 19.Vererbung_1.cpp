#include <iostream>

class Tier {
private:
    int alter; //Membervariable

public:
    // Konstruktor mit Parameter
    Tier(int a) : alter(a) {}

    // (optional, aber oft praktisch)
    Tier() : alter(0) {}

    int getAlter() const {
        return alter;
    }
};

class Hund : public Tier {
public:
    Hund() : Tier(5) {}
};

int main() {
    Hund h;
    std::cout << h.getAlter() << "\n";
    return 0;
}
