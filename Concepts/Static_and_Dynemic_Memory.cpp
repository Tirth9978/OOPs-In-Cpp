#include<iostream>
using namespace std;

class hero{
     public : 
          int hralth ;
          char leavel;
};

int main(){

     // Static Allocation
     hero h1;
     cout << h1.hralth <<endl;


     // Dynemic Allocation
     hero * h2 = new hero;
     cout << (*h2).hralth <<endl;
     //or
     cout << h2 -> hralth <<endl;
     return 0;
}