#include <iostream>
#include <string>
#include <map>
//Map. Schlüssel und Wert.




int main(){
    std::map<std::string, int> alter;
    alter["Gerald"] = 45;
    alter["Kimmy"] = 2;

    std::cout << alter["Anna"] << "\n";


}
