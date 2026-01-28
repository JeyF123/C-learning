/*10. Primzahl berechnen*/

#include <iostream>

int main (){

    bool is_prime = true;
    int number = 0;
    std::cout << "Bitte gib eine Zahl ein: ";
    std::cin >>number;

    if (number == 0 || number == 1)
    {
        is_prime = false;
    }
    for (int i = 2; i < number; ++i ){
        if (number % i == 0) // Zahl durch Iterator. Bsp 4/2 => teilbar durch 0 vor 4, keine Primzahl
        {
            is_prime = false;

        }

    }
    std::cout << number << " ist eine Primzahl? " << std::boolalpha << is_prime << "\n";
    return 0;
}
