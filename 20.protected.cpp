class Tier {
protected:
    int x;
public:
    Tier(int a):x(a){}
};

class Hund : public Tier{
public:
    Hund(int a) : Tier(a){}
};
int main(){
    Tier A(5); //braucht int wert
}
/*private: Nur Klasse sieht es.
 protected: Klasse und Unterklasse sehen es
public: Alle sehen es*/
