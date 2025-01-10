/*

Use of getter and setter in c++
Getter and setter are two conventional methods in object-oriented programming that help to set and get the value of a variable.
Getter and setter are also known as accessor and mutator in c++.
Getter and setter are used to access the private data members of a class.


*/


#include<iostream>
using namespace std;

class player{
     // By default all the members of the class are private
     private : 
          int health ;
          char leavel;


     public :

          //Setter
          void sethealth(int h) {
               health = h;
               return ;
          }
          void setleavel(char ch){
               leavel = ch;
               return ;
          }

          // Getter 

          int gethealth(){
               return health;
          }
          char getleavel(){
               return leavel;
          }
};

int main(){
     player p1;
     p1.sethealth(100);
     p1.setleavel('A');
     cout << "Health : " << p1.gethealth() << endl;

     cout << "Leavel : " << p1.getleavel() << endl;  
     return 0;
}