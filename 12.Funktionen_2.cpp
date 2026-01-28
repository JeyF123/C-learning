//Die Funktionsvariable ändert den Wert in der Main-Variable.
#include <iostream>

//per Referenz
int referenz (int& x){
    x=5;
    return x;
}

int funktion1 (int x){
    x=9;
    return x;
}

int funktion2 (int x){
    return x;
}


int main (){
    int a =6;
    std::cout << referenz(a) << "\n"; //a übernimmt den Wert der Funktion
    std::cout << a << "\n"; // a = nun auch
    int b = 10;
    std::cout << funktion1(b) << "\n";
    int c = 12;
    std::cout << funktion2(c) << "\n";



    return 0;
}
