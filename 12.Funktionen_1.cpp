#include <iostream>

//Ohne Rückgabetyp

int add (int a, int b){
    return a+b;
}

int add1 (int a, int b){
    int result = a+b;
    return result;
}

//Mit Rückgabetyp

int main (){
    int a = 5;
    int b =7;
    add(a,b);
    add1(a,b);

    std::cout << add(a,b) << "\n";
    std::cout << add1(a,b) << "\n";





    return 0;
}
