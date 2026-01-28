#include <fstream>

int main() {
    std::ofstream datei("test.txt");

    datei << "Hallo Welt\n";
    datei << "C++ schreibt in Dateien\n";

    datei.close();
    return 0;
}
