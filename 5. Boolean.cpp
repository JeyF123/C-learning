// 5.   B O O L E A N

#include <iostream>
#include <cstdint>

//NOT
//!true => false
//!false => true

/*bool prüft den Wahrheitswert. Es wird als Variable deklariert inklusive der Prüfbedingung.
 * std::boolalpha erzeugt die Werte true/false anstelle 1/0
 * std::noboolalpha setzt den Schalter wieder zurück.

int main(){
    std::int32_t number= 5;
    bool check = ((number >=0)&&(number <=10));
    std::cout << "Bool Check: " << check << "\n"; /*0/1*/
        /*oder*/
    std::cout << "Bool Check: " <<std::boolalpha /*true/false*/ << check << "\n";
    //Der Boolalpha-Schalter bleibt bis auf Widerspruch aktiv.
    /*Umdrehung*/

    bool check1 = !((number >=0)&&(number <=10));
    std::cout << "Bool Check: " <<std::noboolalpha << check1 << "\n"; /*0/1*/
    /*oder*/

    std::int32_t number1 =11;
    bool check2 = ((number1 >=0)&&(number1 <=10));
    std::cout << "Bool Check: " << check2 << "\n"; /*0/1*/






    return 0;
}
