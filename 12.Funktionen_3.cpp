#include <cstddef>
#include <iostream>

int funktion1 (int x){ //1
    return x; // nimmt Wert von a an.
}

int funktion2 (int x){ //5
    x=5; //gibt Wert weiter an b, ;
    return x;
}

int funktion3 (int& x){ //7
    x=7; //gibt Wert weiter an c;
    return x;
}


int main (){
    int a=1;
    int b=0;
    int c=3;
    std::cout << "funktion1(a) " << funktion1(a) << "\n";//Funktion hätte keinen Wert ohne a.
    std::cout << "a: " << a << "\n";//a bleibt a
    std::cout << "funktion2() " << funktion2(b) << "\n";//Funktion2 = 5
    std::cout << "b: " << b << "\n";//b= und bleibt 2. B wird nur zur Wiedergabe der Funktion2 verwendet.
    std::cout << "funktion3(c) " << funktion3(c) << "\n";//Funktion3 = 7
     std::cout << "c: " << c << "\n";//c wird zu 7

    return 0;

}
