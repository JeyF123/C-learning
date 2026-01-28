#include <iostream>


class Grundrechnungsarten{
    double a;
    double b;
public:
    Grundrechnungsarten(double x, double y): a(x),b(y){}

    double add (){
       return a+b;
    }

    void zeigeAdd(){
        std::cout << add();
    }

};

int main() {
    double a =5;
    double b = 7;
    Grundrechnungsarten Addition(a,b);
    Addition.zeigeAdd();

}


