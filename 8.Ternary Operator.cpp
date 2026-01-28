/*8. TERNARY OPERATOR*/
//Mögliche Schreibweise, wenn nur ein If und Else gefragt wird.
//Schreibweise Deklaration = Bedingung ? TRUE-Anweisung : FALSE-Anweisung
#include <iostream>
int main (){
    short x = 2;
    short y = 1;
    short z = y > x ? y : x; //Gibt jeweils den größeren Wert zurück.
    std::cout << z;


    return 0;
}
