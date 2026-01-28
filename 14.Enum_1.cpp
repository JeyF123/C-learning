#include <iostream>

int main (){
enum class Ampel{
rot,
gelb,
gruen,
};
Ampel zustand = Ampel::gruen;
switch(zustand){
    case Ampel::rot:
        std::cout << "Stop!";
        break;
    case Ampel::gelb:
    std::cout << "bereitmachen!";
    break;
    case Ampel::gruen:
        std::cout << "los!";
        break;
    default:
        std::cout << "Ampel blinkt gelb";
}
}


