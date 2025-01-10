#include<iostream>
#include<string>
using namespace std;


//Class
class teacher{
     // Attributes ~ Just Variables
     string name;
     string subject;
     string dep;

     // Methods ~ Function
     void changedepartment(string newde){
          dep = newde;
          
     }
};

int main(){

     //Objects
     teacher t1;
     teacher t2;
     teacher t3;

     return 0;
}