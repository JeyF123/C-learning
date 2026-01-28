/* 4 .   V E R G L E I C H S O P E R A T O R E N */
#include <iostream>

//Greater Equal: >=
//Greater: >
//Equal: ==
//Less: <
//Less Equal: <=

//AND: &&
//OR: ||

int main(){
    std::uint32_t number;
    std::cout << "Please enter your guess: ";
    std::cin >> number;

    if (number <=10)
    {
         if (number == 4)
         {
             std::cout << "\nYou won!\n";
        }
        else if (number == 2)
        {
            std::cout << "\nYou had a little luck!\n";
        }
        else{
            std::cout << "\nYou lost!\n";
        }
    }
    else {

        std::cout << "\nYou entered an invalid number.\n";
    }


    return 0;
}
