#include <iostream>
class Ampel{
    private:
        enum class FARBE{
            Rot,
            Gelb,
            Gruen
        };
        FARBE farbe;
public:
    Ampel():farbe(FARBE::Rot){}


        void weiter(){
            if (farbe == FARBE::Rot) {
                farbe = FARBE::Gruen;
            } else if (farbe == FARBE::Gruen) {
                farbe = FARBE::Gelb;
            } else {
                farbe = FARBE::Rot;
            }
        }

    void zeigen(){

        if (farbe==FARBE::Rot)
        {std::cout << "Die Ampel ist rot.\n";}
        else if (farbe==FARBE::Gelb)
        {std::cout << "Die Ampel ist gelb.\n";}
        else if (farbe==FARBE::Gruen)
        {std::cout << "Die Ampel ist grün.\n";}


    }

};
int main(){

    Ampel A;
    A.zeigen();
    A.weiter();
    A.zeigen();
    A.weiter();
    A.zeigen();
    A.weiter();
    A.zeigen();
    A.weiter();
    A.zeigen();
    A.weiter();
    A.zeigen();
    A.weiter();
    A.zeigen();
    A.weiter();
    return 0;
}
