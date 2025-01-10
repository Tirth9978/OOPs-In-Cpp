#include<iostream>
#include<string.h>
using namespace std;

class player{
     public : 
          char * name;
          int health;
          char level;

          player(char arr[],int health,char level){
               this->name = new char[100];
               strcpy(this->name,arr);
               this->health = health;
               this->level = level;
          }

          void GetInfo(){
               cout << "[ Name : " << this->name  << ", ";
               cout << "Health : " << this->health << ", ";
               cout << "Level : " << this->level << " ]\n\n"; 
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

     // As we can see that the name of player 2 is also changed because we have used shallow copy
     // So, we have to use deep copy to avoid this problem
     return 0;
}


/*


Output :
     For Player 1 : 
     [ Name : Tirth, Health : 100, Level : A ]
     For Player 2 : 
     [ Name : Tirth, Health : 100, Level : A ]
     For

     After changing the name of Player 1 :
     For Player 1 : 
     [ Name : sirth, Health : 100, Level : A ]
     For Player 2 : 
     [ Name : sirth, Health : 100, Level : A ]


*/