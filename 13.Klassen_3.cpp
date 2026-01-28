#include <iostream>
#include <string>

class Computer {
private:
    int ram_GB;
    std::string mainboard;
    std::string grafikkarte;
    int grafikkarte_GB;
    std::string gehaeuse;
    std::string festplatte;
    int festplatte_GB;

public:
    // Default-Konstruktor
    Computer()
    : ram_GB(0),
    mainboard("leer"),
    grafikkarte("leer"),
    grafikkarte_GB(0),
    gehaeuse("keines"),
    festplatte("leer"),
    festplatte_GB(0)
    {
    }

    // Konstruktor mit Parametern
    Computer(int ram,
             std::string mb,
             std::string gpu,
             int gpu_gb,
             std::string geh,
             std::string hdd,
             int hdd_gb)
    : ram_GB(ram),
    mainboard(mb),
    grafikkarte(gpu),
    grafikkarte_GB(gpu_gb),
    gehaeuse(geh),
    festplatte(hdd),
    festplatte_GB(hdd_gb)
    {
    }

    void zeigeComputer() const {
        std::cout
        << "Mainboard:\t\t" << mainboard << "\n"
        << "Grafikkarte:\t\t" << grafikkarte << "\n"
        << "Grafikkarte (GB):\t" << grafikkarte_GB << "\n"
        << "RAM (GB):\t\t" << ram_GB << "\n"
        << "Gehäuse:\t\t" << gehaeuse << "\n"
        << "Festplatte:\t\t" << festplatte << "\n"
        << "Festplatte (GB):\t" << festplatte_GB << "\n";
    }
};

int main() {
    Computer c1(64, "Asus", "Intel", 16, "Mini-Tower", "SSD", 1000);
    c1.zeigeComputer();

    return 0;
}
