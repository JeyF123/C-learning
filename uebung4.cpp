#include <iostream>
#include <string>
class Car {
private:
    int geschwindigkeit;
    int kw;
    std::string farbe;
    std::string marke;
    std::string modell;

public:

Car (int a, int b, std::string c, std::string d, std::string e) : geschwindigkeit(a), kw(b),farbe(c),marke(d),modell(e){}

int zeigeGeschwindigkeit (int a) {
    return geschwindigkeit;
}

int zeigeKW () {
    return kw;
}

std::string zeigeFarbe(){
    return farbe;
}

std::string zeigeMarke(){
    return farbe;
}

std::string zeigeModell(){
    return farbe;
}




};
int main(){
    int a = 175;
    int b = 65;
    std::string c= "blau";
    std::string d= "Opel";
    std::string e= "Vectra";
    Car A(a,b,c,d,e);

    std::cout << A.zeigeMarke() << A.zeigeModell() << A.zeigeFarbe() ;

}
