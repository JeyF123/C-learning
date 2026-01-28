#include <fstream>
#include <string>

void datei(std::string text) {
    std::ofstream datei("test.txt");
    datei << text;
    datei.close();
}

int main() {
    std::string text = "Hallo, wie geht es dir?";
    datei(text);
}
