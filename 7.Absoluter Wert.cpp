/* 7 .   A B S O L U T E  Z A H L  */
//ist der Wert zu Differenz zu 0;

#include <iostream>
int main (){
    double x = -2.5;
    double abs_x = 0;


    if (x <0)
    {
        abs_x = -1 * x;

    }
    else{
        abs_x = x;

    }
    std::cout << "abs_x = " /*2.5*/ << abs_x << "\n";


    return 0;
}
