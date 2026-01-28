#include <iostream>

class Tier{
private:
    int alter;
    double gewicht;
public:
    Tier(int a,double b):alter(a),gewicht(b){}

    int zeigeAlter(){
        return alter;
    }

    double zeigeGewicht(){
        return gewicht;
    }
};
class Hund : public Tier{
public:
    Hund(int a, double b):Tier(a,b){}

};

int main(){
    int x = 2;
    double y = 13.2;
    Hund A(x,y);

    std::cout << "Hund Alter: " << A.zeigeAlter() << "\n" << "Hund Gewicht: "<< A.zeigeGewicht();
    return 0;
}
