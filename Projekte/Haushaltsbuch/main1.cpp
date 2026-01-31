#include <iostream>
#include <string>
#include <vector>

//gesamte Buchung als Klasse

class Buchung{
private:
    std::string datum;
    std::string text;
    float betrag;
public:
    Buchung (std::string p_datum,std::string p_text, float b_betrag):datum(p_datum),text(p_text),betrag(b_betrag){
    }

    void zeigeBuchung(){
        std::cout << datum << " " << " " << text << " " << betrag << "\n";
    }

};

void menue(){

    std::cout << "H A U S H A L T S B U C H\n\nBitte wählen:\n\n";
    std::cout << "1. Eine Buchung hinzufügen\n";
    std::cout << "2. Buchungen auflisten\n";
    std::cout << "3. Buchung suchen\n";
    std::cout << "4. Eine Programm beenden\n";
}

void clearScreen(){
    for (int x = 0;x<100;x++){
        std::cout << "\n";
    }
}



int main(){

    std::vector<Buchung> alleBuchungen;
    while (true){
    menue();

    int auswahl;
    std::cin >> auswahl;

    switch (auswahl){

        case 1:
{
            clearScreen();
            std::cout << "Buchung eintragen: \n\n";
            std::string b_datum;
            std::string b_text;
            float b_betrag;
            std::cout << "Datum: ";
            std::cin >> b_datum;
            std::cout << "Buchungstext: ";
            std::cin >> b_text;
            std::cout << "Betrag: ";
            std::cin >> b_betrag;
            Buchung eintrag(b_datum, b_text, b_betrag);

            alleBuchungen.push_back(eintrag);

            break;

}

        case 2:
            clearScreen();
            std::cout << "Anzahl Buchungen: " << alleBuchungen.size() << "\n";
            for(Buchung x : alleBuchungen){
                x.zeigeBuchung();

            }




            break;
        case 3:
            std::cout << "{Buchungen suchen}";
            break;
        case 4:
            std::cout << "{Programm beenden}";
            return 0;

    }
    }

}
