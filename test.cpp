#include <iostream>

// Übergabe per Wert:
// x ist eine KOPIE von a.
// Die Funktion liest den Wert, ändert nichts am Original.
int funktion1(int x){
    return x;   // gibt die Kopie von a zurück
}

// Übergabe per Wert:
// x ist eine KOPIE von b.
// Die Änderung betrifft NUR die Kopie.
int funktion2(int x){
    x = 5;      // ändert nur die lokale Kopie x
    return x;   // gibt 5 zurück, b bleibt unverändert
}

// Übergabe per Referenz:
// x ist ein ALIAS (Zweitname) für c.
// Änderungen wirken direkt auf c.
int funktion3(int& x){
    x = 7;      // setzt c auf 7
    return x;   // gibt den neuen Wert von c zurück
}

int main (){
    int a = 1;
    int b = 2;
    int c = 3;

    std::cout << "a: " << funktion1(a) << "\n"; // Ausgabe: 1, a bleibt 1
    std::cout << "b: " << funktion2(b) << "\n"; // Ausgabe: 5, b bleibt 2
    std::cout << "c: " << funktion3(c) << "\n"; // Ausgabe: 7, c wird 7

    return 0;
}
