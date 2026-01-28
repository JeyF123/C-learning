#include <iostream>
#include <string>
#include <map>
//Map. Schlüssel und Wert.




int main(){
    std::map<std::string, int> alter;
    alter["Gerald"] = 1;
    alter["Nicole"] =2;
    alter["Kimmy"] = 3;

    std::cout << alter["Gerald"] << "\n";

    for (const auto& eintrag : alter) {
        std::cout << eintrag.first << " "//first Schlüssel
        << eintrag.second << "\n";//second Wert
    }


}
