#include <iostream>
class Zaehler{
private:
    int wert;
public:
    Zaehler(int w):wert(w){}

    void setze(int& x){
        wert =x;
    }

    int hole(){
        return wert;
    }
};

int main() {
    int a = 5;
    Zaehler z(0);
    z.setze(a);
    a=9;
    std::cout << z.hole();

}
