#include <iostream>
#include <string>
#include <map>

int main(){
    std::map<std::string, int> alter;
    alter["Gerald"] = 1;
    alter["Nicole"] = 2;
    alter["Kimmy"] = 3;

    auto suche = alter.find("Bla");

    if (suche != alter.end()) {
        std::cout << suche->second << "\n";// Wenn vorhanden = 1, ansonsten leer.
    }


}
