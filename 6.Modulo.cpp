/* 6 . M O D U L O */
// % Berechnet den Restwert einer Division. Nützlich bei teil- und nichtteilbaren Zahlen

#include <iostream>

int main (){
   std::uint32_t x = 8;
   std::uint8_t modulo_test = x % 2;
   if (modulo_test == 0)
   {std::cout << "Die Zahl ist gerade\n";
   }
   else {
       std::cout << "Die Zahl ist ungerade\n";
}

   return 0;
}
