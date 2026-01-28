#include <iostream>
class Timer{
private:
  int sekunden;
public:
  Timer():sekunden(0){}

  void tick(){
    sekunden+=1;
  }

  void reset(){
    sekunden=0;
  }
  void anzeigen () const {
    std::cout << "Sekunde: " << sekunden << "\n";
  }
};
int main(){
  Timer A;
  A.anzeigen();
  A.tick();
  A.tick();
  A.anzeigen();
  A.reset();
  A.anzeigen();
  A.tick();
  A.anzeigen();


  return 0;
}
