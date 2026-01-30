#include <iostream>
#include <string>
#include <map>
class Datum_Text{
private:
    std::string datum;
    std::string text;
public:
    Datum_Text(std::string p_datum,std::string p_text):datum(p_datum),text(p_text){}

    void zeigeBuchung(){
        std::cout << datum << " " << text;
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

    std::map<Datum_Text,float>buchung;

    switch (auswahl){

        case 1:
            std::string b_datum;
            std::string b_text;
            std::cout << "Datum: ";
            std::cin >> b_datum;
            std::cout << "Buchungstext: ";
            std::cin >> b_text;

            Datum_Text neueBuchung(b_datum,b_text);
            float betrag;

            break;
        // case 2:
        //     Datum_Text zeige;
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
