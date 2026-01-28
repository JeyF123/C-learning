#include <iostream>

class Haus {
private:
    int tueren;
    int fenster;
    int mauern;

public:
    Haus() {
        tueren = 0;
        fenster = 0;
        mauern = 0;
    }

    void baueHaus(int t, int f, int m) {
        tueren = t;
        fenster = f;
        mauern = m;
    }

    void anzeigen() {
        std::cout << "Das Haus hat "
        << tueren << " Türen, "
        << fenster << " Fenster und "
        << mauern << " Mauern.\n";
    }
};

int main() {
    Haus meinHaus1;// EIN Haus
    int tueren_anzahl=2;
    int fenster_anzahl=3;
    int mauern_anzahl=16;
    meinHaus1.baueHaus(tueren_anzahl, fenster_anzahl, mauern_anzahl);   // Eigenschaften setzen
    meinHaus1.anzeigen();           // anzeigen

    return 0;
}
