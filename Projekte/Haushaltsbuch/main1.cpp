#include <iostream>
#include <string>
#include <map>
//gesamte Buchung als Klasse

class Buchung{
private:
    std::string datum;
    std::string text;
    float betrag;
public:
    Buchung (std::string p_datum,std::string p_text, float b_betrag):datum(p_datum),text(p_text),betrag(b_betrag){}

    void zeigeBuchung(){
        std::cout << datum << " " << text << " " << betrag;
    }

};


int main(){
    std::cout << "H A U S H A L T S B U C H\n\nBitte wählen:\n\n";
    std::cout << "1. Eine Buchung hinzufügen\n";
    std::cout << "2. Eine Buchung suchen\n";
    std::cout << "3. Buchungen auflisten\n";
    std::cout << "4. Eine Programm beenden\n";
    int auswahl;
    std::cin >> auswahl;



    switch (auswahl){

        case 1:
            std::string b_datum;
            std::string b_text;
            float b_betrag;
            std::cout << "Datum: ";
            std::cin >> b_datum;
            std::cout << "Buchungstext: ";
            std::cin >> b_text;
            std::cout << "Betrag: ";
            std::cin >> b_betrag;
            Buchung neueBuchung(b_datum,b_text,b_betrag);


            break;



        // case 2:
        //     Buchung zeige;
        //     zeige.zeigeBuchung();
        //     break;
        // case 3:
        //     std::cout << "{Buchungen auflisten}";
        //     break;
        // case 4:
        //     std::cout << "{Programm beenden}";
        //     break;
    }

}
