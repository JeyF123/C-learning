#include <map>
#include <iostream>
#include <string>
#include <fstream>

void benutzerID(int& p_benutzerID){
    std::cout << "Bitte die BenutzerID eingeben\n";
    std::cin >> p_benutzerID;
}

void stati (std::string& p_stati){
    std::cout << "Bitte die Stati in 0 und 1 eingeben\n";
    std::cin >> p_stati;
}


int main(){
    int b_benutzerID;
    benutzerID(b_benutzerID);

    std::string b_stati;
    stati(b_stati);

    std::map<int,std::string> eingabe;
    eingabe[b_benutzerID] = b_stati;

    std::cout << eingabe[b_benutzerID] << "\n";
    std::ofstream datei("Los.txt", std::ios::app);

    for (const auto& eintrag:eingabe){
        datei << eintrag.first << " " << eintrag.second << "\n";

    }
    return 0;
}

