#include<iostream>
#include<string>
using namespace std;

// Class A 
class animal{
     public : 
          int age ;
          int Health;

          void Speak(){
               cout << "Speak :)\n";
          }
};


// Class B
class dog : public animal {
     public : 
          string type ;
};


// Class C
class Asian : public dog {

};

int main(){
     Asian a1 ;
     
     return 0;
}


/*

Inheritance like this : 

          A --> B --> C

*/
