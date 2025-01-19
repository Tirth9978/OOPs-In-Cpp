#include<iostream>
using namespace std;

class human{
     protected :
          string name;
          int age ;     
};
/*
We can access the protected members of the base class in the derived class.
*/
class male : protected human{
     public: 
          void GetInfo(){
               cout<<"Name : "<<name<<endl;
               cout<<"Age : "<<age<<endl;
          }
};

int main(){
     male m1;
     m1.GetInfo();

     return 0;
}
