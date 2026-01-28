#include <iostream>
int main (){
    int schalter=0;
    switch (schalter){
        case 0:
        std::cout << "Es ist eingeschaltet.\n";
        break;

        case 1:
            std::cout << "Es ist ausgeschaltet.\n";
            break;
        case 2:
            std::cout << "Defekt!.\n";
            break;

    }
    return 0;
}
