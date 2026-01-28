#include <iostream>
int main (){
    int schalter=15;
    switch (schalter){
        case 0:
        std::cout << "Es ist eingeschaltet.\n";
        break;

        case 1:
            std::cout << "Es ist ausgeschaltet.\n";
            break;
        default:
            std::cout << "Defekt!\n";
            break;


    }
    return 0;
}
