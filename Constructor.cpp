#include<iostream>
using namespace std;

//This is the Example of copy constructor
//Copy constructor is a member function which initializes an object using another object of the same class.
//A copy constructor has the following general function prototype:
//ClassName (const ClassName &old_obj);
//Here, old_obj is the object which is to be copied to create a new object.
//The copy constructor is called when a new object is created from an existing object, as a copy of the existing object (see the example below).
//The copy constructor is used to:
class teacher{
     private:
          float salary  ;

     
     public:
          //This is the Example of copy constructor
          teacher(string a,string b,string c,float d){
               name = a;
               subject = b;
               dep = c;
               salary = d;
          }
          string name;
          string subject;
          string dep;
          
          void info(){
               cout << "Name : " << name << endl;
               cout << "Subject : " << subject << endl;
               cout << "Department : " << dep << endl;
               cout << "Salary : " << salary <<endl;
          }
};

int main(){
     cout << "For t1 : " <<endl; 
     teacher t1("Tirth","DSA","ICT",1000);
     t1.info();


     cout << endl << "For t2 : " <<endl;
     //This is the Example of copy constructor
     teacher t2(t1);
     t2.info();


     return 0;
}