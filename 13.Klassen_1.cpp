#include <iostream>


class zaehler{ // zaehler wird zu einem eigenen Datentypen wie int
    public: // macht es nach außen hin sichtbar und verwendbar
        int wert; // Eine Member-Variable der Klasse zaehler

        void erhoehen (){
            wert++; // Eine Member-Variable wird inkrementiert
        }

};


int main ()
    {
        zaehler z; //z ist eine Variable vom Typ zaehler.
        z.wert=0; // Die Member-Variable wert des Objekts z wird auf 0 gesetzt.
        z.erhoehen(); //Die Member-Funktion erhoehen() wird für das Objekt z aufgerufen.
        std::cout << z.wert << "\n"; //Der aktuelle Wert der Member-Variable wert von z wird ausgegeben.

        return 0;

    }
