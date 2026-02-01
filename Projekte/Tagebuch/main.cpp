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
    void ausgabe(){

        std::ofstream datei ("tagebuch.txt");
        for(char& x:text){
            x+=37;
        }
        datei << datum << "\n" << text;
        datei.close();
    }
    void entschluesseln() {
        for (char &x : text) {
            x -= 37;
        }
    }


};

int main(){
    Tagebuch benutzer;
    benutzer.eintrag_datum();
    benutzer.eintrag_text();
    benutzer.ausgabe();
}

