#include <iostream>
#include <fstream>

class Tagebuch {
private:
    std::string datum;
    std::string text;

public:
    Tagebuch() {}   // leerer Start

    void eintrag_datum() {
        std::cout << "Bitte gib das Datum ein: ";
        std::getline(std::cin, datum);
    }

    void eintrag_text() {
        std::cout << "Bitte gib den Text ein: ";
        std::getline(std::cin, text);
    }

    void ausgabe() {
        std::ofstream datei("Tagebuch.txt", std::ios::app);
        for (char &x : text) {
            x += 37;
        }
        datei << datum << "\n" << text << "\n\n";
    }



    void lesen(const std::string& dateiname) {
        std::ifstream file(dateiname);

        while (std::getline(file, datum)) {
            std::getline(file, text);

            for (char &x : text) {
                x -= 37;
            }

            std::cout << datum << "\n";
            std::cout << text << "\n\n";
        }
    }
};

void menue(int x){
    std::cout << "1. Ins Tagebuch schreiben\n";
    std::cout << "2. Vom Tagebuch lesen\n\n\n";
}

int main(){
    Tagebuch benutzer;
    int auswahl;
     menue(auswahl);
    std::cin >> auswahl;
    std::cin.ignore();

    switch(auswahl){

        case 1: {
            benutzer.eintrag_datum();
            benutzer.eintrag_text();
            benutzer.ausgabe();
            std::cout << "Eintrag gespeichert!";
            break;
        }

    case 2:
        benutzer.lesen("Tagebuch.txt");
        break;

    default:
        std::cout << "Nur Tasten 1 oder 2 möglich.";
        break;
    }

}
