/*1. Game*/
//Mit den Tasten w,a,s,d soll sich der Spieler bewegen können.

#include <iostream>
int main (){
    char input;
    char links = 'a';
    char rechts = 'd';
    std::cout << "Wähle a oder d\n";
    std::cin >> input;

    if (input == rechts){
        std::cout << "Du hast dich rechts bewegt\n";

    }
    else if (input == links) {
        std::cout << "Du hast dich links bewegt\n";
    }
    else{
        std::cout << "Falsche Eingabe!\n";
    }



    return 0;
}
