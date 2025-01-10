#include<iostream>
#include<string.h>
using namespace std;

class player{
     public : 
          char * name ;
          int health ;
          char level;

          

          player(char name[],int health,char level){
               this-> name = new char[100];
               strcpy(this-> name,name);
               this->health = health;
               this->level = level;
          }

          player(player & temp){
               char * ch = new char[strlen(temp.name)+1];
               strcpy(ch,temp.name);

               this -> name = ch;

               this->health = temp.health;
               this->level = temp.level;
          }

          void GetInfo(){
               cout << "[ Name : " << this->name << ", ";
               cout << "Health : " << this->health << ", ";
               cout << "Level  : " << this -> level << ", ]\n\n";
               return ;
          }
};

int main(){
     player p1("Tirth",100,'A');
     cout << "For Player 1 : \n";
     p1.GetInfo();

     player p2(p1);
     cout << "For Player 2 : \n";
     p2.GetInfo();

     // Now changing the name of player 1
     p1.name[0] = 's';
     cout << "After changing the name of Player 1 : \n";
     cout << "For Player 1 : \n";
     p1.GetInfo();
     cout << "For Player 2 : \n";
     p2.GetInfo();
     // As we can see that the name of player 2 is not changed because we have used deep copy
     // So, we have to use deep copy to avoid this problem
     

     return 0;
}


/*

Output :
     For Player 1 : 
     [ Name : Tirth, Health : 100, Level  : A, ]

     For Player 2 : 
     [ Name : Tirth, Health : 100, Level  : A, ]

     After changing the name of Player 1 : 
     For Player 1 : 
     [ Name : sirth, Health : 100, Level  : A, ]

     For Player 2 : 
     [ Name : Tirth, Health : 100, Level  : A, ]

*/