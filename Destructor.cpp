#include<iostream>
#include<string>
using namespace std;

class player{
     public :
          string name ;
          int health;
          char level;   

          player(string name, int health, char level){
               this->name = name;
               this->health = health;
               this->level = level;
          }

          ~player(){
               cout << "Destructor called for " << name << endl;
          }
};

int main(){
     player p1("Tirth",100,'A');

     player * p2 = new player("Ram",200,'B');
     // Here we have to delete the memory allocated to p2
     delete p2;

     //For p1 destructor will be called automatically when the program ends
     //But for p2 we have to delete the memory allocated to it
     return 0;
}

/*

Output:
     Destructor called for Ram
     Destructor called for Tirth

*/