/* 9 .   F O R - S C H L E I F E*/
//Wiederholt einen Vorgang
//for Zählervariable; logischer Ausdruck; Iteration


#include <iostream>
#include <vector>
#include <string>
int main (){

    for (int x = 1; x<=10;x++)
        std::cout << x << "\n";

    std::vector<int> zahlen;
    zahlen.push_back(5);
    zahlen.push_back(10);
    zahlen.push_back(15);
    zahlen.push_back(20);
    zahlen.push_back(25);

    //range for
    for (int a:zahlen){
        std::cout << a << "\n";
    }
    std::string text = "Hallo, wie geht es dir?";
    for (int a:text){
        std::cout << a << " "; //als Ascii code
    }
    std::cout << "\n";

    for (char a:text){
        std::cout << a; //mit char werden daraus buchstaben
    }



    return 0;
}
