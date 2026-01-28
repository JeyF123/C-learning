#include <iostream>

int funktion1(int x){
    x=x+2;
    return x;
}

int funktion2(int& x){ //Rückgabewert wird in b geschrieben
    x=x+3;
    return x;
}

int funktion3(int x){
    x=x+4;
    return x;
}



int main (){
    int a=1;
    std::cout << funktion1(a);
    std::cout << a;
    int b=1;
    std::cout << funktion2(b);
    std::cout << b;
    int c= 3;
    std::cout << funktion3(c);
    std::cout << c;


    return 0;
}
