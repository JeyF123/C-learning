#include <iostream>
int main(){
    int a =5;
    int& b = a; //b ist eine Referenz zu a. a ändert sich nun durch b;
    b = 6; //a wird 6
    std::cout << a;
    a=5;
    std::cout << a;
    b=7;
    std::cout << a;
}
