#include <iostream>
#include <vector>
//Vektoren über Funktionen aufrufen. Unveränderliche Funktionen

void drucke(const std::vector<int>& v){ //const schützt nur in dem Scope in dem es geschrieben ist
    for (int x : v){
        //v.push_back(16); nicht erlaubt durch const
        std::cout << x << " ";
    }
}

int main(){
    std::vector <int> x = {5,3,7,9,11};
    drucke(x);
    x.push_back(16);
    drucke(x);
    return 0;
}
