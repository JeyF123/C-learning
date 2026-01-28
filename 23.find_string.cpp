#include <iostream>
#include <string>


int main(){
    std::string text = "Das ist ein Text, wo ein Wort gesucht wird.";
    auto pos = text.find("Wort"); //speichert den Wert in pos
    std::cout << pos; // 25 gemeint ist der Index wo "Wort" beginnt. Es wird das erste Vorkommen gesucht.
}
