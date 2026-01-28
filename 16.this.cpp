#include <iostream>

class Zaehler {
private:
    int wert;//Membervariable

public:
    Zaehler(int wert){ //Parametervariable) {
        this->wert = wert; //Die Membervariable erhält den Wert des Parameters.
        std::cout << this-> wert; //zeigt die Membervariable.
    }

    void setze(int wert) {
        this->wert = wert;
    }

    void anzeigen() const {
        std::cout << wert << "\n";
    }
};

int main() {
    Zaehler z(5);
    z.anzeigen();   // 5

    z.setze(10);
    z.anzeigen();   // 10
}
