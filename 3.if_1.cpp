//3.  I F,   E L S E   I F ,   E L S E
#include <iostream>

int main(){
    std::uint32_t number;
    std::cout << "Please enter your guess: ";
    std::cin >> number;
    std::cout << number;

    if (number <=10)
    {
         if (number == 4)
         {
             std::cout << "\nYou won!.\n";
        }
        else{
            std::cout << "\nYou lost!\n";
        }
    }
    else {

        std::cout << "\nYou entered an invalid number\n";
    }


    return 0;
}
