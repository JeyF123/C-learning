#include <iostream>
class Konto {
private:
  int stand;

public:
  Konto() : stand(0) {}

  void einzahlen(int betrag) {
    stand += betrag;
  }
  void abheben(int betrag) {
    if (betrag <= stand) {
      stand -= betrag;
    }
    else{
      std::cout << "nicht erlaubt.";
    }
  }

  void anzeigen() const {
    std::cout << "Ihr Kontostand lautet: " << stand << "\n";

    }



};
int main(){
Konto eins;
eins.anzeigen();
eins.einzahlen(50);
eins.anzeigen();
eins.abheben(70);
eins.anzeigen();

  return 0;
}
