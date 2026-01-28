#include <fstream>
#include <map>
#include <string>

int main() {
    std::ofstream datei("dic.json");

    std::map<std::string, int> alter;
    alter["Peter"] = 45;
    alter["Paul"] = 30;

    for (const auto& [name, wert] : alter) {
        datei << name << ": " << wert << "\n";
    }

    datei.close();
    return 0;
}
