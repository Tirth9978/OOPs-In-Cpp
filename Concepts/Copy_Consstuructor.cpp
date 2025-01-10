#include<iostream>
using namespace std;

class player{
     public : 
          int health ;
          char leavel;

          player(int health,char leavel){
               this->health = health;
               this->leavel = leavel;
          }

          void GetInfo(){
               cout << "Health : " << health << endl;
               cout << "Leavel : " << leavel << endl;
               return ;
          }

};

int main(){
     player p1(100,'A');
     cout << "Player 1 : " << endl;
     p1.GetInfo();

     // Copy Constructor
     player p2(p1);
     cout << "Player 2 : " << endl;
     p2.GetInfo();
     return 0;
}