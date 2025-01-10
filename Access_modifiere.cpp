#include<iostream>
using namespace std;

//Class
class teacher{
     //Private 
     private:
          float salary  ;

     
     // Public
     public:
          // Attributes ~ Just Variables
          string name;
          string subject;
          string dep;
          // float salary;

          // Methods ~ Function
          void changesubject(string newde){
               dep = newde;
               
          }
};

int main(){
     
     //Object
     teacher t1;
     
     t1.name = "Tirth Patel";
     t1.subject = "Programming";
     t1.dep = "CS50";
     

     cout << "Name : " << t1.name <<endl;
     cout << "Subject : " << t1.subject <<endl;
     

     // Pravit things We can't access from outside class.
     // cout << "salary : " << t1.salary << endl;
 
     return 0;
}