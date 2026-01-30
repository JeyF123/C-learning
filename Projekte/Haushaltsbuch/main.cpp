#include <iostream>
#include <string>
#include <map>


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
            std::cout << "{Buchung hinzufügen}";
            break;
        case 2:
            std::cout << "{Buchung suchen}";
        break;
        case 3:
            std::cout << "{Buchungen auflisten}";
            break;
        case 4:
            std::cout << "{Programm beenden}";
            break;
    }

}
