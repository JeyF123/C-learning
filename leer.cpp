#include <iostream>

int main (){
    float square = 0; /*besser immer initialisieren und nicht leer lassen.*/
    std::cout << "Enter the side length of square: ";
    std::cin >> square;
    float square_area = square * square;
    float square_perimeter = square * 4;
    std::cout << "The area of the square is " << square_area << "\n";
    std::cout << "The perimeter of the square is " << square_perimeter << "\n";
    return 0;

}
