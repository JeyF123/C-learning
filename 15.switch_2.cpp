#include <iostream>
class Ampel
{
private:
    enum class Farbe{
      Rot,
      Gelb,
      Gruen
    };
Farbe farbe;
public:
Ampel():farbe(Farbe::Rot){}
void weiter(){
switch (farbe){
    case Farbe::Rot:
        farbe=Farbe::Gelb;
        break;
    case Farbe::Gelb:
        farbe=Farbe::Gruen;
        break;
    case Farbe::Gruen:
        farbe=Farbe::Rot;
        break;

}
}
void anzeigen(){
    if(farbe==Farbe::Rot){
        std::cout << "Die Ampel steht auf rot.\n";}
    else if(farbe==Farbe::Gelb){
        std::cout << "Die Ampel steht auf gelb.\n";}
    if(farbe==Farbe::Gruen){
        std::cout << "Die Ampel steht auf grün.\n";
    }
}
};

int main(){
    Ampel A;
    A.anzeigen();
    A.weiter();
    A.anzeigen();
    A.weiter();
    A.anzeigen();
    A.weiter();
    A.anzeigen();
    A.weiter();
    A.anzeigen();
    A.weiter();
    return 0;
}
