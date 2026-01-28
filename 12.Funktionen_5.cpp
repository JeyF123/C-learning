#include <iostream>

void add(int a, int b){
    std::cout << a+b << "\n";
}

void user (){
    std::string name;
    std::cout << "Bitte gib deinen Namen ein: \n";
    std::getline (std::cin, name);
    std::cout << "Hallo " << name << "\n";

}



int main (){
    int x = 5;
    int y = 7;
    add(x,y);
    user();

    return 0;
}
