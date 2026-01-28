#include <iostream>
#include <string>

int main (){
    std::string text;
    std::getline(std::cin, text);
    std::cout << "Dein Text war: " << text << "\n";
    return 0;
}

