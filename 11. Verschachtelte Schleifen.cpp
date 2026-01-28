/*11. Verschachtelte Schleifen*/
/* 2Dimensionale Vorschleifen kann man sich am besten als Raster vorstellen.
 * 1te Iteration entspricht den Zeilen, die 2te den Spalten.
 */
#include <iostream>

int main (){

    for (int i = 0; i<=10;i++){
        for (int j = 0; j<=10;j++)
        {
            std::cout << "j: " << j << " ";
        }
            std::cout << "i: " << i << "\n";

}

return 0;
}
