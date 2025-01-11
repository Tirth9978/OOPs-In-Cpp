/*

The concept of encapsulation is to hide the internal state of an object 
and require all interactions to be performed through an object's methods. 
This is a fundamental concept in object-oriented programming and is used to 
protect the data stored in an object from being modified in an unauthorized way.

*/



#include<iostream>
#include<string.h>
using namespace std;

class player {
     // Encapsulation
     private : 
          char * name ;
          int health ;
          char level;

     public : 
          player(char name[],int health,char level){
               this-> name = new char[100];
               strcpy(this-> name,name);
               this->health = health;
               this->level = level;
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
     return 0;
}

/*

Advantages of Encapsulation:
     1. Encapsulation helps in the reusability of the code.
     2. Encapsulation helps in the maintenance of the code.
     3. Encapsulation helps in the security of the code.
     4. Encapsulation helps in the enhancement of the code.
     5. Encapsulation helps in the flexibility of the code.

*/
