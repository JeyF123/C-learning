#include <iostream>
#include <vector>
int main(){
    std::vector<int> zahlen;
    zahlen.push_back(10); //hinten anhängen = push_back
    zahlen.push_back(20);
    zahlen.push_back(30);
    std::cout << zahlen[0]; //10
    std::cout << zahlen.size(); //3 (Anzahl)

    for (int i = 0; i < zahlen.size(); ++i) {
        std::cout << zahlen[i] << "\n";
    }
    std::cout << zahlen.at(1); // wie [1], aber sicherer, da Index geprüft wird
    //std::cout << zahlen[4]; erzeugt Fehler, mit Speicherabzug geschrieben.
    std::cout << zahlen.at(4);

    //Letztes Element entfernen

    zahlen.pop_back();

    //Elemente direkt initialisieren
    std::vector<int> zahlen1 = {5, 12, 7, 20, 3};

    for (int x : zahlen1) {
        if (x > 10) { //gibt Zahlen größer als 10 innerhalb des Vektors aus.
            std::cout << x << "\n";
        }
    }



    return 0;
}
