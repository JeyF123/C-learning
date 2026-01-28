#include <iostream>
#include <string>

class Auto {
private:
    // feste Eigenschaften
    const int reifen = 4;
    const int lenkrad = 1;
    const int lichter = 12;
    const int pedale = 3;
    const int sitze = 5;

    // variable Eigenschaften
    int hubraum_ccm;
    int kw;
    std::string marke;
    std::string modell;
    std::string farbe;
    std::string typ;

public:
    // Default-Konstruktor (gültiger Standardzustand) // Initialisierungsliste
    Auto()
    : hubraum_ccm(0),
    kw(0),
    marke("default"),
    modell("default"),
    farbe("unlackiert"),
    typ("Standard")
    {
    }

    // Konstruktor für echte Autos
    Auto(int hubraum, int leistung,
         std::string m, std::string mo,
         std::string f, std::string t)
    : hubraum_ccm(hubraum),
    kw(leistung),
    marke(m),
    modell(mo),
    farbe(f),
    typ(t)
    {
    }

    void zeigeAuto() const {
        std::cout
        << "Folgendes Fahrzeug wurde gebaut:\n"
        << "Marke:\t" << marke << "\n"
        << "Modell:\t" << modell << "\n"
        << "Farbe:\t" << farbe << "\n"
        << "Hubraum (ccm):\t" << hubraum_ccm << "\n"
        << "Leistung (kW):\t" << kw << "\n"
        << "Bauart:\t" << typ << "\n";
    }
};

int main() {
    Auto a1;  // Default-Auto
    a1.zeigeAuto();

    std::cout << "\n";

    Auto a2(1800, 64, "Opel", "Vectra", "blau", "Kombi");
    a2.zeigeAuto();
}
